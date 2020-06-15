#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

#include "degree.h"
#include "student.h"

static const string degreeProgramStrings[] = { "Security", "Network", "Software", "None" };

	//accessor function definitions
	string student::getStudentID() const {
		return studentID;
	}
	string student::getFirstName() const {
		return firstName;
	}
	string student::getLastName() const {
		return lastName;
	}
	string student::getEmailAddress() const {
		return email;
	}
	int student::getAge() const {
		return age;
	}
	degreeProgramEnum student::getDegreeProgram() const {
		return degreeProgram;
	}
	vector<int> student::getdaysToComplete() const {
		return daysToComplete;
	}

	//mutator function definitions
	void student::setStudentID(string studentID) {
		this->studentID = studentID;
	}
	void student::setFirstName(string firstName) {
		this->firstName = firstName;
	}
	void student::setLastName(string lastName) {
		this->lastName = lastName;
	}
	void student::setEmailAddress(string email) {
		this->email = email;
	}
	void student::setAge(int age) {
		this->age = age;
	}
	void student::setDegreeProgram(degreeProgramEnum degreeProgram) {
		this->degreeProgram = degreeProgram;
	}
	void student::setdaysToComplete(vector<int> daysToComplete) {
		this->daysToComplete = daysToComplete;
	}

	student::student(
	string StudentID,
	string firstName,
	string lastName,
	string email,
	int age,
	vector<int> daysToComplete,
	degreeProgramEnum degreeProgram) {
		this->studentID = StudentID;
		this->firstName = firstName;
		this->lastName = lastName;
		this->email = email;
		this->age = age;
		this->degreeProgram = degreeProgram;
		this->daysToComplete = daysToComplete;

		return;
	}

	//print function definition
	void student::print(printItemEnum printItem) const {

		switch (printItem) {
		case printItemEnum::STUDENTID:
			cout << BOLDBLUE << "StudentID: " << RESET << studentID << endl;
			break;
		case printItemEnum::FIRSTNAME:
			cout << BOLDBLUE << "First Name: " << RESET << firstName << endl;
			break;
		case printItemEnum::LASTNAME:
			cout << BOLDBLUE << "Last Name: " << RESET << lastName << endl;
			break;
		case printItemEnum::EMAIL:
			cout << BOLDBLUE << "Email: " << RESET << email << endl;
			break;
		case printItemEnum::AGE:
			cout << BOLDBLUE << "Age: " << RESET << age << endl;
			break;
		case printItemEnum::DAYSTOCOMPLETE:
			cout << BOLDBLUE << "Days In Course: " << RESET;
			cout << "{ ";
			for (size_t i = 0; i < daysToComplete.size(); i++)
			{
				cout << daysToComplete.at(i);
				if (daysToComplete.size() > i + 1) {
					cout << ", ";
				}
			}
			cout << " }";
			break;
		case printItemEnum::DEGREEPROGRAM:
			cout << BOLDBLUE << "Program: " << RESET << degreeProgramStrings[(int)degreeProgram] << endl;
			break;
		case printItemEnum::ALL:
			cout << BOLDBLUE << "StudentID: " << RESET << studentID << "   ";
			cout << BOLDBLUE << "First Name: " << RESET << firstName << "   ";
			cout << BOLDBLUE << "Last Name: " << RESET << lastName << "   ";
			cout << BOLDBLUE << "Email: " << RESET << email << "   ";
			cout << BOLDBLUE << "Age: " << RESET << age << "   ";
			cout << BOLDBLUE << "Days In Course: " << RESET;
			cout << "{ ";
			for (size_t i = 0; i < daysToComplete.size(); i++)
			{
				cout << daysToComplete.at(i);
				if (daysToComplete.size() > i + 1) {
					cout << ", ";
				}
			}
			cout << " }" << "   ";

			cout << BOLDBLUE << "Program: " << RESET << degreeProgramStrings[(int)degreeProgram] << endl;
			break;
		}
		

	}

	//Destructor function
	student::~student() {

	}
