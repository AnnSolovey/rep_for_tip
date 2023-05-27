#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "automat.h"

using namespace std;

void automat::get_N() {
	ifstream numb("numb_of_labels.txt");
	string line;
	getline(numb, line);
	numb.close();
	istringstream str(line);
	str >> N;
}