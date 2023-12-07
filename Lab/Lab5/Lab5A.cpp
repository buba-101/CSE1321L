#include <iostream>
#include <string>

using namespace std;

int main() 
{
  string choice;
  
  cout << "Do you have a driving permit (Y/N)? ";
  cin >> choice;

  //yes permit   
  if (choice.compare("y") == 0 || choice.compare("Y") == 0)
  {
    cout << "Do you have a commercial driving license (Y/N)? ";
    cin >> choice;

    //yes CDL
    if (choice.compare("y") == 0 || choice.compare("Y") == 0)
    {
      cout << "Congratulations! You can purchase a vehicle, let's start talking options!\n";
    }

     //no CDL 
    else if (choice.compare("N") == 0 || choice.compare("n") == 0)
    {
      cout << "Commercial driving license is a prerequisite to purchase a vehicle!\n";
    }

    //invalid input
    else
    {
      cout << "Invalid input\n";
    }
  }

  //no permit
  else if (choice.compare("N") == 0 || choice.compare("n") == 0)
  {
     cout << "Driving permit is a prerequisite to purchase a vehicle!\n";
  }

  //Invalid input
  else
  {
     cout << "Invalid input\n";
  }

  

  
}