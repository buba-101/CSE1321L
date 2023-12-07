#include <iostream>

using namespace std;

int main() 
{
  int num;
  
  cout << "Enter an integer: ";
  cin >> num;

  if (num % 2 == 0)
  {
    cout << "This number is divisible by 2\n";
  }

  else if (num % 3 == 0)
  {
    cout << "This number is divisible by 3\n";
  }

   else if (num % 5 == 0)
  {
    cout << "This number is divisible by 5\n";
  }

  else
   {
     cout << "This number is undetermined\n";
   }
}