#include <iostream>

using namespace std;

int main() 
{

  int font_size, font_weight;

  cout << "[Plus Sign ASCII Art]\n";

  cout << "Font-size: ";
  cin >> font_size;

  cout << "Font-weight: ";
  cin >> font_weight;

  cout << "Drawing with text...\n";

  
  // Top vertical lines
  for (int i = 1; i <= font_size; i++)
  {
    for (int k = 1; k <= font_size; k++)
      {
        cout << " ";
      }
    for (int x = 1; x <= font_weight; x++)
    {
      cout << "|";
    }
    cout << endl;
  }

  //Horizontal lines
  for (int y = 1; y <= font_weight; y++ )
  {
    for (int l = 1; l <= font_size; l++)
    {
      cout << "-";
    }
  
    for (int a = 1; a <= font_weight; a++)
    {
  
      cout << "-";
        
    }
  
    for (int l = 1; l <= font_size; l++)
    {
      cout << "-";
      
      if (l == font_size)
      {
        cout << endl;
      }
    }
  }
 

  // Bottom vertical lines
  for (int i = 1; i <= font_size; i++)
  {
    for (int k = 1; k <= font_size; k++)
    {
      cout << " ";
    }
    for (int x = 1; x <= font_weight; x++)
    {
      cout << "|";
    }
    cout << endl;
  }

}