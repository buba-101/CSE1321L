#include <iostream>

using namespace std;

int main() 
{

  int three_gallon = 0, five_gallon = 0, option;

  cout << "[4 Gallons of Water]\nThe 3 gallon can has 0 gallons of water. The 5 gallon can has 0 gallons of water.";

  do
    {
      cout << "\n\nOptions\n";
      cout << "1) Fill the 5 gallon can from the fountain\n";
      cout << "2) Fill the 3 gallon can from the fountain\n";
      cout << "3) Pour the 5 gallon can into the 3 gallon jug\n";
      cout << "4) Pour the 3 gallon can into the 5 gallon jug\n";
      cout << "5) Empty the 5 gallon can into the fountain\n";
      cout << "6) Empty the 3 gallon can into the fountain\n";

      cout << "What will you do? ";
      cin >> option;

      switch (option)
      {
        case 1:

          if (five_gallon < 5)
          {
            five_gallon = 5;
            cout << "The 3 gallon can has " << three_gallon <<" gallons of water. The 5 gallon can has " << five_gallon <<  " gallons of water.";
          }
          
          break;

        case 2:

          if (three_gallon < 3)
          {
            three_gallon = 3;
            cout << "The 3 gallon can has " << three_gallon <<" gallons of water. The 5 gallon can has " << five_gallon <<  " gallons of water.";
          }
          
          break;

        case 3:

          if (five_gallon > 0 && three_gallon < 3) 
          {
            int transfer = 3 - three_gallon;
  
            
            five_gallon -= transfer;
            three_gallon += transfer;
          }

          cout << "The 3 gallon can has " << three_gallon <<" gallons of water. The 5 gallon can has " << five_gallon <<  " gallons of water.";
          
          break;

        case 4:

          if (three_gallon > 0 && five_gallon < 5) 
          {
            int transfer = 5 - five_gallon;
            
            if (five_gallon + three_gallon < 5) 
            {
                
              five_gallon += three_gallon;
              three_gallon = 0;
            }
            else
            {
              three_gallon -= transfer;
              five_gallon += transfer;
            }
            
            
          }

          cout << "The 3 gallon can has " << three_gallon <<" gallons of water. The 5 gallon can has " << five_gallon <<  " gallons of water.";
          
          break;

        case 5:

          five_gallon = 0;
          cout << "The 3 gallon can has " << three_gallon <<" gallons of water. The 5 gallon can has " << five_gallon <<  " gallons of water.";
          
          break;

        case 6:

          three_gallon = 0;
          cout << "The 3 gallon can has " << three_gallon <<" gallons of water. The 5 gallon can has " << five_gallon <<  " gallons of water.";
          
          break;

        default:
          cout << "Invalid choice, try again.";
      
      }
        
    }
  while(five_gallon != 4);  

  cout << "The 3 gallon can has " << three_gallon << " gallons of water. The 5 gallon can has 4 gallons of water." << endl;
  cout << "You saved Bruce Willis and Samuel L. Jackson! You win!" << endl;

}