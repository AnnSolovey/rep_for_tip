#pragma once

class eq2 {
    private:

        double a, b, c, D;

    public:

        eq2();

        eq2(double a1, double b1, double c1);

        void set(double a1, double b1, double c1);

        double find_X();

        double find_Y(double x1);

        double get1();

        double get2();

        double get3();

        void show_sum();
        
        friend eq2 operator+ (eq2 &e1, eq2 &e2);
};
