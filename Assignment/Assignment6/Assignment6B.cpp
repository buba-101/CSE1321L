
#include <iostream>

using namespace std;


// Function to print the X PixMap
void PrintXPixMap(string colors[], string lcolors[], string** pixMap, int width, int height) 
{
  cout << "\n#define image_format 1\n";
  cout << "#define image_width " << width << endl;
  cout << "#define image_height " << height << endl;
  cout << "#define image_ncolors 4\n";
  cout << "#define image_char_per_pixel 1\n";


  cout << "static char *image_colors[] = {\n";
  for (int i = 0; i < 4; ++i)
  {
    cout << "\"" << lcolors[i] << ", \"" << colors[i] << "\",\n";
  }
  cout << "};\n";
  
  cout << "static char *image_pixels[] = {\n";
  
  for (int i = 0; i < height; ++i) 
  {
    cout << "\"";
    for (int j = 0; j < width; ++j) 
    {
        cout << pixMap[i][j] << " ";
    }
    cout << "\",";
    cout << endl;
  }
  cout << "};\n";
}

// Function to check if a color is valid
bool check_if_valid_color(string colors[], string color) 
{
  for (int i = 0; i < 4; ++i) 
  {
    if (colors[i] == color) 
    {
      return true;
    }
  }
  return false;
}

// Function to replace a color in the X PixMap
void replaceColor(string** pixMap, int width, int height, string oldColor, string newColor) 
{
  for (int i = 0; i < height; ++i) 
  {
    for (int j = 0; j < width; ++j) 
    {
      if (pixMap[i][j] == oldColor) 
      {
        pixMap[i][j] = newColor;
      }
    }
  }
}

int main() 
{

  string colorHexMap[4];
  string colorLetterMap[4];
  int width, height;
  
  //input for color map
  cout << "[X PixMap Editor]\n";
  
  for (int i = 0; i < 4; ++i) 
  {
    cout << "Enter a hexadecimal color for color" << i + 1 << ": ";
    cin >> colorHexMap[i];
    cout << "Enter a letter to represent this color: ";
    cin >> colorLetterMap[i];
  }

  //input for width and height
  cout << "\nEnter a width: ";
  cin >> width;
  cout << "Enter a height: ";
  cin >> height;
  
  // Create a 2D array 
  string** pixMap = new string * [height];
  for (int i = 0; i < height; ++i) 
  {
      
    pixMap[i] = new string[width];
      
  }

  //fill in with first color
  for (int i = 0; i < height; ++i)
  {
    for (int j = 0; j < width; ++j)
    {
      pixMap[i][j] = colorLetterMap[0];
    }
    
  }

  
  int option;
  do 
  {
    cout << "\nOptions:\n";
    cout << "1: Set a color\n";
    cout << "2: Replace colors\n";
    cout << "3: Print\n";
    cout << "4: Quit\n";
    cout << "Choose an option: ";
    cin >> option;

    switch (option) 
    {
      case 1: 
      {
        int row, col;
        string color;
        cout << "\nEnter row index: ";
        cin >> row;
        cout << "Enter a column index: ";
        cin >> col;
        cout << "Enter a color: ";
        cin >> color;

        if (check_if_valid_color(colorLetterMap, color)) 
        {
          pixMap[row][col] = color;
          cout << "Color updated!\n";
        } 
        else 
        {
          cout << "Invalid color!\n";
        }
        break;
      }
      
      case 2: 
      {
        string oldColor, newColor;
        
        cout << "\nEnter the color to replace: ";
        cin >> oldColor;
        cout << "Enter the new color: ";
        cin >> newColor;
      
        if (check_if_valid_color(colorLetterMap, oldColor) && check_if_valid_color(colorLetterMap, newColor)) 
        {
          replaceColor(pixMap, width, height, oldColor, newColor);
          cout << "Color updated!\n\n";
        } 
        else 
        {
          cout << "Invalid color!\n\n";
        }
        break;
      }
    
      case 3:
        PrintXPixMap(colorHexMap, colorLetterMap, pixMap, width, height);
        break;
    
      case 4:
        cout << "\n[Closing...]\n";
        break;
    
      default:
          cout << "Invalid option. Please try again.\n\n";
    }

  } while (option != 4);

  return 0;
}


  
  
  

 

