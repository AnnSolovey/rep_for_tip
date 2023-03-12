#include <iostream>
#include <cmath>
#include "eq2.h"

using namespace std;

eq2::eq2() {
    a = 0; b = 0; c = 0; D = 0;
}

eq2::eq2(double a1, double b1, double c1) {
    set(a1, b1, c1);
}

void eq2::set(double a1, double b1, double c1) {
    a = a1; b = b1; c = c1;
    D = b * b - 4 * a * c;
}

double eq2::find_X() {
    if (D < 0) {
        cout << "There are no x values." << endl;
        return 0;
    }
    else {
        if (D == 0) {
            double x = -b / (2 * a);
            cout << "There is one x value: " << x << endl;
            return x;
        }
        else {
            double x1 = (-b - sqrt(D)) / (2 * a);
            double x2 = (-b + sqrt(D)) / (2 * a);
            cout << "There are two x values, the largest value: " << max(x1, x2) << endl;
            return max(x1, x2);
        }
    }
}

double eq2::find_Y(double x1) {
    return a * x1 * x1 + b * x1 + c;
}

void eq2::show_sum() {
    cout << "The equation obtained after summation the coefficients: (" << a << ")x^2 + (" << b << ")x + (" << c << ")" << endl;
}

double eq2::get1() {
    return a;
}

double eq2::get2() {
    return b;
}

double eq2::get3() {
    return c;
}

eq2 operator+ (eq2 &e1, eq2 &e2) {
    eq2 sum;
    sum.set(e1.get1() + e2.get1(), e1.get2() + e2.get2(), e1.get3() + e2.get3());
    return sum;
}
