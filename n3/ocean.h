#include <iostream>
#include <string>

#pragma once

using namespace std;

class ocean {
	protected:
		string ocn_name = "";

		double max_depth;
		double salinity;

		double latitude;
		double longitude;

		long long area;
		long long volume;

	public:
		ocean();
		ocean(string n, double latit, double longit, double d, double salt, long long s, long long v);

		friend std::ostream& operator<<(std::ostream& stream, ocean& ocn);
		friend std::istream& operator>>(std::istream& stream, ocean& ocn);
};