// CSC 134
// M2LAB1
// Shane Jobes
// 02/16/2025

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Declare variables and constants
    double COST_PER_CUBIC_FOOT = 0.23;
    double CHARGE_PER_CUBIC_FOOT = 0.5;
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;

    // Set precision for number formats
    cout << setprecision(2) << fixed << showpoint;

    // Get input for length height width
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate volume
    volume = length * width * height;

    // Calculate cost for business, charge to customer, and profit
    cost = COST_PER_CUBIC_FOOT * volume;
    charge = CHARGE_PER_CUBIC_FOOT * volume;
    profit = charge - cost;

    // Print calculated data
    cout << "The volume of thye crate is: " << volume << " cubic feet." << endl;
    cout << "Cost to build is: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

}