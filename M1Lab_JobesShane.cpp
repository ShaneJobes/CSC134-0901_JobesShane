// CSC 134
// M1LAB
// Shane Jobes
// 02/04/2025

#include <iostream>
using namespace std;
int main() 
{
    // This program will simulate an apple orchard.
    // The owner’s name
    string name = "Shane Jobes";

    // number of apples owned
    int apples = 100;

    // price per apple
    double pricePerApple = 0.25;

    // calculate the total price of the apples
    // TODO
    double totalPrice;
    totalPrice = apples  * pricePerApple;
    // print all the information about the orchard
    // TODO
    cout << "Welcome to " << name;
    cout << "’s apple orchard." << endl;
    cout << "We have " << apples << " apples available." << endl;
    cout << "They are $" << pricePerApple << " per apple." << endl;
    cout << "If you want all of them it is $" << totalPrice << "!" << endl;
}