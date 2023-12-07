#include <iostream>

using namespace std;

int width, height;


void printArray(float** arr, int w, int h)
{
  for (int row = 0; row < h; row++)
    {
      for (int col = 0; col < w; col++)
        {
          cout << arr[row][col] << ",";
        }
      cout << endl;
    }
  cout << endl;
}

bool updateRow(float** arr, int width, int height, int row, int col, int length, float val)
{

  if (row < 0 || row >= height || col < 0 || col >= width)
  {
    return false;
  }

  if (length + col > width)
  {
    return false;
  }

  for (int i = col; i < length + col; i++)
    {
      
      arr[row][i] = val;
    }
  return true;

}

bool updateRow(float** arr, int row, int col, float val)
{

  arr[row][col] = val;
  return true;

}


int main() 
{
  int row, col, length;
  float val; 
  
  cout << "[Building Character]\n";
  
  cout << "Enter an array width: ";
  cin >> width;
  
  cout << "Enter an array height: ";
  cin >> height;

  cout << "Enter an initial value: ";
  cin >> val;

  float **arr = new float *[height];
  cout << "Creating an array with " << height << " row(s) and " << width << " coumn(s)\n\n";

  for (int row = 0; row < height; row++)
    {
      arr[row] = new float[width];
      for (int col = 0; col < width; col++)
        {
          
          arr[row][col] = val;
          
        }
    }

  printArray(arr, width, height);

  cout << "Making the first row negative\n\n";

  //make first row negative
  for (int i = 0 ; i < width; i++)
    {
      arr[0][i] = arr[0][i] * -1;
    }

  printArray(arr, width, height);

  cout << "Enter a row index: ";
  cin >> row;

  cout << "Enter a column index: ";
  cin >> col;

  cout << "Enter a value: ";
  cin >> val;

  cout << endl;

  //update row
  updateRow(arr, row, col, val);

  printArray(arr, width, height);

  cout << "Alternating rows\n\n";

  for (int i = 0; i < height; i++)
    {
      for (int j = 0; j < width; j++)
        {
          if (i % 2 == 0)
          {
            arr[i][j] = 12.78;
          }
          else
          {
            arr[i][j] = 87.21;
          }
        }
    }

  printArray(arr, width, height);

 do{
  cout << "Enter a row index: ";
  cin >> row;

  cout << "Enter a column index: ";
  cin >> col;

  cout << "Enter a length: ";
  cin >> length;

  cout << "Enter a value: ";
  cin >> val;

   if (updateRow(arr, width, height, row, col, length, val) == false)
   {
     cout << "Invalid information! Try again.\n\n";
   }

 } while (updateRow(arr, width, height, row, col, length, val) == false);
  

  if (updateRow(arr, width, height, row, col, length, val))
  {
    updateRow(arr, width, height, row, col, length, val);
  }

  cout << endl;
  
  printArray(arr, width, height);

  cout << "[Finally done!]\n";
 
}

