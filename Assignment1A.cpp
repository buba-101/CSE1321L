/*
Class: CSE 1321L
Section: E01
Term: Fall 2023
Instructor: Ilia Jahanshahi
Name: Abakareh Dukuray
Assignment#: 1A
*/

#include <iostream>

using namespace std;

int main() {

  float red;
  float green;
  float blue;
  float red_tint;
  float green_tint;
  float blue_tint;
  float percent;
  float brighten;
  
  cout << "Enter a red value(0-255):";
  cin >> red;

  cout << "Enter a green value(0-255):";
  cin >> green;

  cout << "Enter a blue value(0-255):";
  cin >> blue;

  cout << "Percentage to brighten color:";
  cin >> brighten;

  cout << endl;

  red_tint = ((255 - red) * brighten) + red;
  green_tint = ((255 - green) * brighten) + green;
  blue_tint = ((255 - blue) * brighten) + blue;
  
  percent = brighten * 100;

  cout << "A " << percent << "% brighter tint of RGB (" << red << ", " << green << ", " << blue << ") is RGB ("<< red_tint << ", " << green_tint << ", " << blue_tint << ").";


}