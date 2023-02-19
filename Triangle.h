#pragma once

#include <cmath>

class Triangle {
	private:
		double a, b, c;
	public:
		bool exst_tr() {
			return ((a + b > c) && (b + c > a) && (a + c > b));
		}
		void set(double a1, double b1, double c1);
		void show();
		double perimetr() {
			return a + b + c;
		}
		double square() {
			double p = (a + b + c) / 2;
			return sqrt(p * (p - a) * (p - b) * (p - c));
		}
};