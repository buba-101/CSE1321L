#include <iostream>
#include <string>

using namespace std;

int main() 
{

  char africa, antartica, asia, australia, europe, n_america, s_america;
  int total_visited = 0;
  
  cout << "[World Traveler Checklist]\n"; 

  //Africa
  cout << "Have you been to Africa? ";
  cin >> africa;
  switch (africa)
    {
      case 'Y':
        total_visited++;
        break;
      case 'N':
        break;
      default:
        cout << "Invalid Input\n";
        return 1;
    }

  //Antartica
  cout << "Have you been to Antarctica? ";
  cin >> antartica;
  switch (antartica)
    {
      case 'Y':
        total_visited++;
        break;
      case 'N':
        break;
      default:
        cout << "Invalid Input\n";
        return 1;
    }

  //Asia
  cout << "Have you been to Asia? ";
  cin >> asia;
  switch (asia)
    {
      case 'Y':
        total_visited++;
        break;
      case 'N':
        break;
      default:
        cout << "Invalid Input\n";
        return 1;
    }

  //Australia
  cout << "Have you been to Australia? ";
  cin >> australia;
  switch (australia)
    {
      case 'Y':
        total_visited++;
        break;
      case 'N':
        break;
      default:
        cout << "Invalid Input\n";
        return 1;
    }

  //Europe
  cout << "Have you been to Europe? ";
  cin >> europe;
  switch (europe)
    {
      case 'Y':
        total_visited++;
        break;
      case 'N':
        break;
      default:
        cout << "Invalid Input\n";
        return 1;
    }

  //North America
  cout << "Have you been to North America? ";
  cin >> n_america;
  switch (n_america)
    {
      case 'Y':
        total_visited++;
        break;
      case 'N':
        break;
      default:
      cout << "Invalid Input\n";
        return 1;
    }

  //South America
  cout << "Have you been to South America? ";
  cin >> s_america;
  switch (s_america)
    {
      case 'Y':
        total_visited++;
        break;
      case 'N':
        break;
      default:
        cout << "Invalid Input\n";
        return 1;
    }

  //Output
  switch(total_visited)
    {
      case 0:
        cout << "\nYou have visited " << total_visited << " continent: " << "How is that possible? Are you living in space?\n";
        break;

      case 1:
        cout << "\nYou have visited " << total_visited << " continent: " << "That’s a good start. Time to explore the world!\n";
        break;

      case 2:
        cout << "\nYou have visited " << total_visited << " continent: " << "You’ve just started your journey to see the world.\n";
        break;

      case 3:
        cout << "\nYou have visited " << total_visited << " continent: " << "You’ve just started your journey to see the world.\n";
        break;

      case 4:
        cout << "\nYou have visited " << total_visited << " continent: " << "You’re an experienced traveler now.\n";
        break;

      case 5:
        cout << "\nYou have visited " << total_visited << " continent: " << "You’re an experienced traveler now.\n";
        break;

      case 6:
        cout << "\nYou have visited " << total_visited << " continent: " << "Wow, you’ve been almost everywhere!\n";
        break;

      case 7:
        cout << "\nYou have visited " << total_visited << " continent: " << "You’re a true world traveler!\n";
        break;
    }
  
}
