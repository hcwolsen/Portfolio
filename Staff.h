#ifndef _Staff_h_
#define _Staff_h_

class Staff {
public:
	int getAge();
	int getSalaryUSD();
	int getYearsWorked();
	int getEmployeeID();
	std::string getJobTitle();
	std::string getName();

protected:
	int age;
	int salaryUSD;
	int yearsWorked;
	int employeeID;
	std::string jobTitle;
	std::string name;
};

#endif