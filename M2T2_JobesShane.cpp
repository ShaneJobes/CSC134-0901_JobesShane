// CSC 134
// M2T2 - Apple Sales Part 3
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

    //number of apples user wants to buy
    int userApples;

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
    
    // get user input for desired apples
    cout << "How many apples do you want to purchase?" << endl;
    cin >> userApples;

    // calculate how much it will cost user
    double userCost = userApples * pricePerApple;
    
    // Fix decimal precision to show 2 places after decimal
    cout << fixed << setprecision(2); 
    cout << "The total for " << userApples << " apples is $" << userCost << "!" << endl;
}