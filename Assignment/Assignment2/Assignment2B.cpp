/*
Class: CSE 1321L
Section : E01
Term : Fall 2023
Instructor : Llia Jahanshahi
Name : Abakareh Dukuray
Lab# : Assignment 2B
*/

#include <iostream>

using namespace std;


int main()
{

    int hrs, min, sec, time;
  
  //input
  cout << "Time in seconds: ";
  cin >> time;

  cout << "Converting...\n";

  //hour
  hrs = time / 3600;

  //minutes
  min = (time % 3600) / 60;

  //seconds
  sec = time %  60;

  //display
  cout << time << " seconds == " << hrs << "hour(s), " << min << "minute(s), " << sec << "second(s).";

}


