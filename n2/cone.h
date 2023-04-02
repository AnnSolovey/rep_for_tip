#include <iostream>
#include <cmath>

#pragma once

using namespace std;

class cone {
	private:
		double x, y, z;
		double radius;
		double height;

	public:
		const double pi = 3.14159265;

		cone();
		cone(double r, double h);
		cone(double a, double b, double c, double r, double h);

		void setCoordinate(double a, double b, double c);
		void setRadius(double r);
		void setHeight(double h);

		double getRadius();
		double getHeight();

		double area();

		double volume();

		friend std::ostream& operator<<(std::ostream& stream, cone obj);

		friend bool operator<(cone c1, cone c2);
		friend bool operator>(cone c1, cone c2);
		friend bool operator==(cone c1, cone c2);
};