#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "degree.h"
#include "student.h"
#include "roster.h"

int main()
{
    const string studentData[] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Dan,Adams,DanAdamsHarder@Outlook.com,34, 21, 32, 44,SOFTWARE" };


    student student1("POT", "DOOM", "AAAH", "lord@here.com", 25, { 1, 2, 3, 4 }, degreeProgramEnum::SECURITY);

/*
    student1.setStudentID();

    vector<int> daysToCompleteVar{ 34, 21, 32, 44 };
    student1.setdaysToComplete(daysToCompleteVar);

    cout << "student ID: " << student1.getStudentID() << endl;
    
    for (int i = 0; i < daysToCompleteVar.size(); ++i) {
        cout << "Days to complete: " << student1.getdaysToComplete()[i] << endl;
    }*/


   student1.print(printItemEnum::ALL);

    return 0;
}