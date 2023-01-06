#ifndef _Senior_h_
#define _Senior_h_

#include "Student.h"

class Senior : Student {
public:
	void setEnglish4Grade(char g);
	void setMath4Grade(char g);
	void setScience4Grade(char g);

private:
	year = "Senior";
	course english4;
	course math4;
	course science4;
};

#endif