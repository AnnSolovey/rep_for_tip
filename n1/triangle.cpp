#include <iostream>
#include <cmath>
#include "triangle.h"

using namespace std;

bool triangle::exst_tr() {
	return ((a + b > c) && (b + c > a) && (a + c > b));
}

void triangle::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
}

void triangle::show() {
    cout << "1st side: " << a << endl;
    cout << "2nd side: " << b << endl;
    cout << "3rd side: " << c << endl;
}

double triangle::perimetr() {
	return a + b + c;
}

double triangle::square() {
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}