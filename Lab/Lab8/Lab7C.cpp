#include <iostream>

using namespace std;

int main() 
{
  int size;

  //User Input
  cout << "Please enter a value for the size: ";
  cin >> size;

   cout << "This is the requested " << size << "x" << size << " right-triangle:\n";

  //rows
  for (int i = 1; i <= size; i++)
    {
      //spaces
      for (int k = size - 1; k >= i; k-- )
        {
          cout << " ";
        }

      //stars
      for (int j = 1; j <= i; j++)
        {
          cout << "*";
        }
      cout << endl;
    }
    
}
