#include <iostream>

using namespace std;

class Chair
{
  public:

    int num_of_legs;
    bool rolling;
    string material;

    //constructor
    Chair(int n, bool r, string m)
    {
      num_of_legs = n;
      rolling = r;
      material = m;
    }
    
};

int main() 
{
  int legs;
  bool is_roll;
  string material, input_roll, roll;
  
  cout << "You are about to create a chair.\n";
  
  cout << "How many legs does your chair have: ";
  cin >> legs;

  cout << "Is your chair rolling (true/false): ";
  cin >> input_roll;

  if (input_roll == "true")
  {
    is_roll = true;
  }
  else if (input_roll == "false")
  {
     is_roll = false;
  }
  else
  {
    cout << "Invalid input! Try again.\n";  
    return 0;
  }
  
  cout << "What is your chair made of: ";
  cin >> material;

  Chair c1(legs, is_roll, material);

  //cheak if the chair rolls
  if(c1.rolling)
  {
    roll = "is rolling";
  }
  else
  {
    roll = "is not rolling";
  }

  
  
  cout << "\nYour chair has " << c1.num_of_legs << " legs, " << roll << " , and is made of " << c1.material << ".\n";

  cout << "\nThis program is going to change that.\n";

  //update object
  c1.num_of_legs = 4;
  c1.rolling = false;
  c1.material = "wood";
  roll = "is not rolling";

  cout << "\nYour chair has " << c1.num_of_legs << " legs, " << roll << " , and is made of " << c1.material << ".\n";
    
}