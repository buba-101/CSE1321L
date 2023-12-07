#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

class BuildingBlueprint
{
  private:
    int floorNum;
    int roomNum;
    float occupancyRate;
    bool isFull;

  public:

//default constructor
BuildingBlueprint()
{
  floorNum = 10;
  roomNum = 20;
  occupancyRate = 1.0;
  isFull = true;
}

//overloaded constructor
BuildingBlueprint(int floor, int room, float rate)
{
  floorNum = floor;
  roomNum = room;
  occupancyRate = rate;
}

//methods for getters and setters
void set_rate(float r)
{
  occupancyRate = r;
}

float get_rate()
{
  return occupancyRate;
}

int get_floorNum()
{
  return floorNum;
}

int get_roomNum()
{
  return roomNum;
}

bool get_isFull()
{
  if(occupancyRate == 1.0)
  {
    isFull = true;
  }
  else
  {
    isFull = false;
  }

  return isFull;
}

};

int main() 
{
  string full_1, full_2;
  BuildingBlueprint buildingOne;
  BuildingBlueprint buildingTwo(30, 30, .75);

  //cheak if building one is full
  if (buildingOne.get_isFull())
  {
    full_1 = "true";
  }
  else
  {
    full_1 = "false";
  }

  //cheak if building two is full
  if (buildingTwo.get_isFull())
  {
    full_2 = "true";
  }
  else
  {
    full_2 = "false";
  }
  
  //Building 1 has 10 floors, 20 apartments, and is 100% occupied. Full? true

  cout << "Year 2020:\n";
  cout << "Building 1 has " << buildingOne.get_floorNum() << " floors, " << buildingOne.get_roomNum() << " apartments, and is " << buildingOne.get_rate() * 100 << "% occupied. Full? " << full_1 << endl;
  
  cout << "Building 2 has " << buildingTwo.get_floorNum() << " floors, " << buildingTwo.get_roomNum() << " apartments, and is " << buildingTwo.get_rate() *100 << " % occupied. Full? " << full_2 << endl;

  cout << "\nMany years pass.\n\n";

  //building one is fully occupied
  buildingOne.set_rate(0.0);
  buildingTwo.set_rate(1.0);
  
    //cheak if building one is full
    if (buildingOne.get_isFull())
    {
      full_1 = "true";
    }
    else
    {
      full_1 = "false";
    }

    //cheak if building two is full
    if (buildingTwo.get_isFull())
    {
      full_2 = "true";
    }
    else
    {
      full_2 = "false";
    }
  
  cout << "Year 2043:\n";
  
  cout << "Building 1 has " << buildingOne.get_floorNum() << " floors, " << buildingOne.get_roomNum() << " apartments, and is " << buildingOne.get_rate() * 100 << "% occupied. Full? " << full_1 << endl;
  
  cout << "Building 2 has " << buildingTwo.get_floorNum() << " floors, " << buildingTwo.get_roomNum() << " apartments, and is " << buildingTwo.get_rate() *100 << " % occupied. Full? " << full_2 << endl;

  cout << "\nLooks like people prefer taller buildings.\n";
  
  
}