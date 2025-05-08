// CSC 134
// M7T2 - Gold+Bonus
// 05/07/2025
// Shane Jobes

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle box = Rectangle();
    cout << "Here is the rectangle's data: " << endl;
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
    
    return 0;
}