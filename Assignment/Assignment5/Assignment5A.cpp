#include <iostream>
#include <string>

using namespace std;

int main() 
{

  int choice, index;
  string friends[10], temp_name, replaced_name, entered_name;

  for (int i = 0; i < 10; i++)
    {
      friends[i] = " ";
    }
  
  cout << "[Top 10 Friend’s List]\n";

  do
    {
      cout << "What would you like to do?\n1) Enter a friend’s name\n2) Replace a friend’s name\n3) Display your friends list\n4) Quit\nYour choice: ";
      cin >> choice;

      switch (choice)
        {
          case 1:
            cout << "\nEnter a name: ";
            cin >> entered_name;

            if (friends[9] != " ")
            {
              cout << "Sorry, your friends list is full!\n";
              break;
            }
            
            for (int i = 0; i < 10; i++)
              {
                if (friends[i] == entered_name)
                {
                  cout << "Sorry, they’re already on the list!\n";
                  break;
                }
              }
            
            for (int i = 0; i < 10; i++)
              {
                if (friends[i] == " ")
                {
                  friends[i] = entered_name;
                  break;
                }
              }
            
            
            break;
          
          case 2:
            cout << "\nEnter a name: ";
            cin >> temp_name;
            
            cout << "Enter an index: ";
            cin >> index;

            if (index < 0 || index > 10)
            {
              cout << "Sorry, that’s an invalid command!\n";
            }
            else
            {
              replaced_name = friends[index];
              friends[index] = temp_name;
              cout << friends[index] << " has replaced " << replaced_name << " on your friends list!\n";
            }
            cout << endl;
            break;
          
          case 3:
            cout << "\nFriend's List:\n";
            
            for (int i = 0; i < 10; i++)
              {
                cout << i + 1 << ") " << friends[i] << endl;
          
              }
            cout << endl;
            break;

          case 4:
            cout << "\n[Program Ends]\n";
      
            break;

          default:
            cout << "Invalid choice.\n";

        }
      
    }
  while (choice != 4);

  

}