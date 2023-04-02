#include "sea.h"

sea::sea() {
	latitude = longitude = max_depth = salinity = area = volume = 0;
}


sea::sea(string n, double latit, double longit, double d, double salt, long long s, long long v) :
	s_name(n), latitude(latit), longitude(longit), max_depth(d), salinity(salt), area(s), volume(v) {}


sea::sea(string n, string ocn_n, double latit, double longit, double d, double salt, long long s, long long v) {
	s_name = n;
	this->ocn_name = ocn_n;
	latitude = latit;
	longitude = longit;
	max_depth = d;
	salinity = salt;
	area = s;
	volume = v;
}

std::ostream& operator<<(std::ostream& stream, sea& s_) {
	stream << "Name of the sea: " << s_.s_name << "\nName of the ocean: " << s_.ocn_name;
	stream << "\nLatitude: " << s_.latitude << "\nLongitude: " << s_.longitude;
	stream << "\nMax depth: " << s_.max_depth << " m\nSalinity: " << s_.salinity;
	stream << "%\nSurface area: " << s_.area << " km^2\nVolume: " << s_.volume << " km^3";
	return stream;
}

std::istream& operator>>(std::istream& stream, sea& s_) {
	cout << "Enter name, belonging to the ocean, geographical coordinates, max depth, salinity, surface area and volume of the sea in the specified order:\n";
	stream >> s_.s_name >> s_.ocn_name >> s_.latitude >> s_.longitude >> s_.max_depth >> s_.salinity >> s_.area >> s_.volume;
	return stream;
}