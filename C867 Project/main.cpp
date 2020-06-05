#include <iostream>
#include <string>
#include <array>
#include "student.h"
#include "degree.h"
#include "roster.h"


using namespace std;

int main()
{
    const string studentData[] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Dan,Adams,DanAdamsHarder@Outlook.com,34, 21, 32, 44,SOFTWARE" };

    degreeProgram potato = degreeProgram::SOFTWARE;
    cout << "Hello World!" << endl;
    cout << degreeProgramStrings[(int)potato] << endl;
    cout << studentData[0] << endl;

    return 0;
}