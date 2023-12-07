#include <iostream>

using namespace std;

int main() 
{
  
  int y, x;
  
  //x value
  cout << "Enter x: ";
  cin >> x;
  
  //y value
  cout << "Enter y: ";
  cin >> y;

  //origin
  if ((x == 0) && (y == 0))
  {
    cout << "This point is the origin.\n";
  }

  //y axis
  else if ((x == 0) && (y != 0))
  {
    cout << "This point is on the y axis.\n";
  }

  //x axis
  else if ((y == 0) && (x != 0))
  {
    cout << "This point is on the x axis.\n";
  }

  //Quadrant I
  else if ((x > 0) && (y > 0))
  {
    cout << "This point is in the first quadrant.\n";
  }

  //Quadrant II
  else if ((x < 0) && (y > 0))
  {
    cout << "This point is in the second quadrant.\n";
  }

  //Quadrant III  
  else if ((x < 0) && (y < 0))
  {
    cout << "This point is in the third quadrant.\n";
  }

  //Quadrant IV
  else if ((x > 0) && (y < 0))
  {
    cout << "This point is in the fourth quadrant.\n";
  }
  
}