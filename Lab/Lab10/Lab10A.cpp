#include <iostream>

using namespace std;

//method for maximum value of two numbers
int max(int x, int y)
{
  if (x > y)
  {
    return x;
  }
  else
  {
    return y;
  }
}

//method for minimum value of two numbers
int min (int x, int y)
{
  if (x < y)
  {
    return x;
  }
  else
  {
    return y;
  }
}

//method for average of two numbers
float average (int x, int y)
{
  float avg = ((float)x + (float)y) / 2.0;
  return avg;
}

int main() 
{
  int num1, num2;

  cout << "Enter number 1: ";
  cin >> num1;

  cout << "Enter number 2: ";
  cin >> num2;

  cout << "Min is " << min(num1, num2) << endl; //calling min method and print
  cout << "Max is " << max(num1, num2) << endl; //calling max method and print
  cout << "Average is " << average(num1, num2) << endl; //calling average method and print
}