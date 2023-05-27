#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "container.h"

using namespace std;

void container::get_N() {
	ifstream numb("numb_of_goods.txt");
	string line;
	getline(numb, line);
	numb.close();
	istringstream str(line);
	str >> N;
}