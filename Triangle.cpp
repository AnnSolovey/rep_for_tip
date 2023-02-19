#include <iostream>
#include "Triangle.h"

using namespace std;

void Triangle::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
}

void Triangle::show() {
    cout << "1st side: " << a << endl;
    cout << "2nd side: " << b << endl;
    cout << "3rd side: " << c << endl;
}