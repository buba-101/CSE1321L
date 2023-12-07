#include <iostream>

using namespace std;

int main() 
{

  int my_array[10], target;
  
  cout << "Please enter 10 numbers: \n";

  for (int i = 0; i <= 9; i++)
    {
      
      cout << "Integer " << i + 1 << ": ";
      cin >> my_array[i];
      
    }

  cout << endl;

  cout << "What is the target number: ";
  cin >> target;

  for (int i = 0; i <= 9; i++)
    {
      if (my_array[i] == target)
      {
        cout << "\nThe target is in the set.\n";
        return 0;
      }
    }

  cout << "\nThe target is not in the set.\n";
  
  return 0;
}