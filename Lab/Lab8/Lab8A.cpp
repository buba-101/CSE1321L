#include <iostream>

using namespace std;

int main() 
{

  int array_one[5], array_two[5], array_sum[5];

  cout  << "Please enter 5 integers for the first array:\n";

  //fill in first array
  for (int i = 0; i < 5; i++)
    {
      cout << "Integer " << i + 1 << ": ";
      cin >> array_one[i];
    }

  cout << endl;

  cout << "Please enter 5 integers for the second array:\n";

  //fill in second array
  for (int i = 0; i < 5; i++)
    {
      cout << "Integer " << i + 1 << ": ";
      cin >> array_two[i];
    }

  //add the elements at each from index array 1 to the element at each index from the array 2
  for (int i = 0; i < 5; i++)
    {
      array_sum[i] = array_one[i] + array_two[i];
    }
  
  cout << "\nThe resulting sums are ";

  for (int i = 0; i < 5; i++)
    {
      cout << array_sum[i] << "|";
    }

  cout << endl;
}