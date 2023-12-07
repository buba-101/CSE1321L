#include <iostream>

using namespace std;

int main() 
{
  int row, column;

  //ask user for row
  cout << "Please enter the number of rows: ";
  cin >> row;

  //ask user for column
  cout << "Please enter the number of columns: ";
  cin >> column;

  //create 2D array
  int array[row][column];

  cout << "\nI have " << row << " rows and " << column << " columns. I need to fill-up " << row * column << " spaces.\n" << endl;

  cout << "The " << row << "x" << column << " array:" << endl;

  //fill array
  int count = 1;
  for (int i = 0; i < row; i++)
     {
        for (int j = 0; j < column; j++)
           {
             array[i][j] = count;
             count++;

             cout << array[i][j] << "|";
           }

       cout << endl;
     }


  //flatten the 2-D array into a 1-D array: 
  int flattened[row * column];

  cout << "\nThe " << row << "x" << column << " 2-D array flattened into a " << row * column << " cell 1-D array:" << endl;

  //fill flattened array
  int count_two = 1;
  for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < column; j++)
         {
           flattened[i * column + j] = count_two;
           count_two++;
           cout << flattened[i * column + j] << "|";
           
         }
    }

  cout << endl;
}