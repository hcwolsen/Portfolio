#ifndef _Instructor_h_
#define _Instructor_h_

#include "Staff.h"

class Instructor : Staff {
public:


private:
	struct course {
		std::string name;
		std::string gradeLevel;
		int sectionsTaught;
	};
};



#endif