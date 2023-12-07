/*
Class: CSE 1321L
Section: E01
Term: Fall 2023
Instructor: Llia Jahanshahi
Name: Abakareh Dukuray
Lab#: Lab 3C
*/ 

#include <iostream>

using namespace std;

int main() 
{

  int q, d, n, p, cents, dollars;

  //Inputs
  
  cout << "Enter the number of quarters: ";
  cin >> q;

  cout << "Enter the number of dimes: ";
  cin >> d;

  cout << "Enter the number of nickels: ";
  cin >> n;

  cout << "Enter the number of pennies: ";
  cin >> p;  

  //Display

  cout << endl << "You entered " << q << " quarters.\nYou entered " << d << " dimes.\nYou entered " << n << " nickels.\nYou entered " << p << " pennies." << endl << endl;

  //Calculations

  cents = (q * 25) + (d * 10) + (n * 5) + p;

  dollars = cents / 100;
    
  cents = cents % 100;

  //Display

  cout << "Your total is " << dollars << " dollars and " << cents << " cents." << endl;
  
}