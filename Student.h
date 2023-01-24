#ifndef _Student_h_
#define _Student_h_

class Student {
public:
	Student();
	Student(const std::string& n, const int& a, const std::string& g, const int& y, const int& id);
	std::string getName();
	int getAge();
	std::string getYear();
	int getIDNumber();
	void setName(const std::string& n);
	void setAge(const int& a);
	void setIDNumber(const int& id);
	void graduate();

	
protected:
	std::string name;
	int age;
	std::string year;
	int idNumber;
	int year;
	std::string gender;
	struct course {
		std::string name;
		char grade;
	};
	course c[12];
};

Student::Student() {
	name = "";
	age = -1;
	gender = "";
	idNumber = 0000000;
	year = 0;
}

Student::Student(const std::string& n, const int& a, const std::string& g, const int& y, const int& id) {
	name = n;
	age = a;
	gender = g;
	year = y - 1;
	idNumber = id;
}

std::string Student::getName() {
	return name;
}

int Student::getAge() {
	return age;
}

std::string Student::getYear() {
	std::string seniority[5] = { "Freshman", "Sophomore", "Junior", "Senior", "Alumnus" };
	return seniority[year];
}

int Student::getIDNumber() {
	return idNumber;
}

void Student::setName(const std::string& n) {
	name = n;
}

void Student::setAge(const int& a) {
	age = a;
}

void Student::setIDNumber(const int& id) {
	idNumber = id;
}

void Student::graduate() {
	if (year == 4) {
		return;
	} else if (year < 4) {
		year++;
	}

}

#endif
