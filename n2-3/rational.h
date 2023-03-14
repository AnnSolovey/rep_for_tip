#pragma once

class rational {
	private:

		int a, b;

	public:

		rational();

		rational(int a1, int b1);

		void set(int a1, int b1);

		int get1();

		int get2();

		void show();

		rational operator + (rational& t1);

		friend rational operator - (rational& t1, rational &t2);
};