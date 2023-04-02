#include "sea.h"
#include <iostream>

#pragma once

using namespace std;

class bay : public sea {
    protected:
        string b_name = "";

        double max_depth;

        double latitude;
        double longitude;

        long long area;

    public:
        bay();
        bay(string n, string s_n, string ocn_n, double latit, double longit, double d, long long s);

        friend std::ostream& operator<<(std::ostream& stream, bay& b);
        friend std::istream& operator>>(std::istream& stream, bay& b);
};