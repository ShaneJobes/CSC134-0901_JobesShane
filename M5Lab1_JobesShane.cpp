#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Shane Jobes
04/13/2025
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_hide();
void game_win();
void game_over();
void mommys_cookies();
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house and hear a loud noise come from inside..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() 
{
  cout << "You quietly slip in the back door and see people's shadows moving in the next room" << endl;
  cout << "Do you:" << endl;
  cout << "1. See who else is in the house?" << endl;
  cout << "2. Hide behind a cabinet and listen to what they're saying?" << endl;
  cout << "3. Run back home to your mommy?" << endl;
  cout << "4. Quit, you coward" << endl;
  int choice;
  cin >> choice;
  if (choice == 1)
  {
    cout << "You try and sneak into the room and look at the other people but they spot you and knock you out. Your family never sees you again." << endl;
    game_over();
  }
  else if (choice == 2)
  {
    choice_hide();
  }
  else if (choice == 3)
  {
    choice_go_home();
  }
  else if (choice == 4)
  {
    cout << "Ok quitting game." << endl;
    return;
  }
  else
  {
  cout << "That's not a valid choice, please try again." << endl;
  cin.ignore();
  choice_back_door();
  }
}


void choice_go_home() 
{
  int choice;
  cout << "You quickly run back to your home, thank god mommy is here to comfort you." << endl;
  cout << "Do you:" << endl;
  cout << "1. Ask for mommy's famous cookies and milk, then watch cartoons on the couch while you eat them." << endl;
  cout << "2. Call the police and report the sounds you heard inside the abandoned house." << endl;
  cout << "3. Quit" << endl;
  cin >> choice;
  if (choice == 1)
  {
    mommys_cookies();
  }
  else if (choice == 2)
  {
    game_win();
  }
  else if (choice == 3)
  {
    cout << "Ok quitting game." << endl;
    return;
  }
  else
  {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    choice_go_home();
  }
}

void choice_hide()
{
  int choice;
  cout << "You hear the people talk about taking over the town. You can report this to the police or confront them yourself." << endl;
  cout << "1. Confront intruders." << endl;
  cout << "2. Run home and call the police." << endl;
  cout << "3. Quit" << endl;
  cin >> choice;
  if (choice == 1)
  {
    cout << "They were not expecting anybody and in the confusion fire their weapons. You don't make it but the police catch them!" << endl;
    game_over();
  }
  else if (choice == 2)
  {
    game_win();
  }
  else if (choice == 3)
  {
    cout << "Ok quitting game." << endl;
    return;
  }
  else
  {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    choice_hide();
  }
    
}
void game_win()
{
  cout << "After calling 911 the police arrive at the property and catch the evil doers in the act of planning. You are a hero!" << endl;
  return;
}
void game_over()
{
  cout << "GAME OVER" << endl;
  return;
}

void mommys_cookies()
{
  cout << "You get home and ask mommy for her famous cookies and some milk. You eat them on the couch while you watch cartoons oblivious to the impending doom you and your family face" << endl;
}