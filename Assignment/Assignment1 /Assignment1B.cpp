/*
Class: CSE 1321L
Section: E01
Term: Fall 2023
Instructor: Ilia Jahanshahi
Name: Abakareh Dukuray
Assignment#: 1B
*/

#include <iostream>

using namespace std;

int main() {

  float meal_price;
  float tax_rate;
  float service_charge;
  float subtotal;
  float low_percent;
  float high_percent;
  float total_tax;
  float total_low;
  float total_high;

  

  cout << "[What to Tip]\n";

  cout << "Enter the total price of the meal: ";
  cin >> meal_price;
  
  cout << "Enter the local tax rate: ";
  cin >> tax_rate;
  
  cout << "Enter the service charge: ";
  cin >> service_charge;

  cout << endl;

  total_tax = meal_price * tax_rate;
  
  subtotal = meal_price + service_charge;

  low_percent = subtotal * (0.10);
  high_percent = subtotal * (0.25);

  total_low = low_percent + subtotal + total_tax;
  total_high = high_percent + subtotal + total_tax;
  
  cout << "The subtotal is $" << subtotal << endl << endl;
  
  cout << "A 10% tip would be $" << low_percent << "\n The total would be $" << total_low << endl << endl;
  
  cout << "A 25% tip would be $" << high_percent << "\n The total would be $" << total_high << endl << endl;
  
}
