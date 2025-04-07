// CSC 134
// M5T1 Functions
// 04/06/2025
// Shane Jobes

#include <iostream>
#include <string>
using namespace std;
// declare functions
string formatAnswer(int answer);
void printAnswer(string msg);
int main() {
 int answer = 5;
 string message;
 message = formatAnswer(answer);
 printAnswer(message);
 return 0;
}
// define functions
string formatAnswer (int answer) {
 // Make string containing the answer
 string answerMessage;
 answerMessage = "The answer is ";
 answerMessage += to_string(answer);
 return answerMessage;
}
void printAnswer(string msg) {
 // display message
 cout << msg << endl;
}