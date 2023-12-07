#include <iostream>

using namespace std;

int main() 
{

  int num,max_num = 0;
  
  cout << "Please enter 10 numbers and this program will display the largest.\n\n";

  for (int i = 1; i <= 10; i++)
    {
      //taking input
      cout << "Please enter number " << i << ": ";
      cin >> num;

      //if num is greater than max_num
      if (num > max_num)
      {
        //Update max_num
        max_num = num;
      }
    }

  //display
  cout << "\nThe largest number was " << max_num << endl;
}