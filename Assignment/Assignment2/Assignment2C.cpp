/*
Class: CSE 1321L
Section : E01
Term : Fall 2023
Instructor : Llia Jahanshahi
Name : Abakareh Dukuray
Lab# : Assignment 2C
*/

#include <iostream>

using namespace std;


int main()
{
	
     int X, Y, h, w, BL_X, BL_Y, BR_X, BR_Y, TL_X, TL_Y, TR_X, TR_Y;
  
  //inputs

  cout << "X coordinate (bottom-left corner): ";
  cin >> X;

  cout << "Y coordinate (bottom-left corner): ";
  cin >> Y;

  cout << "Hit box width: ";
  cin >> w;

  cout << "Hit box height: ";
  cin >> h;

  //Calculations

  BL_X = X;
  BL_Y = Y;

  BR_X = X + w;
  BR_Y = Y;

  TL_X = X;
  TL_Y = Y + h;

  TR_X = X + w;
  TR_Y = Y + h;

  //display

  cout << "[Sprite Hit Box Coordinates]\n Bottom-Left: ";
  cout << BL_X << ", " << BL_Y << "\n Top-Left: ";
  cout << TL_X << ", " << TL_Y << "\n Bottom-Right: ";
  cout << BR_X << ", " << BR_Y << "\n Top-Right: ";
  cout << TR_X << ", " << TR_Y << "\n";

}


