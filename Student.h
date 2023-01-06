#ifndef _Student_h_
#define _Student_h_

class Student {
public:
	std::string getName();
	std::string getAge();
	std::string getYear();
	int getIDNumber();
	
protected:
	std::string name;
	std::string age;
	std::string year;
	int idNumber;
	struct course {
		std::string name;
		char grade;
	};
};

#endif
