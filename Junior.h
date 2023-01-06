#ifndef _Junior_h_
#define _Junior_h_

#include "Student.h"

class Junior : Student {
public:
	void setEnglish3Grade(char g);
	void setMath3Grade(char g);
	void setScience3Grade(char g);

private:
	year = "Junior";
	course english3;
	course math3;
	course science3;
};

#endif