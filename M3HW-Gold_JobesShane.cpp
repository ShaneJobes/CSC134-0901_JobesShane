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
    
}
void question4() 
{
    
}

int main()
{
    //question1();
    //question2();
    //question3();
    //question4();
}