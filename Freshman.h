#ifndef _Freshman_h_
#define _Freshman_h_

#include "Student.h"

class Freshman : Student {
public:
	void setEnglish1Grade(char g);
	void setMath1Grade(char g);
	void setScience1Grade(char g);

private:
	year = "Freshman";
	course english1;
	course math1;
	course science1;
};

#endif