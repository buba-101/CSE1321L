#include <iostream>

using namespace std;

int main() 
{

  //declaration
  string day;
  
  //inputs
  cout << "Enter the day: ";
  cin >> day;

  //display
  
  //generic case
  if (day == "Sunday" || day == "sunday" || day == "Thursday" || day == "thursday" || day == "Saturday" || day == "saturday" || day == "Tuesday" || day == "tuesday")
  {
    cout << "I should use this time to do my homework.\n";
  }

    //monday and wednesday
  else if (day == "Monday" || day == "monday" || day == "Wednesday" || day == "wednesday")
  {
    cout << "I have class today!\n";
  }

    // friday
  else if (day == "Friday" || day == "friday")
  {
    cout << "It's Friday! Friday! Gotta get down on Friday!\n";
  }

  //invalid
  else
  {
    cout << "Invalid input!";  
  }
}