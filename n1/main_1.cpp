#include <iostream>
#include <time.h>
#include <stdio.h>
#include "eq2.h"

using namespace std;

int main() {
	srand((unsigned)time(NULL));
	srand((unsigned)rand());

	eq2 mass[2];
	double a, b, c;

	for (int i = 0; i < 2; i++) {
		cout << "Enter the coefficients a, b and c for the equation #" << i + 1 << " separated by a space: " << endl;
		cin >> a >> b >> c;
		cout << endl;

		mass[i].set(a, b, c);

		cout << "Solution of the equation #" << i + 1 << ":" << endl;
		mass[i].find_X();
		cout << endl;

		double x0 = rand() % 10;
		cout << "The value of Y at X = " << x0 << ":" << endl << mass[i].find_Y(x0) << endl << endl << endl;
	}

	eq2 e3;
	e3 = mass[0] + mass[1];
	e3.show_sum();
}