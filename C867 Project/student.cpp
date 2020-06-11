#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "student.h"

	//accessor function definitions
	string student::getStudentID() const {
		return studentID;
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
	void student::setDegreeProgram(int degreeProgram) {
		this->degreeProgram = degreeProgram;
	}
	void student::setdaysToComplete(vector<int> daysToComplete) {
		this->daysToComplete = daysToComplete;
	}
	//contructor function definition

	//print function definition

