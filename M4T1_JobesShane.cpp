// CSC 134
// M4T1 While Loops
// 02/23/2025
// Shane Jobes

#include <iostream>
#include <iomanip>
using namespace std;
  
void helloLoop()
{
    int num = 0;
    while (num < 5)
    {
        cout << "Hello" << endl;
        num++;
    }
    cout << "That's all!" << endl;
}

void numAndSquareLoop()
{
    const int MIN_NUM = 1,
    MAX_NUM = 10;
    int num = MIN_NUM;

    cout << "Number Number-Squared" << endl;
    cout << "---------------------" << endl;

    while (num <= MAX_NUM)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num ++;
    }
}

int main()
{
    helloLoop();
    numAndSquareLoop();

    return 0;
}