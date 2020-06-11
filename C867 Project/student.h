//file student.0
#pragma once


	class student
	{
	private:
		int age, degreeProgram;
		string studentID, firstName, lastName, email;
		vector<int> daysToComplete;

	public:
		//accessor functions
		string getStudentID() const;
		string getFirstName() const; //FIXME Define me
		string getLastName() const; //FIXME Define me
		string getEmailAddress() const; //FIXME Define me
		int getAge() const; //FIXME Define me
		int getDegreeProgram() const; //FIXME Define me
		vector<int> getdaysToComplete() const; //FIXME Define me

		//mutator functions
		void setStudentID(string studentID);
		void setFirstName(string firstName); //FIXME Define me
		void setLastName(string lastName); //FIXME Define me
		void setEmailAddress(string email); //FIXME Define me
		void setAge(int age); //FIXME Define me
		void setDegreeProgram(int degreeProgram); //FIXME Define me
		void setdaysToComplete(vector<int> daysToComplete); //FIXME Define me

		//contructor function

		//print function

	};
