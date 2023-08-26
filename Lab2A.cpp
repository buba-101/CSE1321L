
/*
Class: CSE 1321L
Section : E01
Term : Fall 2023
Instructor : Llia Jahanshahi
Name : Abakareh Dukuray
Lab# : Lab2A
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

	string nam1, nam2, verb, adverb;


	cout << "Enter a name: ";
	cin >> nam1;


	cout << "Enter another name: ";
	cin >> nam2;


	cout << "Enter a verb: ";
	cin >> verb;


	cout << "Enter an adverb: ";
	cin >> adverb;



	cout << "Once upon a time, there was a person named ";
	cout << nam1;
	cout << " who had a child named ";
	cout << nam2;
	cout << ". This child would ";
	cout << verb << " " << adverb;
	cout<< " while singing to strangers. " ;

}
