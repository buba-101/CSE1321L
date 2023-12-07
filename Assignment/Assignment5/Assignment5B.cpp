#include <iostream>

using namespace std;

int main() 
{
  bool isValid = true;
  string direction;
  int x = 4, y = 0;
  cout << "[Maze Game]\n";
  
char map[5][5];
  map[0][1] = 'N';
  map[1][1] = 'N';
  map[0][3] = 'N';
  map[1][3] = 'N';
  map[2][3] = 'N';
  map[0][4] = 'N';
  map[3][0] = 'N';
  map[3][1] = 'N';
  map[4][3] = 'N';
  map[4][4] = 'N';


  for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < 5; j++)
        {
          if (map[i][j] != 'N')
          {
            map[i][j] = '_';
          }
        }
    }

  map[3][4] = 'W';
  map [x][y] = 'P';
  


  while (isValid)
    {
        for (int i = 0; i < 5; i++)
        {
          for (int j = 0; j < 5; j++)
            {
              cout << map[i][j] << ".";
            }
          cout << endl;
        }
        
        cout << "Which direction do you want to move? ";
        cin >> direction;

        // Up
        if (direction == "Up")
        {
          if ((map[x-1][y] == '_') && (x - 1 >= 0) && (x - 1 <= 4))
          {
            map[x][y] = '_';
            map[x-1][y] = 'P';
            x--;
          }
          else if (map[x-1][y] == 'W')
          {
            cout << "You Win!";
            isValid = false;
          }
          else if (map[x-1][y] == 'N')
          {
            cout << "You hit a wall - Game Over!";
            isValid = false;
          }

          else
          {
            cout << "You can't move there - it's out of bounds!\n";
          }
          
        }

        //Down
        else if (direction == "Down")
        {
          if ((map[x+1][y] == '_') && (x + 1 >= 0) && (x + 1 <= 4))
          {
            map[x][y] = '_';
            map[x+1][y] = 'P';
            x++;
          }
          else if (map[x+1][y] == 'W')
          {
            cout << "You Win!";
            isValid = false;
          }
          else if (map[x+1][y] == 'N')
          {
            cout << "You hit a wall - Game Over!";
            isValid = false;
          }

          else
          {
            cout << "You can't move there - it's out of bounds!\n";
          }
  
        }

        //Left  
        else if (direction == "Left")
        {
          if ((map[x][y-1] == '_') && (y - 1 >= 0) && (y - 1 <= 4))
          {
            map[x][y] = '_';
            map[x][y-1] = 'P';
            y--;
          }
          else if ((map[x][y-1] == 'W') && (y - 1 >= 0) && (y - 1 <= 4))
          {
            cout << "You Win!";
            isValid = false;
          }
          else if (map[x][y-1] == 'N')
          {
            cout << "You hit a wall - Game Over!";
            isValid = false;
          }

          else
          {
            cout << "You can't move there - it's out of bounds!\n";
          }
  
        }

        //Right  
        else if (direction == "Right")
        {
          if ((map[x][y+1] == '_') && (y + 1 >= 0) && (y + 1 <= 4))
          {
            map[x][y] = '_';
            map[x][y+1] = 'P';
            y++;
          }
          else if ((map[x][y+1] == 'W') && (y + 1 >= 0) && (y + 1 <= 4))
          {
            cout << "You Win!";
            isValid = false;
          }
          else if (map[x][y+1] == 'N')
          {
            cout << "You hit a wall - Game Over!";
            isValid = false;
          }
          else
          {
            cout << "You can't move there - it's out of bounds!\n";
          }
  
        }
  
        else
        {
          cout << "That's not a valid direction!\n";
        }
      
      }
    }   
