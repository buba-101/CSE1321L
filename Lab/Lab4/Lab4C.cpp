#include <iostream>

using namespace std;

int main() 
{

  int choice;
  double number, solved_number;
  
  cout << "Welcome!\n";

  //inputs
  
  cout << "Please input a number: ";
  cin >> number;

  cout << "\n\nWhat would you like to do to this number:\n0) Get the additive inverse of the number\n1) Get the reciprocal of the number\n2) Square the number\n3) Cube the number\n4) Exit the program \n\n";
  cin >> choice;

  switch (choice)
    {
      case 0:
        solved_number = -1 * number;
        cout << "\nThe additive inverse of " << number << " is " << solved_number << endl;
        break;
      
      case 1:
        solved_number = 1 / number;
        cout << "\nThe reciprocal  of " << number << " is " << solved_number << endl;
        break;
      
      case 2:
        solved_number = number * number;
        cout << "\nThe square  of " << number << " is " << solved_number << endl;
        break;

      case 3:
        solved_number = number * number * number;
        cout << "\nThe cube  of " << number << " is " << solved_number << endl;
        break;

      case 4:
        cout << "\nThank you, goodbye!\n";
        break;

      default:
      cout << "\nInvalid input, please try again!\n";
      
        
    }
}