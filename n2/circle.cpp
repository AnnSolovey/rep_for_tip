#include <cmath>
#include "circle.h"

circle::circle(float r, float x, float y) {
	set_circle(r, x, y);
}

void circle::set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}

float circle::square() {
	const double pi = 3.1415;
	return pi * radius * radius;
}

bool circle::triangle_around(float a, float b, float c) {
	float p = (a + b + c) / 2;
	float S = sqrt(p * (p - a) * (p - b) * (p - c));
	return (a * b * c) / (4 * S) == radius;
}

bool circle::triangle_in(float a, float b, float c) {
	float p = (a + b + c) / 2;
	float S = sqrt(p * (p - a) * (p - b) * (p - c));
	return S / p == radius;
}

bool circle::check_circle(float r, float x_cntr, float y_cntr) {
	return sqrt((x_cntr - x_center) * (x_cntr - x_center) + (y_cntr - y_center) * (y_cntr - y_center)) <= radius + r;
}