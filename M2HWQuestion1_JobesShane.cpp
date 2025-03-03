// CSC 134
// M2HW Qustion 1 - Gold
// 03/02/2025
// Shane Jobes

#include <iostream>
#include <iomanip>
using namespace std;
  
int main()
{
    //Declare variables
    string userName;
    double startingBalance, deposit, withdrawal, finalBalance;
    int accountNum;

    //Get user input to get values for variables
    cout << "What is your name?" << endl;
    cin >> userName;
    cout << "What is your acocunt number?" << endl;
    cin >> accountNum;
    cout << "How much was in the bank account at the start of the month?" << endl;
    cin >> startingBalance;
    cout << "How much did you deposit and how much did you withdrawal throughout the month?" << endl;
    cin >> deposit >> withdrawal;

    //Calculate balance
    finalBalance = startingBalance + deposit - withdrawal;
    cout << setprecision(2) << fixed << "Youre final balance is $" << finalBalance << " for account #" << accountNum << endl;

    return 0;
}