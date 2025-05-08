// CSC 134
// M7T2
// 05/07/2025
// Shane Jobes

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle test = Rectangle();
    test.setWidth(10);
    test.setLength(5.6);
    cout << "Rectangle width: " << test.getWidth();
}