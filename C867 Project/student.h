#pragma once
#include <cstdint>
#include <string>
#include <array>
class student
{
	int age;
	std::string studentID, firstName, lastName, email, degreeProgram;
	std::array<int, 3> daysToComplete;

public:
	//accessor function

	//mutator function

	//contructor function
	student()
	{
		studentID = "";
		firstName = "";
		lastName = "";
		email = "";
		//degreeProgram = "";
		age = 0;
		daysToComplete = {};
	}
	//print function

};

