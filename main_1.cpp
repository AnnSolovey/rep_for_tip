#include <iostream>
#include "Triangle.h"

using namespace std;

int main() {
	Triangle mass[3];
	double a, b, c;
	for (int i = 0; i < 3; i++) {
		cout << "Enter a, b and c for the triangle #" << i + 1 << " separated by a space: " << endl;
		cin >> a >> b >> c;
		cout << endl;
		mass[i].set(a, b, c);
		if (!(mass[i].exst_tr())) {
			mass[i].show();
			cout << "There is no triangle with such sides, try again!" << endl << endl;
			i--;
		}
	}
	for (int i = 0; i < 3; i++) {
		mass[i].show();
		cout << "Perimeter of the triangle: " << mass[i].perimetr() << endl;
		cout << "Square of the triangle: " << mass[i].square() << endl << endl;
	}
}