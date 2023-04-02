#include <iostream>
#include "ocean.h"
#include "sea.h"
#include "bay.h"

using namespace std;

int main() {
	ocean o1("Atlantic", 0, 25, 8376, 37, 106460000, 310410900);
	cout << o1 << endl << endl;

	/*ocean o2;
	cin >> o2;
	cout << endl << o2 << endl << endl;*/

	sea s1("North", "Atlantic", 56, 3, 725, 35, 750000, 94000);
	cout << s1 << endl << endl;

	sea s2("Caspian", "-", 42, 51, 1025, 12.9, 390000, 78000);
	cout << s2 << endl << endl;

	/*sea s3;
	cin >> s3;
	cout << endl << s3 << endl << endl;*/

	bay b1("Bothnia", "Baltic", "-", 62, 19, 295, 117000);
	cout << b1 << endl << endl;

	/*bay b2;
	cin >> b2;
	cout << endl << b2 << endl << endl;*/
}