//file roster.h
#pragma once


	class roster
	{
	private:
		vector<student*> classRosterArray;
	public:
		//mutator functions
		void add(string studentID,
			string firstName,
			string lastName,
			string emailAddress,
			int age,
			int daysInCourse1,
			int daysInCourse2,
			int daysInCourse3,
			degreeProgramEnum degreeprogram);
		void remove(string studentID);

		//print functions
		void printAll() const;
		void printAverageDaysInCourse(string studentID);
		void printByDegreeProgram(degreeProgramEnum degreeProgram);
		void printInvalidEmails();

		//constructor function
		roster();

		//destructor function
		~roster();
	};

