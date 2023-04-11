#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Node {
    int value, count = 0;
    Node *left, *right;
};



Node* addNode(int key, Node* tree) {
    if (tree == NULL) {
        tree = new Node;
        tree->value = key;
        tree->left = tree->right = NULL;
        tree->count = 1;
        return tree;
    }

    if (key < tree->value) {
        tree->left = addNode(key, tree->left);
    }
    else if (key > tree->value) {
        tree->right = addNode(key, tree->right);
    }
    else { tree->count += 1; }

    return tree;
}



void printTree(Node* root) {
    if (root->left != NULL) {
        printTree(root->left);
    }

    cout << root->value << ' ';

    if (root->right != NULL) {
        printTree(root->right);
    }
}



int depthTree(Node* root) {
    if (root == NULL) { return 0; }

    return max(depthTree(root->left), depthTree(root->right)) + 1;
}



bool searchNode(int num, Node* root) {
    if (root != NULL) {
        if (num < root->value) {
            searchNode(num, root->left);
        }
        else if (num > root->value) {
            searchNode(num, root->right);
        }
        else if (num == root->value) {
            return true;
        }
    }
    else { return false; }
}



Node* maxNode(Node* root) {
    if (root->right->right != NULL) {
        maxNode(root->right);
    }

    return root;
}



Node* delNode(int num, Node* node) {
    if (node == NULL) { return node; }

    if (num < node->value) {
        node->left = delNode(num, node->left);
    }
    else if (num > node->value) {
        node->right = delNode(num, node->right);
    }
    else {
        if (node->left == NULL && node->right == NULL) {
            delete node;
            return NULL;
        }
        else if (node->left != NULL && node->right != NULL) {
            if (node->left->right == NULL) {
                Node* t = node;
                node = node->left;
                node->right = t->right;
                delete t;
            }
            else {
                Node* m = maxNode(node->left);
                node->value = m->right->value;
                node->left = delNode(m->right->value, node->left);
            }
        }
        else {
            if (node->left != NULL && node->right == NULL) {
                node = node->left;
            }
            else if (node->left == NULL && node->right != NULL) {
                node = node->right;
            }
        }
    }

    return node;
}



int main() {
    srand(time(NULL));

    int n, count = rand() % 15, r = rand() % 20 + 1;
    Node* root = NULL;
    cout << "Root: " << r;
    cout << "\nNumbers in the binary tree: ";
    root = addNode(r, root);
    for (int i = 1; i <= count; i++) {
        int num = rand() % 10 + 1;
        cout << num << " ";
        Node* bt = addNode(num, root);
    }
    cout << "\n\n";

    printTree(root);

    cout << "\nTree depth: " << depthTree(root);
    
    cout << "\n\nEnter the number, which you want to find in the binary tree: ";
    cin >> n;
    if (searchNode(n, root)) {
        cout << "The number found\n\n";
    }
    else {
        cout << "The number doesn't found!!!\n\n";
    }

    cout << "Enter the number, which you want to remove from the binary tree: ";
    cin >> n;
    root = delNode(n, root);
    printTree(root);
    if (searchNode(n, root)) {
        cout << "\nThe number hasn't been deleted!!!\n";
    }
    else {
        cout << "\nThe number has been deleted\n";
    }
}