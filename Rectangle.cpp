// CSC 134
// M7T2
// 05/07/2025
// Shane Jobes


#include <iostream>
#include "Rectangle.h"
#include <cstdlib>
using namespace std;


Rectangle::Rectangle()
{
    width = 0.0;
    length = 0.0;
}
void Rectangle::setWidth(double w)
{
    if (w >= 0)
    {
        width = w;
    }
    else 
    {
        cout << "INVALID WIDTH \n";
        exit(EXIT_FAILURE);
    }
}

void Rectangle::setLength(double l)
{
    if (l >= 0)
    {
        length = l;
    }
    else 
    {
        cout << "INVALID LENGTH \n";
        exit(EXIT_FAILURE);
    }
}
