#include "ocean.h"
#include <iostream>
#include <string>

#pragma once

using namespace std;

class sea : public ocean {
    protected:
        string s_name = "";

        double max_depth;
        double salinity;

        double latitude;
        double longitude;

        long long area;
        long long volume;

    public:
        sea();
        sea(string n, double latit, double longit, double d, double salt, long long s, long long v);
        sea(string n, string ocn_n, double latit, double longit, double d, double salt, long long s, long long v);

        friend std::ostream& operator<<(std::ostream& stream, sea& s_);
        friend std::istream& operator>>(std::istream& stream, sea& s_);
};