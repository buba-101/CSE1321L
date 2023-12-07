#include <iostream>
#include<string>

using namespace std;

int main() 
{
  
  string illness, Y_N;
  
  
  cout << "[WebMD Checker]\n";
  cout << "What is your suspected illness? ";
  getline(cin, illness);

  
  //HGPS
  if (illness == "HGPS")
  {
    cout << "Do you have brittle bones? ";
    cin >> Y_N;
    //yes
    if (Y_N == "Y")
    {
      cout << "It is possible that you have HGPS\n";
    }
    //no  
    else if (Y_N == "N")
    {
      cout << "It is not likely that you have HGPS\n";
    }
      
  }
    
  //bokter Syndrome
  else if (illness.compare("Bokter Syndrome") == 0)
  {
    cout << "Do you have a Vitamin C deficiency? ";
    cin >> Y_N;
    //yes
    if (Y_N == "Y")
    {
      
      cout << "Are you a sailor? ";
      cin >> Y_N;

      //yes
      if (Y_N == "Y")
      {
        cout << "It is possible that you have Bokter Syndrome\n";
      }
      //no  
      else if (Y_N == "N")
      {
        cout << "It is not likely you have Bokter Syndrome\n";
      }
          
    }
    //no  
    else if (Y_N == "N")
    {
      cout << "It is not likely that you have Bokter Syndrome\n";
    }
      
  }

  //Lupus
  else if (illness == "Lupus")
  {
    
    cout << "It is not likely that you have Lupus\n";
    
  }

}