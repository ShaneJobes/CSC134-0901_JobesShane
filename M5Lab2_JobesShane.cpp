// CSC 134
// M5Lab 2
// 04/13/2025
// Shane Jobes

#include <iostream>
#include <iomanip>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();
double getWidth();
double getArea(int length, int width);
void displayData(int area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//********************************************
double getLength()
{
    double length = 0;
    cout << "What is the length of the rectangle?" << endl;
    cin >> length;
    return length;
}

double getWidth()
{
    double width = 0;
    cout << "What is the width of the rectangle?" << endl;
    cin >> width;
    return width;
}

double getArea(double length, double width)
{
    double area = 0;
    area = length * width;
    return area;
}

void displayData(double area)
{
    cout << "The total area of the rectangle is " << area << " ft." << endl;
}