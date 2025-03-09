// CSC 134
// M3 Lab 1
// Shane Jobes
// 03/09/2025

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int gradeNum;
    string gradeLetter;

    cout << "Enter your numerical grade: " << endl;
    cin >> gradeNum;

    if (gradeNum >= 90 && gradeNum <= 100)
    {
        gradeLetter = "A";
    }
    else if (gradeNum >= 80 && gradeNum < 90)
    {
        gradeLetter = "B";
    }
    else if (gradeNum >= 70 && gradeNum < 80)
    {
        gradeLetter = "C";
    }
    else if (gradeNum >= 60 && gradeNum < 70)
    {
        gradeLetter = "D";
    }
    else if (gradeNum >= 0 && gradeNum < 60)
    {
        gradeLetter = "F";
    }
    else
    {
        cout << "Invalid input, enter an integer between 0 and 100" << endl;
    }

    cout << "Your grade is a(n) " << gradeLetter << endl;


    return 0;
}