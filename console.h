#pragma once
#include "detector.h"
#include "e_drive.h"

class console : public detector, e_drive {
	public:
		int I;
		void get_I(int i);
		void set_Q();
};