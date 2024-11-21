#include <iostream>
using namespace std;

template <typename T> // template func for permitation of var values
void SwapVariables(T& firstVar, T& secondVar)
{
	T temp = firstVar;
	firstVar = secondVar;
	secondVar = temp;
}

void main()
{
	string firstVariable, secondVariable; // declaring variables

	cout << "Enter the first variable: "; 
	cin >> firstVariable;		// entering the first variable

	cout << "Enter the second variable: ";
	cin >> secondVariable;		// entering the second variable
	cout << endl;

	cout << "now value of the first variable will be value of second variable and vice versa" << endl << endl;

	SwapVariables(firstVariable, secondVariable); // calling the SwapVariable func

	cout << "value of first variable = " << firstVariable << endl;		//  output of the value of the first variable
	cout << "value of second variable = " << secondVariable << endl;	//  output of the value of the second variable
}