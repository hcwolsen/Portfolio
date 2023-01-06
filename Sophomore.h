#ifndef _Sophomore_h_
#define _Sophomore_h_

#include "Student.h"

class Sophomore : Student {
public:
	void setEnglish2Grade(char g);
	void setMath2Grade(char g);
	void setScience2Grade(char g);

private:
	year = "Sophomore";
	course english2;
	course math2;
	course science2;
};

#endif