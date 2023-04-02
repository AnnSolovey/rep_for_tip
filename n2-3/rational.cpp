#include "rational.h"

int NOD(int x, int y) {
	while (x != y)
		if (x > y) x -= y;
		else y -= x;
	return x;
}

rational::rational() {
	a = 0; b = 1;
}

rational::rational(int a1, int b1) {
	set(a1, b1);
}

void rational::set(int a1, int b1) {
	if (b1 != 0) {
		a = a1 / NOD(a1, b1);
		b = b1 / NOD(a1, b1);
		if (a1 > b1)
			a = a1 % b1;
		else if (a == b) {
			cout << "The numerator and the denominator should not be equal to each other!" << endl;
			set(a1, b1 + 1);
		}
	}
	else {
		cout << "The denominator is zero!" << endl;
		set(a1 + 1, b1 + 2);
	}
}

void rational::show() {
	cout << a << "/" << b << endl;
}

rational rational::operator+(rational& r2) {
	rational sum = rational();
	sum.set(a * r2.b + r2.a * b, b * r2.b);
	return sum;
}

rational operator- (rational& r1, rational& r2) {
	rational dif = rational(r1.a * r2.b - r2.a * r1.b, r1.b * r2.b);
	return dif;
}

void rational::operator++(int n) {
	this->set(a + 1, b);
}

bool operator==(rational& r1, rational& r2) {
	if (r1.a == r2.a && r1.b == r2.b) {
		return true;
	}
	return false;
}

bool operator>(rational& r1, rational& r2) {
	if (r1.a * r2.b > r2.a * r1.b) {
		return true;
	}
	return false;
}

void rational::operator=(rational& r) {
	this->set(r.a, r.b);
}

rational::~rational() {}