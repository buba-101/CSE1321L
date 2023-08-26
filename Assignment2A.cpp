/*
Class: CSE 1321L
Section : E01
Term : Fall 2023
Instructor : Llia Jahanshahi
Name : Abakareh Dukuray
Lab# : Assignment 2A
*/

#include <iostream>

using namespace std;


int main()
{
	// Octogon Calculator

	double oct_side, cyn_r, cyn_h;

	double oct_A, oct_P;

	double cyn_A, cyn_P;
	
	const float PI = 3.14159265359;

	
	cout << "[Octagon Calculator]\n";

	cout << "Enter the length of one side: ";
	cin >> oct_side;

	
	oct_A = 2 * (1 + sqrt(2)) * (oct_side * oct_side);
	oct_P = 8 * oct_side;

	
	cout << "Octagon Perimeter = " << oct_P << endl;
	
	cout << "Octagon Area = " << oct_A << endl << endl;



	// Cylinder Calculator

	cout << "[Cylinder Calculator]\n";

	cout << "Enter the radius: ";
	cin >> cyn_r;

	cout << "Enter the height: ";
	cin >> cyn_h;

	cyn_A = (2 * PI * cyn_r * cyn_h) + (2 * PI * (cyn_r * cyn_r));
	cyn_P = 2 * ((2 * cyn_r) + cyn_h);

	cout << "Cylinder Perimeter = " << cyn_P << endl;

	cout << "Cylinder Area = " << cyn_A << endl;





}


