#include <iostream>

#pragma once

using namespace std;

class rational {
	private:

		int a, b;

	public:

		rational();
		rational(int a1, int b1);

		void set(int a1, int b1);

		void show();

		rational operator+(rational& r2);
		friend rational operator-(rational& r1, rational& r2);
		void operator++(int n);
		friend bool operator==(rational& r1, rational& r2);
		friend bool operator>(rational& r1, rational& r2);
		void operator=(rational& r);

		~rational();
};