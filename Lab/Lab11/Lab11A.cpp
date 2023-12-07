#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() 
{
  string rerun;
  string yes = "yes";
  int choice;

  do
    {
      cout << "Menu\n0) Hello World\n1) Goodbye Moon\n2) Walking on Sunshine\n\nWhat would you like to do: ";
      cin >> choice;

      switch (choice)
        {
          case 0:
            cout << "\nHello!\n";
            
          break;

          case 1:
            cout << "\nOk, bye.\n";
            
          break;

          case 2:
            cout << "\nWHOA!\n";
            
          break;

          default:
            cout << "\nInvalid Input\n";
            
          break;
        }

      cout << "\nType YES to rerun. ";
      cin >> rerun;

      cout << endl;

      for (int i = 0; i < rerun.length(); i++)
        {
          
          rerun[i] = tolower(rerun[i]);
          
        }
      
    }
    while (yes.compare(rerun) == 0);
  
  cout << "Program Ends\n";
  
}