#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

struct contact {
    string name;
    string numbers;
};

struct Node {
    contact* data;
    Node* left;
    Node* right;
};



Node* addNode(contact* person, Node* tree) {
    if (tree == nullptr) {
        tree = new Node;
        tree->data = person;
        tree->left = tree->right = nullptr;
        return tree;
    }

    if (person->name < tree->data->name) {
        tree->left = addNode(person, tree->left);
    }
    else if (person->name > tree->data->name) {
        tree->right = addNode(person, tree->right);
    }
    else {
        tree->data->numbers.push_back(person->numbers[0]);
    }


    return tree;
}



void printNode(const string& name, Node* root) {
    while (root->left != nullptr) {
        if (name == root->data->name) {
            cout << root->data->numbers << endl;
            break;
        }
        root->left = root->left->left;
    }

    while (root->right != nullptr) {
        if (name == root->data->name) {
            cout << root->data->numbers << endl;
            break;
        }
        root->left = root->left->right;
    }
}



bool searchNode(const string& name, Node* root) {
    if (root != nullptr) {
        if (name < root->data->name) {
            searchNode(name, root->left);
        }
        else if (name > root->data->name) {
            searchNode(name, root->right);
        }
        else if (name == root->data->name) {
            return true;
        }
    }
    else { return false; }
}



Node* delNode(const string& name, Node* node) {
    if (node == nullptr) {
        return node;
    }

    if (name < node->data->name) {
        node->left = delNode(name, node->left);
    }
    else if (name > node->data->name) {
        node->right = delNode(name, node->right);
    }
    else {
        if (node->left == nullptr && node->right == nullptr) {
            delete node;
            return nullptr;
        }
        else if (node->left != nullptr && node->right == nullptr) {
            node = node->left;
        }
        else if (node->left == nullptr && node->right != nullptr) {
            node = node->right;
        }
        else {
            if (node->left->right == nullptr) {
                Node* temp = node;
                node = node->left;
                node->right = temp->right;
                delete temp;
            }
        }
    }

    return node;
}



int main() {
    setlocale(LC_ALL, "rus");

    Node* root = nullptr;

    bool menu = true;
    string name, numbers;
    int n;

    while (menu) {
        cout << "Выберите операцию:\n1. Добавить запись\n2. Найти запись\n3. Удалить запись\n4. Выйти\n";
        cin >> n;
        switch (n) {
        case 1: {
            cout << "Введите имя: ";
            cin >> name;
            cout << "\nВведите номер(а) в формате +7(999)999-99-99: ";
            cin >> numbers;
            contact* person = new contact{ name, numbers };
            root = addNode(person, root);
            cout << "Запись добавлена.\n";
            break;
        }
        case 2: {
            cout << "Введите имя: ";
            cin >> name;
            if (searchNode(name, root)) {
                cout << "Запись найдена:\n";
                printNode(name, root);
            }
            else {
                cout << "Запись не найдена.\n";
            }
            break;
        }
        case 3: {
            cout << "Введите имя: ";
            cin >> name;
            root = delNode(name, root);
            if (searchNode(name, root)) {
                cout << "Запись не удалена!!!\n";
            }
            else {
                cout << "Запись удалена.\n";
            }
            break;
        }
        case 4: {
            cout << "Работа с телефонной книгой окончена.\n";
            menu = false;
            break;
        }
        default: {
            cout << "Данная операция не может быть выполнена, повторите попытку!\n";
            break;
        }
        }
    }
}
