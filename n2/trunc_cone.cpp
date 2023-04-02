#include "trunc_cone.h"

trunc_cone::trunc_cone() {
	r1 = r2 = x0 = y0 = z0 = h = 0.0;
}

trunc_cone::trunc_cone(double rad1, double rad2, double height) {
	x0 = y0 = z0 = 0.0;
	r1 = rad1; r2 = rad2;
	h = height;
}

trunc_cone::trunc_cone(double a, double b, double c, double rad1, double rad2, double height) {
	x0 = a; y0 = b; z0 = c;
	r1 = rad1; r2 = rad2;
	h = height;
}

void trunc_cone::setRadius(double rad1, double rad2) {
	r1 = rad1; r2 = rad2;
}

double trunc_cone::area() {
	double max_r = max(r1, r2), min_r = min(r1, r2);
	double l = sqrt(h * h + (max_r - min_r) * (max_r - min_r));
	return pi * (r1 * r1 + (r1 + r2) * l + r2 * r2);
}

double trunc_cone::volume() {
	return pi * h * (r1 * r1 + r1 * r2 + r2 * r2) / 3;
}

std::ostream& operator<< (std::ostream& stream, trunc_cone obj) {
	stream << "(" << obj.x0 << "; " << obj.y0 << "; " << obj.z0 << "); ";
	stream << "r1 = " << obj.r1 << "; " << "r2 = " << obj.r2 << "; ";
	stream << "h = " << obj.h << endl;
	return stream;
}

std::istream& operator>>(std::istream& stream, trunc_cone& obj) {
	cout << "Enter coordinates, 1st and 2nd radiuses and height for the truncated cone in the specified order: ";
	stream >> obj.x0 >> obj.y0 >> obj.z0 >> obj.r1 >> obj.r2 >> obj.h;
	return stream;
}

bool operator<(trunc_cone tc1, trunc_cone tc2) {
	if (tc1.volume() < tc2.volume()) {
		return true;
	}
	return false;
}

bool operator>(trunc_cone tc1, trunc_cone tc2) {
	if (tc1.volume() > tc2.volume()) {
		return true;
	}
	return false;
}

bool operator==(trunc_cone tc1, trunc_cone tc2) {
	if (tc1.r1 == tc2.r1 && tc1.r2 == tc2.r2 && tc1.h == tc2.h) {
		return true;
	}
	return false;
}