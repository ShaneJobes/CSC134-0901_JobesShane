// CSC 134
// M4T1 While Loops
// 02/23/2025
// Shane Jobes

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int h, w;

    cout << "Input height: ";
    cin >> h;
    cout << "Input width: ";
    cin >> w;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}