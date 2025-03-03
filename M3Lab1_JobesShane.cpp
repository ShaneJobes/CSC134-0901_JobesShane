// CSC 134
// M3 Lab 1
// Shane Jobes
// 03/02/2025

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    //Coin flip to double your money or lose it all
    //Random number generator to flip coin
    int seed, flip;
    string headOrTail;
    const int MAX = 2; //1 for Heads or 2 for Tails
    cout << "How lucky do you feel? Pick a number: ";
    cin >> seed;
    srand(seed);
    flip = (rand() % MAX) + 1;
    if (flip == 1)
    {
        headOrTail = "heads";
    }
    if (flip == 2)
    {
        headOrTail = "tails";
    }


    //Declare variables
    string choice;
    int wager, winning;
    
    //Get user input
    cout << "Heads or Tails? ";
    cin >> choice;
    cout << "How much money would you like to wager? ";
    cin >> wager;

    //Check if user enters valid input
    if (choice == "heads" or choice == "tails")
    {
        //Check if user wins or loses
        if (headOrTail == choice)
        {
            winning = wager * 2;
            cout << "The flip was " << headOrTail << "! Congrats you won: $" << winning << endl;
        }
        else 
        {
            cout << "The flip was " << headOrTail <<", unfortunately you lost!" << endl;
        }
    }
    else 
    {
        cout << "Incorrect input, try again!" << endl;
    }
    





    return 0;
}