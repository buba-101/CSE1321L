#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() 
{

  bool length = false;
  bool upper = false;
  bool digit = false;
  string password;

  cout << "Enter a password: ";
  cin >> password;

  //checking the length of the password
  if (password.length() >= 8)
  {
    length = true;
    
  }
  else
  {
    cout << "Invalid password\n\n";
    cout << "Program Ends";
    return 0;
  }

  //checking each char in the str for upper case
  for (int i = 0; i < password.length(); i++)
    {
      if (isupper(password[i]))
      {
        upper = true;
        break;
      }
    }

  //checking each char in the str for a digit
  for (int i = 0; i < password.length(); i++)
    {
      if (isdigit(password[i]))
      {
        digit = true;
        break;
      }
    }

  //if pass word meets all three criteria
  if (length && upper && digit)
  {
    cout << "Valid password\n";
    cout << "\nProgram Ends";
  }
  else
  {
    cout << "Invalid password\n";
    cout << "\nProgram Ends";
  }

}