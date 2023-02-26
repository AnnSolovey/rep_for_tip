#include <iostream>
#include <cmath>
#include "figure.h"

using namespace std;

figure::figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3));
	d = sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4));
	d1 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	d2 = sqrt((x4 - x2) * (x4 - x2) + (y4 - y2) * (y4 - y2));
	S = abs((x1 - x2) * (y1 + y2) + (x2 - x3) * (y2 + y3) + (x3 - x4) * (y3 + y4) + (x4 - x1) * (y4 + y1)) / 2;
	P = a + b + c + d;
}

void figure::show() {
	cout << "1st vertex: (" << x1 << ", " << y1 << ")" << endl; // ќчень странно вывод€тс€ координаты вершин. ¬еро€тнее всего, это происходит из-за типа данных float.
	cout << "2nd vertex: (" << x2 << ", " << y2 << ")" << endl;
	cout << "3rd vertex: (" << x3 << ", " << y3 << ")" << endl;
	cout << "4th vertex: (" << x4 << ", " << y4 << ")" << endl << endl;
	cout << "1st side: " << a << endl;
	cout << "2nd side: " << b << endl;
	cout << "3rd side: " << c << endl;
	cout << "4th side: " << d << endl << endl;
	cout << "Square of the quadrangle: " << S << endl;
	cout << "Perimeter of the quadrangle: " << P << endl << endl;
}

bool figure::is_prug() {
	return (a == c) && (b == d) && (d1 == d2) && (a != b) && (a != d) && (b != c) && (c != d);
}

bool figure::is_square() {
	return (a == b) && (a == d) && (b == c) && (c == d) && (d1 == d2);
}

bool figure::is_romb() {
	return (a == b) && (a == d) && (b == c) && (c == d) && (d1 != d2);
}

bool figure::is_in_circle() {
	if (((a == c) && (b == d) && (d1 == d2) && (a != b) && (a != d) && (b != c) && (c != d)) || ((a == b) && (a == d) && (b == c) && (c == d) && (d1 == d2))) {
		return true;
	}
	else {
		float p = (a + b + c + d) / 2;
		return S == sqrt((p-a)*(p-b)*(p-c)*(p-d));
	}
}

bool figure::is_out_circle() {
	return a + c == b + d;
}