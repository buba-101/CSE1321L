#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
  //Declaration
  
  float grade;

  //Inputs
  
  cout << "Enter the score of your exam: ";
  cin >> grade;
  
  //Round to nearest int
  
  grade = round(grade);

  //Display

  if (grade >= 98)
  {
    cout << "Letter grade is: A+\n";
  }
  else if (grade >= 95)
  {
   cout << "Letter grade is: A\n"; 
  }
  else if (grade >= 92)
  {
   cout << "Letter grade is: A-\n"; 
  }
  else if (grade >= 89)
  {
   cout << "Letter grade is: B+\n"; 
  }
  else if (grade >= 86)
  {
   cout << "Letter grade is: B\n"; 
  }
  else if (grade >= 83)
  {
   cout << "Letter grade is: B-\n"; 
  }
  else if (grade >= 80)
  {
   cout << "Letter grade is: C+\n"; 
  }
  else if (grade >= 77)
  {
   cout << "Letter grade is: C\n"; 
  }
  else if (grade >= 74)
  {
   cout << "Letter grade is: C-\n"; 
  }
  else if (grade >= 71)
  {
   cout << "Letter grade is: D+\n"; 
  }
  else if (grade >= 68)
  {
   cout << "Letter grade is: D\n"; 
  }
  else if (grade >= 65)
  {
   cout << "Letter grade is: D-\n"; 
  }
  else 
  {
   cout << "Letter grade is: F\n"; 
  }
}