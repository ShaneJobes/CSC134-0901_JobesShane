// CSC 134
// M7T1
// 05/07/2025
// Shane Jobes

#include <iostream>
using namespace std;

// Restaraunt class
class Restaurant
{
private:
    //Restaurant name
    string name;
    //Restaurant rating 0-5 stars
    double rating;
public:
    //Constructor
    Restaurant(string n, double r)
    {
        name = n;
        rating = r;
    }
    //Getters and setters
    void setName(string n)
    {
        name = n;
    }
    void setRating(double r)
    {
        rating = r;
    }
    string getName()
    {
        return name;
    }
    double getRating()
    {
        return rating;
    }
    //Print restaurant info to terminal
    void printInfo()
    {
        cout << "Name: " << name << " ";
        if (rating >= 4.0)
        {
             cout << "Rating: " << rating  << "/5 stars! User Recommended!" << endl;
        }
        else if (rating <= 2.0)
        {
            cout << "Rating: " << rating  << "/5 stars. Users Do Not Recommend." << endl;
        }
        else
        {
            cout << "Rating: " << rating  << "/5 stars." << endl;
        }
    }
};
//Create two restaurant objects and print their info back to the terminal
int main() 
{
    Restaurant lunch_place = Restaurant("Mi Casita", 3.5);
    Restaurant breakfast_place = Restaurant("Waffle House", 2.0);
    Restaurant dinner_place = Restaurant("Bubbas 33, 4.5");
    cout << "Breakfast Restaurant:" << endl;
    breakfast_place.printInfo();
    cout << "Lunch Restaurant:" << endl;
    lunch_place.printInfo();
    cout << "Dinner Restaurant:" << endl;
    dinner_place.printInfo();

    return 0;
}