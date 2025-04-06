// CSC 134
// M4HW Multiplication table - GOLD
// 03/30/2025
// Shane Jobes

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int userNum = 0;
    int sum;
    const int MAXNUM = 12;

    do
    {
        cout << "Please input a number between 1 and 12: ";
        cin >> userNum;
        
        if (userNum < 1 || userNum > 12)
        {
            cout << "Invalid input! ";
        }
    }
    while (userNum < 1 || userNum > 12);

    for (int i = 1; i <= MAXNUM; i++)
    {
        sum = userNum * i;
        cout << userNum << " times " << i << " is " << sum << endl;
    }

    return 0;
}