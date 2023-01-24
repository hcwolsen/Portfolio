// A simple digital record system designed for academic institutions which stores data on students, instructors, staff, and courses in vectors
// I chose to use small data sets and C++ library tools for this project because it is intended to demonstrate my proficiency with the 
// fundamentals of OOP, not with more complex data structures and search/sort algorithms

#ifndef _DigitalRecordSystem_h_
#define _DigitalRecordSystem_h_

#include "Student.h"
#include "Staff.h"
#include "Instructor.h"
#include <vector>
#include <string>
#include <fstream>


class DigitalRecordSystem {
public: 
	DigitalRecordSystem();
	DigitalRecordSystem(const DigitalRecordSystem&);
	void addStudent(const std::string& n, const int& a, const std::string& g);
	void addStaff(const int& a, const int& s, const int& yH, const std::string& t, const std::string& n, const std::string& g);
	void addInstructor(const int& a, const int& s, const int& yH, const std::string& t, const std::string& n, const std::string& g);
	void addCourse(const std::string n, const int& y);

	void launch();
	void enrollNewStudent();
	void addNewFaculty();
	void viewStudentRecords();
	void viewEmployeeRecords();

private:
	std::string orgName;
	std::string fileName;
	vector <Student> students;
	vector <Staff> administrators;
	vector <Instructor> instructors;
	struct course {
		std::string name;

	};

};


DigitalRecordSystem::DigitalRecordSystem() {
	orgName = "";
	fileName = "";
	
}

void DigitalRecordSystem::launch() {
	int selection = 0;
	while (selection != 5) {
		std::cout << "---------------Welcome to " << orgName << "'s digital record system!---------------";
		std::cout << "\n               Please select an option from the menu below:";
		std::cout << "\n               1. Enroll students";
		std::cout << "\n               2. Add new faculty";
		std::cout << "\n               3. View student records";
		std::cout << "\n               4. View employee records";
		std::cout << "\n               5. Exit";
		
		std::cout << "\n\n               Your selection: ";
		cin >> selection;

		while (selection != 1 && selection != 2 || selection != 3 || selection != 4 || selection != 5) {
			std::cout << "\n               Please enter a valid selection: ";
			cin >> selection;
		}
		
		switch (selection) {
		case 1:
			enrollNewStudent();
			break;

		case 2:
			addNewFaculty();
			break;

		case 3:
			viewStudentRecords();
			break;
		
		case 4: 
			viewEmployeeRecords();
			break;

		case 5:
			break;
		}
	}
}

void DigitalRecordSystem::enrollNewStudent() {

}

void DigitalRecordSystem::addNewFaculty() {

}

void DigitalRecordSystem::viewStudentRecords() {

}

void DigitalRecordSystem::viewEmployeeRecords() {

}


#endif