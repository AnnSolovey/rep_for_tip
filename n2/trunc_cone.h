#include <iostream>
#include <cmath>
#include "cone.h"

#pragma once

using namespace std;

class trunc_cone : public cone {
	private:
		double x0, y0, z0;
		double r1, r2;
		double h;

	public:
		trunc_cone();
		trunc_cone(double rad1, double rad2, double height);
		trunc_cone(double a, double b, double c, double rad1, double rad2, double height);

		void setRadius(double rad1, double rad2);

		double area();
		double volume();

		friend std::ostream& operator<<(std::ostream& stream, trunc_cone obj);
		friend std::istream& operator>>(std::istream& stream, trunc_cone& obj);

		friend bool operator<(trunc_cone tc1, trunc_cone tc2);
		friend bool operator>(trunc_cone tc1, trunc_cone tc2);
		friend bool operator==(trunc_cone tc1, trunc_cone tc2);
};
