#include <iostream>
#include "cone.h"

using namespace std;

int main() {
	cone c1(3, 7);
	cone c2(1, 2, 3, 5, 10);

	cout << "Surface area of the cone #1: " << c1.area() << endl;
	cout << "Volume of the cone #1: " << c1.volume() << endl << endl;
	cout << "Surface area of the cone #2: " << c2.area() << endl;
	cout << "Volume of the cone #2: " << c2.volume() << endl << endl << endl;



	int k;
	double x, y, z, r, h;

	cout << "Enter the number of cones: ";
	cin >> k;
	cout << endl;
	cone* cones = new cone[k];

	for (int i = 0; i < k; i++) {
		cout << "Enter coordinates, radius and height for the cone #" << i + 1 << ": ";
		cin >> x >> y >> z >> r >> h;
		cones[i].setCoordinate(x, y, z);
		cones[i].setRadius(r);
		cones[i].setHeight(h);
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < k; i++) {
		cout << "Coordinates, radius and height of the cone #" << i + 1 << ": " << cones[i];
		cout << "Surface area of this cone: " << cones[i].area() << endl;
		cout << "Volume of this cone: " << cones[i].volume() << endl << endl;
	}
}
