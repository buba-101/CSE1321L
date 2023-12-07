#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

class player
{
  private:
    int width;
    int height;
    int depth;
    int xPosition;
    int yPosition;
    int zPosition;

  public:
    //contruuctor
    player(int x, int y, int z, int w, int h, int d)
    {
      this->xPosition = x;
      this->yPosition = y;
      this->zPosition = z;
      this->width = w;
      this->height = h;
      this->depth = d;
    }
    //X getters and setters
    int getXPosition()
    {
      return xPosition;
    }
    /*void setXPosition(int x)
    {
      xPosition = x;
    }*/

    //Y getters and setters
    int getYPosition()
    {
      return yPosition;
    }
    /*void setYPosition(int y)
    {
      yPosition = y;
    }*/

    //Z getters and setters
    int getZPosition()
    {
      return zPosition;
    }
    /*void setZPosition(int z)
    {
      zPosition = z;
    }*/

    //move X
    void move_X(int x)
    {
      xPosition = xPosition + x;
    }

    //move Y
    void move_Y(int y)
    {
      yPosition = yPosition + y;
    }

    //move Z
    void move_Z(int z)
    {
      zPosition = zPosition + z;
    }

    //COLLISION?
    bool collision(player p)
    {
      if(xPosition < (p.xPosition + p.width) && (width + xPosition) > (p.xPosition) && (yPosition < (p.yPosition + p.height)) && (height + yPosition) > (p.yPosition) && (zPosition < (p.zPosition + p.depth)) && (depth + zPosition) > (p.zPosition))
      {
        //Collision occurred
        return true;
      }
      else
      {
        return false;
      }
    }
};

void printPos(player p1, player p2)
{
  cout << "\nPlayer 1 is at (" << p1.getXPosition() << ", " << p1.getYPosition() << ", " << p1.getZPosition() << ") and Player 2 is at (" << p2.getXPosition() << ", " << p2.getYPosition() << ", " << p2.getZPosition() << ")\n";
}

int main() 
{
  int x, y, z, width, height, depth, choice, far;
  bool t_f = true;
  string movement;

  cout << "[3D Collision Tester]\n";
  
  cout << "\nCreate Player 1\n";

  cout << "Enter X position: ";
  cin >> x;

  cout << "Enter Y position: ";
  cin >> y;

  cout << "Enter Z position: ";
  cin >> z;

  cout << "Enter Player Hitbox Width: ";
  cin >> width;

  cout << "Enter Player Hitbox Height: ";
  cin >> height;

  cout << "Enter Player Hitbox Depth: ";
  cin >> depth;

  //player 1 created
  player p1(x, y, z, width, height, depth);

  cout << "\nCreate Player 2\n";

  cout << "Enter X position: ";
  cin >> x;

  cout << "Enter Y position: ";
  cin >> y;

  cout << "Enter Z position: ";
  cin >> z;

  cout << "Enter Player Hitbox Width: ";
  cin >> width;

  cout << "Enter Player Hitbox Height: ";
  cin >> height;

  cout << "Enter Player Hitbox Depth: ";
  cin >> depth;

  //player 2 created
  player p2(x, y, z, width, height, depth);

  if (p1.collision(p2))
  {
    cout << "\nThey collided!\n";
    return 0;
  }

  
  while (t_f)
  {
    printPos(p1, p2);
    cout << "Which one do you want to move?\n";
    cin >> choice;
    
    switch (choice)
      {
        case 1:
          cout << "Which direction should Player 1 move (up, down, left, or right)?\n";
          cin >> movement;

          cout << "How far should Player 1 move?\n";
          cin >> far;

          //to lower
          for (int i = 0; i < movement.length(); i++)
            {
              movement[i] = tolower(movement[i]);
            }
          
          if (movement == "up" || movement == "down")
          {
            p1.move_Y(far);
          }
            
          else if (movement == "left" || movement == "right")
          {
            p1.move_X(far);
          }
            
          else if (movement == "forward" || movement == "backward")
          {
            p1.move_Z(far);
          }
            
          else
          {
            cout << "Invalid movement!\n";
          }
            
          break;

        case 2:
          cout << "Which direction should Player 2 move (up, down, left, or right)?\n";
          cin >> movement;

          cout << "How far should Player 2 move?\n";
          cin >> far;

          //to lower
          for (int i = 0; i < movement.length(); i++)
            {
              movement[i] = tolower(movement[i]);
            }

          if (movement == "up" || movement == "down")
          {
            p2.move_Y(far);
          }

          else if (movement == "left" || movement == "right")
          {
            p2.move_X(far);
          }

          else if (movement == "forward" || movement == "backward")
          {
            p2.move_Z(far);
          }

          else
          {
            cout << "Invalid movement!\n";
          }
          
          break;

        default:
          cout << "Invalid choice!\n";
      }
    
    if (p1.collision(p2))
    {
      printPos(p1, p2);
      cout << "They collided!\n";
      t_f = false;
    }
    
  }

}