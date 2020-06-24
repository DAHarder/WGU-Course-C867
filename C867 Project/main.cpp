#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "degree.h"
#include "student.h"
#include "roster.h"

// Function declaration - Function Parses data from StudentData and inputs it into the Roster class
roster inputStudentData(const string studentData[], size_t numStudents);

int main()
{
//----------- Personal Output information
    cout << RED << "Scripting and Programming - Applications – C867" << endl;
    cout << RED << "C++" << endl;
    cout << RED << "Dan Adams - 000970570" << RESET << endl << endl << endl;

//-----------Input Data
     const string studentData[] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Dan,Adams,DanAdamsHarder@Outlook.com,34, 21, 32, 44,SOFTWARE", };

     const size_t numStudents = sizeof(studentData) / sizeof(studentData[0]);

//-----------Creating and populating the Roster Class
   roster classRoster = inputStudentData(studentData, numStudents);
   cout << endl;

//-----------Performing Rubric Function Requirements
   classRoster.printAll();
   classRoster.printInvalidEmails();

   cout << "--PRINTING AVG DAYS IN COURSE FOR ALL STUDENTS--" << endl << endl;
   for (size_t i = 0; i < classRoster.classRosterArray.size(); i++)
   {
       classRoster.printAverageDaysInCourse(classRoster.classRosterArray.at(i)->getStudentID());
   }
   cout << endl;

   classRoster.printByDegreeProgram(degreeProgramEnum::SOFTWARE);
   classRoster.remove("A3");
   cout << endl;
   classRoster.printAll();
   classRoster.remove("A3");

    return 0;
}

//Function Definition
roster inputStudentData(const string studentData[], size_t numStudents) {

    roster roster;

    for (size_t i = 0; i < numStudents; i++)
    {
        size_t rhs = studentData[i].find(",");
        string StudentIDInput = studentData[i].substr(0, rhs);

        size_t lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        string firstNameInput = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        string lastNameInput = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        string emailInput = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        int ageInput = stoi(studentData[i].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        int daysInClass1Input = stoi(studentData[i].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        int daysInClass2Input = stoi(studentData[i].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        int daysInClass3Input = stoi(studentData[i].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        degreeProgramEnum programInputEnum = degreeProgramEnum::NONE;
        string programInputString = studentData[i].substr(lhs, studentData[i].length() - lhs);
        int pIntECode = 12345;

        try {
            if (programInputString == "SECURITY") { programInputEnum = degreeProgramEnum::SECURITY; }
            else if (programInputString == "NETWORK") { programInputEnum = degreeProgramEnum::NETWORK; }
            else if (programInputString == "SOFTWARE") { programInputEnum = degreeProgramEnum::SOFTWARE; }
            else throw pIntECode;
        }
        catch (int pIntECode) {
            cout << "ERROR: Unknown Degree Program entry.  Please review input." << endl;
        }

        roster.add(StudentIDInput, firstNameInput, lastNameInput, emailInput, ageInput, daysInClass1Input, daysInClass2Input, daysInClass3Input, programInputEnum);
    }
    return roster;
}