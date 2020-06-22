#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "degree.h"
#include "student.h"
#include "roster.h"

void inputStudentData(const string studentData[], size_t numStudents);

int main()
{
     const string studentData[] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Dan,Adams,DanAdamsHarder@Outlook.com,34, 21, 32, 44,SOFTWARE", };

     const size_t numStudents = sizeof(studentData) / sizeof(studentData[0]);

   inputStudentData(studentData, numStudents);

    return 0;
}

void inputStudentData(const string studentData[], size_t numStudents) {

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

        //FIXME ADD CODE FOR ENUMERATOR HERE

        cout << daysInClass1Input << endl;
    }
}