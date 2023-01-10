#ifndef _Staff_h_
#define _Staff_h_

class Staff {
public:
	Staff();
	Staff(int a, int s, int yW, int yH, int id, std::string t, std::string n, std::string g);
	int getAge();
	int getSalaryUSD();
	int getYearsWorked();
	int getYearHired();
	int getEmployeeID();
	std::string getJobTitle();
	std::string getName();
	std::string getGender();
	int setAge(int a);
	int setSalaryUSD(int s);
	int setYearsWorked(int yW);
	int setYearHired(int yH);
	int setEmployeeID(int id);
	std::string setJobTitle(std::string t);
	std::string setName(std::string n);
	std::string setGender(std::string g);

protected:
	int age;
	int salaryUSD;
	int yearsWorked;
	int yearHired;
	int employeeID;
	std::string jobTitle;
	std::string name;
	std::string gender;
};

Staff::Staff() {
	age = 18;
	salaryUSD = 50000;
	yearsWorked = 0;
	yearHired = 2000;
	employeeID = 0000000;
	jobTitle = "";
	name = "";
	gender = "";
}

Staff::Staff(int a, int s, int yW, int yH, int id, std::string t, std::string n, std::string g) {
	age = a;
	salaryUSD = s;
	yearsWorked = yW;
	yearHired = yH;
	employeeID = id;
	jobTitle = t;
	name = n;
	gender = g;
}

int Staff::getAge() {
	return age;
}

int Staff::getSalaryUSD() {
	return salaryUSD;
}

int Staff::getYearsWorked() {
	return yearsWorked;
}

int Staff::getYearHired() {
	return getYearHired;
}

int Staff::getEmployeeID() {
	return employeeID;
}

std::string Staff::getJobTitle() {
	return jobTitle;
}

std::string Staff::getName() {
	return name;
}

std::string Staff::getGender() {
	return gender;
}

int Staff::setAge(int a) {
	age = a;
}

int Staff::setSalaryUSD(int s) {
	salaryUSD = s;
}

int Staff::setYearsWorked(int yW) {
	yearsWorked = yW;
}

int Staff::setYearHired(int yH) {
	yearHired = yH;
}

int Staff::setEmployeeID(int id) {
	employeeID = id;
}

std::string Staff::setJobTitle(std::string t) {
	jobTitle = t;
}

std::string Staff::setName(std::string n) {
	name = n;
}

std::string Staff::setGender(std::string g) {
	gender = g;
}

#endif