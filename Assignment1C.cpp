/*
Class: CSE 1321L
Section: E01
Term: Fall 2023
Instructor: Ilia Jahanshahi
Name: Abakareh Dukuray
Assignment#: 1C
*/

#include <iostream>

using namespace std;

int main() {

  string animal;
  float meal;
  int number;
  char letter;

  cout << "Enter your third favorite animal: ";
  cin >> animal;
  
  cout << "Enter the subtotal from your last take-out meal: ";
  cin >> meal;
  
  cout << "Enter a whole number less than |32767|: ";
  cin >> number;
  
  cout << "Enter a single letter: ";
  cin >> letter;


  cout << "Your passphrase is: " << animal << " " << meal << " " << number << " " << letter  << endl;

  cout << "Other variations are: " << endl;

  cout << letter << " " << number << " " << animal << " " << meal << endl;
  cout << meal << " " << letter << " " << animal << " " << number << endl;
  cout << number << " " << animal << " " << letter << " " << meal << endl;

}
