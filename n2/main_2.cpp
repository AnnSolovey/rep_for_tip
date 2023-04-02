#include <iostream>
#include "cone.h"
#include "trunc_cone.h"

using namespace std;

int main() {
    trunc_cone c1;
    cin >> c1;

    cout << "Truncated cone #1: " << c1;
    cout << "S = " << c1.area() << endl;
    cout << "V = " << c1.volume() << endl << endl;


    trunc_cone c2(2, 5, 10);

    cout << "Truncated cone #2: " << c2;
    cout << "S = " << c2.area() << endl;
    cout << "V = " << c2.volume() << endl << endl;


    trunc_cone c3(1, 2, 3, 2, 5, 10);

    cout << "Truncated cone #3: " << c3;
    cout << "S = " << c3.area() << endl;
    cout << "V = " << c3.volume() << endl << endl << endl;




    bool a;

    cout << "Truncated cone #1 > truncated cone #3? ";
    a = c1 > c3;
    cout << a << endl << endl;

    cout << "Truncated cone #1 < truncated cone #2? ";
    a = c1 < c2;
    cout << a << endl << endl;

    cout << "Truncated cone #2 == truncated cone #3? ";
    a = c2 == c3;
    cout << a << endl;
}