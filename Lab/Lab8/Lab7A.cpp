#include <iostream>

using namespace std;

int main() 
{
  int size;
  
  cout << "Please enter a value for the size: ";
  cin >> size;

  cout << "This is the requested " << size << "x" << size << " box:\n";

  for (int i = 1; i <= size; i++)
    {
      for (int j = 1; j <= size; j++)
        {
          cout << "*";
        }
      cout << endl;
    }
    
}
