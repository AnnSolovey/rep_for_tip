#include <iostream>
#include <cmath>
#include "figure.h"

using namespace std;

int main() {
	float x1, x2, x3, x4, y1, y2, y3, y4;

	for (int i = 0; i < 3; i++) {
		cout << "Enter x1, x2, x3, x4, y1, y2, y3, y4 for the quadrangle #" << i + 1 << " separated by a space: " << endl;
		cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
		cout << endl;

		figure(x1, x2, x3, x4, y1, y2, y3, y4).show();

		cout << "Note: 1 = true = 'yes', 0 = false = 'no'" << endl << endl;

		cout << "Is this quadrangle a rectangle? " << figure(x1, x2, x3, x4, y1, y2, y3, y4).is_prug() << endl << endl;

		cout << "Is this quadrangle a square? " << figure(x1, x2, x3, x4, y1, y2, y3, y4).is_square() << endl << endl;

		cout << "Is this quadrangle a rhomb? " << figure(x1, x2, x3, x4, y1, y2, y3, y4).is_romb() << endl << endl;

		cout << "Is it possible to describe a circle around this quadrangle? " << figure(x1, x2, x3, x4, y1, y2, y3, y4).is_in_circle() << endl << endl;

		cout << "Is it possible to describe a circle in this quadrangle? " << figure(x1, x2, x3, x4, y1, y2, y3, y4).is_out_circle() << endl << endl;
	}
}