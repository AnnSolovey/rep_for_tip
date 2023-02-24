#include "circle.h"

circle::circle(float r, float x, float y) {
	set_circle(r, x, y);
}

void circle::set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}