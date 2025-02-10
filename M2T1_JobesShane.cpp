// CSC 134
// M2T1 - Apple Sales Part 2
// 02/09/2025
// Shane Jobes

#include <iostream>
#include <iomanip>
using namespace std;
  
int main()
{
    // Orchard owners name
    string name = "Shane Jobes";

    // number of apples owned
    int apples = 100;

    // price per apple
    double pricePerApple = 0.25;

    // calculate the total price of the apples
    double totalPrice;
    totalPrice = apples  * pricePerApple;

    // print all the information about the orchard
    cout << "Welcome to " << name;
    cout << "’s apple orchard." << endl;
    cout << "We have " << apples << " apples available." << endl;
    cout << "They are $" << pricePerApple << " per apple." << endl;
    cout << "If you want all of them it is $" << totalPrice << "!" << endl;
}