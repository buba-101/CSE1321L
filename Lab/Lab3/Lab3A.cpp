/*
Class: CSE 1321L
Section: E01
Term: Fall 2023
Instructor: Llia Jahanshahi
Name: Abakareh Dukuray
Lab#: Lab 3A
*/ 

#include <iostream>
#include <math.h>

using namespace std;

int main() 
{

  int amount_owed;
  double minimum_payment;
  float apr,mpr;
  
  cout << "Amount owed: $";
  cin >> amount_owed;
  
  cout << "APR: ";
  cin >> apr;

  apr = apr / 100;

  mpr = (apr / 12) * 100;

   minimum_payment = (amount_owed * apr) / 12;

  
  cout << "Monthly percentage rate: " << round(mpr * 1000) / 1000 << endl;

  cout << "Minimum payment: $" << round(minimum_payment * 100) / 100 << endl;


  
}