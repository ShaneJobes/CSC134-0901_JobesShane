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
double getArea(double length, double width);
void displayData(double area);

int main()
{
	// This program calculates the area of a rectangle.
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
// Get user input for length
double getLength()
{
    double length = 0;
    cout << "What is the length of the rectangle?" << endl;
    cin >> length;
    return length;
}
// Get user input for width
double getWidth()
{
    double width = 0;
    cout << "What is the width of the rectangle?" << endl;
    cin >> width;
    return width;
}
// Calculate area based off user input
double getArea(double length, double width)
{
    double area = 0;
    area = length * width;
    return area;
}
// Print area
void displayData(double area)
{
    cout << "The total area of the rectangle is " << area << " ft." << endl;
}