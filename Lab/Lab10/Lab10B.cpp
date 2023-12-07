#include <iostream>

using namespace std;

//method for checking if the sum of two nums is > 30
bool isValid(float width, float height)
{
  if ((width + height) > 30)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//method for area of rectangle
float area(float width, float height)
{
  return width * height;
}

//method for perimeter of rectangle
float perimeter(float width, float height)
{
  return (width * 2) + (height * 2);
}
int main() 
{
  float width, height;
  char choice;

  
  do
  {
    //user input
    cout << "Enter width: ";
    cin >> width;
  
    cout << "Enter height: ";
    cin >> height;
  
    //if the sum of two nums is > 30
    if (isValid(width, height))
    {
      cout << "This is a valid rectangle" << endl;
      cout << "The area is: " << area(width, height) << endl;
      cout << "The perimeter is: " << perimeter(width, height) << endl;
    }
    else
    {
      cout << "This is an invalid rectangle\n";
    }

    cout << "\nDo you want to enter another width and height (Y/N)? : ";
    cin >> choice;
    cout << endl;
    
  } 
  while (choice == 'Y');
    
  cout << "Program Ends\n";

}