// CSC 134
// M5T2 Square Function
// 04/06/2025
// Shane Jobes

#include <iostream>
#include <iomanip>
using namespace std;
// declare functions
int square(int num);
void printAnswer(int number, int result);
int main()
{
    for(int i = 1; i <= 10; i++)
    {
        int result = square(i);
        printAnswer(i, result);
    }
    return 0;
}
// Square returns paremater int squared
int square(int num)
{
    int numSquared = num * num;
    return numSquared;
}

// print the answer to square
void printAnswer(int number, int result)
{
    cout << number << " squared equals: " << result << endl;
}