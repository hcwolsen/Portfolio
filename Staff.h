#ifndef _Staff_h_
#define _Staff_h_

class Staff {
public:
	Staff();
	Staff(const int& a, const int& s, const int& yW, const int& yH, const int& id, const std::string& t, const std::string& n, const std::string& g);
	int getAge();
	int getSalaryUSD();
	int getYearsWorked();
	int getYearHired();
	int getEmployeeID();
	std::string getJobTitle();
	std::string getName();
	std::string getGender();
	int setAge(const int& a);
	int setSalaryUSD(const int& s);
	int setYearsWorked(const int& yW);
	int setYearHired(const int& yH);
	int setEmployeeID(const int& id);
	std::string setJobTitle(const std::string& t);
	std::string setName(const std::string& n);
	std::string setGender(const std::string& g);

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

Staff::Staff(const int& a, const int& s, const int& yW, const int& yH, const int& id, const std::string& t, const std::string& n, const std::string& g) {
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
	return yearHired;
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

int Staff::setAge(const int& a) {
	age = a;
}

int Staff::setSalaryUSD(const int& s) {
	salaryUSD = s;
}

int Staff::setYearsWorked(const int& yW) {
	yearsWorked = yW;
}

int Staff::setYearHired(const int& yH) {
	yearHired = yH;
}

int Staff::setEmployeeID(const int& id) {
	employeeID = id;
}

std::string Staff::setJobTitle(const std::string& t) {
	jobTitle = t;
}

std::string Staff::setName(const std::string& n) {
	name = n;
}

std::string Staff::setGender(const std::string& g) {
	gender = g;
}

#endif