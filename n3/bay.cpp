#include "bay.h"

bay::bay() {
	latitude = longitude = max_depth = area = 0;
}

bay::bay(string n, string s_n, string ocn_n, double latit, double longit, double d, long long s) {
	b_name = n;
	this->s_name = s_n;
	this->ocn_name = ocn_n;
	latitude = latit;
	longitude = longit;
	max_depth = d;
	area = s;
}

std::ostream& operator<<(std::ostream& stream, bay& b) {
	stream << "Name of the bay: " << b.b_name;
	stream << "\nName of the sea: " << b.s_name << "\nName of the ocean: " << b.ocn_name;
	stream << "\nLatitude: " << b.latitude << "\nLongitude: " << b.longitude;
	stream << "\nMax depth: " << b.max_depth << " m\nSurface area: " << b.area << " km^2";
	return stream;
}

std::istream& operator>>(std::istream& stream, bay& b) {
	cout << "Enter name, belonging to the sea or the ocean, geographical coordinates, max depth and surface area of the bay in the specified order:\n";
	stream >> b.b_name >> b.s_name >> b.ocn_name >> b.latitude >> b.longitude >> b.max_depth >> b.area;
	return stream;
}