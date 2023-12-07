#include <iostream>

using namespace std;

int main() 
{
  int selection;
  double account_balance = 1000, balance;
  char yes_no;

  cout << "Welcome!\nYou have $1000 in your account. \n";

  do
    {
      cout << "\nMenu\n0 - Make a deposit\n1 - Make a withdrawal\n2 - Display account value\n\n";

      //User Selection
      cout << "Please make a selection: ";
      cin >> selection;

      switch (selection)
      {
        //make a deposit case
        case 0: 
          cout << "How much would you like to deposit? : ";
          cin >> balance;

          //update account balance
          account_balance += balance;

          cout << "Your current balance is $" << account_balance << endl;
        
          break;

        //make a withdrawal case
        case 1:
          cout << "How much would you like to withdraw? : ";
          cin >> balance;

          //update account balance
          account_balance -= balance;

          cout << "Your current balance is $" << account_balance << endl;\
        
          break;

        //check balance case
        case 2:
          cout << "Your current balance is $" << account_balance << endl;

          break;
        default:
        cout << "Invalid entry, please try again.\n";
      }  

      cout << "Would you like to return to the main menu (Y/N)? : ";
      cin >> yes_no;
        
    }
  while (yes_no == 'Y' || yes_no == 'y');

  cout << "\nThank you for banking with us!\n";
}