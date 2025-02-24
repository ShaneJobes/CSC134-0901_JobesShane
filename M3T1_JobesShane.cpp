// CSC 134
// M3T1 Rectangle Area
// 02/23/2025
// Shane Jobes

#include <iostream>
#include <iomanip>
using namespace std;
  
int main()
{
    // Declare variables
    int widthOne, lengthOne, widthTwo, lengthTwo;
    int areaOne, areaTwo;

    // Ask for input
    cout << "Please enter the width and length of the first \n";
    cout << "rectangle, seperated by a space or newline" << endl;
    cin >> widthOne >> lengthOne;
    cout << "Please enter the width and length of the second \n";
    cout << "rectangle, seperated by a space or newline" << endl;
    cin >> widthTwo >> lengthTwo;

    // Calculate area
    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    //Print area
    cout << "Rectangle one has an area of " << areaOne << endl;
    cout << "Rectangle two has an area of " << areaTwo << endl;

}