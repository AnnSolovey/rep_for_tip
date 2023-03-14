#include <iostream>
#include "rational.h"

using namespace std;

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
		if (a1 > b1)
			a1 = a1 % b1;
		a = a1 / NOD(a1, b1);
		b = b1 / NOD(a1, b1);
		this->a = a;
		this->b = b;
	}
	else {
		cout << "The denominator is zero!" << endl;
		return;
	}
}

int rational::get1() {
	return a;
}

int rational::get2() {
	return b;
}

void rational::show() {
	cout << a << "/" << b << endl;
}

rational rational::operator + (rational &t1) {
	rational sum;
	sum.a = this->a * t1.get2() + t1.get1() * this->b;
	sum.b = this->b * t1.get2();
	return sum;
}

rational operator - (rational &t1, rational &t2) {
	rational dif;
	dif.set(t1.get1() * t2.get2() + t2.get1() * t1.get2(), t1.get2() * t2.get2());
	return dif;
}