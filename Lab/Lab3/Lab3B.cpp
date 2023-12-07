/*
Class: CSE 1321L
Section: E01
Term: Fall 2023
Instructor: Llia Jahanshahi
Name: Abakareh Dukuray
Lab#: Lab 3B
*/ 

#include <iostream>

using namespace std;

int main() 
{
  float one_hrs, two_hrs, three_hrs, four_hrs, one_grade, two_grade, three_grade, four_grade;
  float one_quality, two_quality, three_quality, four_quality;
  float total_quality;
  float total_hours;
  float gpa;

  // Inputs
  
  cout << "Course 1 hours: ";
  cin >> one_hrs;

  cout << "Grade for course 1: ";
  cin >> one_grade;
  
  cout << "Course 2 hours: ";
  cin >> two_hrs;
  
  cout << "Grade for course 2: ";
  cin >> two_grade;

  
  cout << "Course 3 hours: ";
  cin >> three_hrs;
  
  cout << "Grade for course 3: ";
  cin >> three_grade;

  cout << "Course 4 hours: ";
  cin >> four_hrs;
  
  cout << "Grade for course 4: ";
  cin >> four_grade;

  // Calculations

  one_quality = one_hrs * one_grade;

  two_quality = two_hrs * two_grade;

  three_quality = three_hrs * three_grade;

  four_quality = four_hrs * four_grade;

  total_hours = one_hrs + two_hrs + three_hrs + four_hrs;

  total_quality =  one_quality + two_quality + three_quality + four_quality;

  gpa = total_quality / total_hours;
    
 
  //Display

  cout << "Total hours is: " << total_hours << endl;
  
  cout << "Total quality points is: " << total_quality << endl;

  cout << "Your GPA for this semester is " << gpa << endl;
  
  
}