// CSC 134
// M3 HW - Gold
// Shane Jobes
// 03/09/2025

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Quick chat bot
void question1() 
{
    //Declare variable and get user input
    string likeProgram;
    cout << "Hello, I am a C++ program!/n" << "Do you like me? yes or no: ";
    cin >> likeProgram;

    //Check if user typed yes, no, or something else and display appropriate message
    if (likeProgram == "yes")
    {
        cout << "That’s great! I’m sure we’ll get along." << endl;
    }
    else if (likeProgram == "no") 
    {
        cout << "Well, maybe you’ll learn to like me later." << endl;
    }
    else
    {
        cout << "If you're not sure... that's OK." << endl;
    }
}
void question2() 
{
    //Declare Variables
    const double TAX = .07;
    string restaurantName = "Jimmy Geez";
    double billBeforeTax;
    int dineInOut;
    double tip;

    // Fix decimal precision to show 2 places after decimal
    cout << fixed << setprecision(2); 
    
    
    //Get users bill and if they are dining in or carrying out
    cout << "Welcome to " << restaurantName << "!" << endl;
    cout << "Will you be dining in our carrying out? 1 for in and 2 for out: ";
    cin >> dineInOut;
    cout << "How much will your total order be?" << endl;
    cin >> billBeforeTax;

    // calculate the price of the bill with tax
    double billTotal;
    billTotal = billBeforeTax + (billBeforeTax * TAX);

    //Check if user is dining in and add tip to total
    if (dineInOut == 1)
    {
        tip = billBeforeTax * .15;
        billTotal = billTotal + tip;
        cout << "With 15% tip and 7% tax your total will be: $" << billTotal << endl;
    }
    else if (dineInOut == 2)
    {
        cout << "With 7% tax your total will be: $" << billTotal << endl;
    }
    else
    {
        cout << "Make up your mind about dining in or carrying out then come back for your bill!" << endl;
    }
}
void question3() 
{
    //Declare variables
    string wantToPlay;
    string choice1;
    string choice2;
    string choice3;

    //Opening to game
    cout << "Welcome to Adventureland, all choices should be answsered with a y for yes and an n for no!" << endl;
    cout << "Would you like to play? ";
    cin >> wantToPlay;

    //Check for user input then move to next part of game based on input
    if (wantToPlay == "y")
    {
        cout << "You start in a forest searching for food to feed your family. Suddenly you are overwhelmed with the sounds of battle." << endl;
        cout << "Do you make your way towards the fighting(y) or run away(n)? ";
        cin >> choice1;
        if (choice1 == "y")
        {
            cout << "You come upon a merchant's caravan being attacked by some bandits!" << endl;
            cout << "Do you help the caravan? ";
            cin >> choice2;
            if (choice2 == "n")
            {
                cout << "You watch the caravan guards barely fend off the bandits, ending the battle with heavy casualties. Do you finish what they started? ";
                cin >> choice3;
                if (choice3 == "n")
                {
                    cout << "You move in to help the caravan leave with their wounded and they give you some supplies for your effort. Now you'll be able to feed your family for weeks." << endl;
                    cout << "Congrats you've won!" << endl;
                }
                else if (choice3 == "y")
                {
                    cout << "You don't know how to use a sword! Your first swing bounces of the guards armor and you are quickly taken down and arrested. At least your family will have closure at your hanging." << endl;
                    cout << "GAME OVER" << endl;
                }
                else
                {
                    cout << "You know you were supposed to enter 'y' or 'n' right..." << endl;
                }
            }
            else if (choice2 == "y")
            {
                cout << "You are no fighter, you run in to help the guards but are quickly cut down by the bandits." << endl;
                cout << "GAME OVER" << endl;
            }
            else
        {
            cout << "You know you were supposed to enter 'y' or 'n' right..." << endl;
        }
        }
        else if (choice1 == "n")
        {
            cout << "You are hit by a stray musket shot, your family will never know your fate" << endl;
            cout << "GAME OVER" << endl;
        }
        else
        {
            cout << "You know you were supposed to enter 'y' or 'n' right..." << endl;
        }
    }
    else if (wantToPlay == "n")
    {
        cout << "Then move along so somebody who does can get a turn!" << endl;
    }
    else
    {
        cout << "Next time please enter 'y' or 'n'..." << endl;
    }
}
void question4() 
{
    //Get random numbers
    int seed, num1, num2, answer, userAnswer;
    const int MAX = 100;
    cout << "Welcome to the math quiz, enter and whole number to start: ";
    cin >> seed;
    srand(seed);
    num1 = (rand() % MAX);
    num2 = (rand() % MAX);
    answer = num1 + num2;
    cout << "What is " << num1 << "+" << num2 << "? ";
    cin >> userAnswer;
    if (answer == userAnswer)
    {
        cout << "That is correct!" << endl;
    }
    else
    {
        cout << "That is incorrect. Try again!" << endl;
    }
    
}

int main()
{
    //question1();
    //question2();
    //question3();
    question4();
}