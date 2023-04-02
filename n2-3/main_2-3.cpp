#include <iostream>
#include "rational.h"

using namespace std;

int main() {
	int n, a, b, n1, n2;

	cout << "Enter the number of fractions: ";
	cin >> n;
	rational* mass = new rational[n];

	for (int i = 0; i < n; i++) {
		cout << "\nEnter numerator and denominator of the fraction #" << i + 1 << ": " << endl;
		cin >> a >> b;
		mass[i].set(a, b);
		mass[i].show();
	}

	cout << "\nEnter the numbers of the fractions you want to add up: ";
	cin >> n1 >> n2;
	(mass[n1 - 1] + mass[n2 - 1]).show();

	cout << "\nEnter the numbers of fractions that you want to subtract from each other (n1 > n2): ";
	cin >> n1 >> n2;
	(mass[n1 - 1] - mass[n2 - 1]).show();

	cout << "\nEnter the number of the fraction whose numerator you want to increase by one: ";
	cin >> n1;
	mass[n1 - 1]++;
	mass[n1 - 1].show();

	cout << "\nEnter the numbers of fractions with which you want to check the operation ==: ";
	cin >> n1 >> n2;
	cout << (mass[n1 - 1] == mass[n2 - 1]) << endl;

	cout << "\nEnter the numbers of fractions you want to compare (checking the condition n1 > n2): ";
	cin >> n1 >> n2;
	cout << (mass[n1 - 1] > mass[n2 - 1]) << endl;

	cout << "\nEnter the fraction numbers to assign the value: ";
	cin >> n1 >> n2;
	n1 = n2;
	cout << n1;

	delete[] mass;
}