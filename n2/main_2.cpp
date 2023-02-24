#include <iostream>
#include <cmath>
#include "circle.h"

using namespace std;

int main() {
	float r, x, y, a, b, c, r1, x1, y1;

	for (int i = 0; i < 3; i++) {
		cout << "Enter radius, x_center and y_center for the circle #" << i + 1 << " separated by a space: " << endl;
		cin >> r >> x >> y;
		cout << endl;
		cout << "Square of the circle: " << circle(r, x, y).square() << endl << endl;

		cout << "Enter a, b and c for a triangle separated by a space: " << endl;
		cin >> a >> b >> c;
		cout << endl;
		cout << "Is it possible to describe the circle #" << i + 1 << " around this triangle? " << circle(r, x, y).triangle_around(a, b, c) << endl << endl;
		cout << "Is it possible to describe the circle #" << i + 1 << " in this triangle? " << circle(r, x, y).triangle_in(a, b, c) << endl << endl;

		cout << "Enter r, x_cntr and y_cntr for a new circle separated by a space: " << endl;
		cin >> r1 >> x1 >> y1;
		cout << endl;
		cout << "Does this circle intersect with the circle #" << i + 1 << "? " << circle(r, x, y).check_circle(r1, x1, y1) << endl << endl;
	}
}