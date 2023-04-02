#include "ocean.h"

ocean::ocean() {
	latitude = longitude = max_depth = salinity = area = volume = 0;
}

ocean::ocean(string n, double latit, double longit, double d, double salt, long long s, long long v) :
	ocn_name(n), latitude(latit), longitude(longit), max_depth(d), salinity(salt), area(s), volume(v) {}

std::ostream& operator<<(std::ostream& stream, ocean& ocn) {
	stream << "Name of the ocean: " << ocn.ocn_name << "\nLatitude: " << ocn.latitude << "\nLongitude: " << ocn.longitude;
	stream << "\nMax depth: " << ocn.max_depth << " m\nSalinity: " << ocn.salinity;
	stream << "%\nSurface area: " << ocn.area << " km^2\nVolume: " << ocn.volume << " km^3";
	return stream;
}

std::istream& operator>>(std::istream& stream, ocean& ocn) {
	cout << "Enter name, geographical coordinates, max depth, salinity, surface area and volume of the ocean in the specified order:\n";
	stream >> ocn.ocn_name >> ocn.latitude >> ocn.longitude >> ocn.max_depth >> ocn.salinity;
	stream >> ocn.area >> ocn.volume;
	return stream;
}