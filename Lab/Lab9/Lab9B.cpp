#include <iostream>

using namespace std;

int main() 
{

  int my_array[11], target, high, mid, low, temp;

  cout << "Please enter 11 numbers:\n";

  // User Input
  for (int i = 0; i < 11; i++)
    {
      
      cout << "Integer " << i + 1 << ": ";
      cin >> my_array[i];
      
    }

  
  cout << "\nWhat is the target number: ";
  cin >> target;

  //bubble sort array
  for (int i = 0; i < 11 - 1; i++)
    {
      
      for (int j = 0; j < 11 - i - 1; j++)
        {
          
          if (my_array[j] > my_array[j + 1])
          {
            
            temp = my_array[j];
            my_array[j] = my_array[j + 1];
            my_array[j + 1] = temp;
          
          }
          
        }
      
    }

  cout << "\nThe sorted set is: ";

  //print out sorted array
  for (int i = 0; i < 11; i++)
    {
      
      cout << my_array[i] << " ";
      
    }

  cout << endl;


  // binary search array
  low = 0;
  high = 10;
  mid = (low + high) / 2;
  
  while (low <= high)
  {
    
    cout << "\nLow is " << low << endl;
    cout << "\nHigh is " << high << endl;
    cout << "\nMid is " << mid << endl;
    cout << "\nSearching" << endl;
    
    if (target < my_array[mid])
    {

      high = mid - 1;
      mid = (low + high) / 2;
      
    }
    
    else if (target > my_array[mid])
    {
      
      low = mid + 1;
      mid = (low + high) / 2;
    
    }
    
    else if (target == my_array[mid])
    {
      
      cout << "\nThe target is in the set.";
      return 0;
      
    }
      
     
  
  }
  
   cout << "\nThe target is not in the set.";
  
}