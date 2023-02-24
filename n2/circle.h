#pragma once
#include <cmath>

class circle {
private:

	float radius, x_center, y_center;

public:

	circle(float r, float x, float y);

	void set_circle(float r, float x, float y);

	float square() {
		const double pi = 3.1415;
		return pi * radius * radius;
	}

	bool triangle_around(float a, float b, float c) {
		float p = (a + b + c) / 2;
		float S = sqrt(p * (p - a) * (p - b) * (p - c));
		return (a * b * c) / (4 * S) == radius;
	}

	bool triangle_in(float a, float b, float c) {
		float p = (a + b + c) / 2;
		float S = sqrt(p * (p - a) * (p - b) * (p - c));
		return S / p == radius;
	}

	bool check_circle(float r, float x_cntr, float y_cntr) {
		return sqrt((x_cntr - x_center) * (x_cntr - x_center) + (y_cntr - y_center) * (y_cntr - y_center)) <= radius + r;
	}
};
