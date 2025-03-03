// CSC 134
// M2HW Qustion 3 - Gold
// Shane Jobes
// 03/02/2025

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //Declare variables
    int pizzas, visitors, slices, leftover;

    //User input to fill variables
    cout << "How many pizzas have you ordered?" << endl;
    cin >> pizzas;
    cout << "How many people are coming to the party?" << endl;
    cin >> visitors;
    cout << "How many slices per pizza?" << endl;
    cin >> slices;

    //Calculate leftovers print resutls
    leftover = (pizzas * slices) - (visitors * 3);
    cout << "You will have " << leftover << " slices leftover." << endl;

    return 0;
}