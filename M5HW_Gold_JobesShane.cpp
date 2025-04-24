// CSC 134
// M5Hw - Gold
// 04/23/2025
// Shane Jobes

#include <iostream>
#include <iomanip>
using namespace std;

void averageRain()
{
    string month1, month2, month3;
    int rainfall1, rainfall2, rainfall3;
    double rainAverage;

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rainfall1;
    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rainfall2;
    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rainfall3;

    rainAverage = (rainfall1 + rainfall2 + rainfall3) / 3.0;
    cout << setprecision(2) << fixed << "The average rainfall for " << month1 << " " << month2 << " and " << month3 << " is " << rainAverage << " inches.";
}



int main()
{
    //averageRain();
}