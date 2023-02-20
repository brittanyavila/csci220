// NAME: Brittany Avila 
// DUE DATE: Feb 21, 2023
// CLASS: CSCI 220 
// PROFESSOR: Grace Lew

#include <iostream>
using namespace std; 

//prototype of functions used
void TAddition (int);
void TNegation(int);
void TMultiplication(int); 
void TDivision(int); 

int main()
{

	//menu display 
	int choice;
	cout << "Enter one of the following:" << endl;
	cout << "Option 1 (Two’s Complement Addition) " << endl;
	cout << "Option 2 (Two’s Complement Negation)" << endl;
	cout << "Option 3 (Two’s Complement Multiplication)" << endl;
	cout << "Option 4 (Two’s Complement Division by Power of Two) " << endl;
	cout << "or 0 (Quit): ";
	cin >> choice;

	//initialized integers for functions 
	int add=0; 
	int negation = 0; 
	int multi = 0; 
	int division = 0; 

	while (choice != 0)
	{

		//twos complement addition
		if (choice == 1)
		{
			cout << "SELECTED: Two’s Complement Addition" << endl << endl;
			TAddition(add); 
		}

		//twos complement negotion 
		if (choice == 2)
		{
			cout << "SELECTED: Two’s Complement Negation" << endl << endl;
			TNegation(negation); 
		}

		//twos complement multiplication
		if (choice == 3)
		{
			cout << "SELECTED: Two’s Complement Multiplication" << endl << endl;
			TMultiplication(multi);
		}

		//twos complement division
		if (choice == 4)
		{
			cout << "SELECTED: Two’s Complement Division by Power of Two" << endl << endl;
			TDivision(division);
		}

		//repeat menu 
		cout << "Enter one of the following:" << endl;
		cout << "Option 1 (Two’s Complement Addition) " << endl;
		cout << "Option 2 (Two’s Complement Negation)" << endl;
		cout << "Option 3 (Two’s Complement Multiplication)" << endl;
		cout << "Option 4 (Two’s Complement Division by Power of Two) " << endl;
		cout << "or 0 (Quit): ";
		cin >> choice;

	}

	//quit  
	if (choice == 0)
	{
		cout << "You quit the program!" << endl; 
		return 0;
	}

	return 0; 
}

void TAddition(int add) //addition equation
{
	//initialized integers
	int add1; 
	int add2; 
	int result;
	int w; 
	int sum; 
	int wordsize; 

	//ask user to enter number and word size
	cout << "Enter a number: "; 
	cin >> add1; 
	cout << endl; 
	cout << "Enter another number: ";
	cin >> add2; 
	cout << endl; 
	cout << "Enter word size: ";
	cin >> w; 
	
	// 2^w-1 equation
	wordsize = w - 1; 

	//x + y equals the sum equation 
	sum = add1 + add2; 

	//if 2^w-1 <= x+y equation 
	if (pow(2, wordsize) <= sum)
		result = add1 + add2 - pow(2, w);

	//if 2^-w-1 <= x+y and x+y < 2^w-1
	else if (pow(-2, wordsize) <= sum && sum < pow(2, wordsize))
		result = add1 + add2;

	// else if x+y < -2^w-1
	else if (sum < pow(-2, wordsize))
		result = add1 + add2 + pow(2, w); 
	
	//prints on screen
	cout << endl; 
	cout << "The addition of those integers is: " << result << endl << endl;

}

void TNegation(int) //negation equation 
{
	//initialized integers 
	int x;
	long long TMin = 0;
	int w; 

	//ask users for information 
	cout << "Enter a number: ";
	cin >> x; 
	cout << endl; 
	cout << "Enter word size: "; 
	cin >> w; 
	cout << endl; 

	// word size = Tmin
	if (w == 4)
		TMin = -8; 
	if (w == 8)
		TMin = -128; 
	if (w == 16)
		TMin = -32768; 
	if (w == 32)
		TMin = -2147483648; 
	
	//prints on screen if x equals Tmin
	if (x == TMin)
		cout << "The final result is: " << x << endl << endl;

	//prints on screen if x > Tmin
	else if (x > TMin)
		cout << "The final result is: " << -x << endl << endl;
}

void TMultiplication(int) //multiplication equation 
{
	//initialized integers 
	int x; 
	int y; 
	int result;
	int w; 
	int wordsize; 

	//ask users for information 
	cout << "Enter a number: ";
	cin >> x; 
	cout << endl; 
	cout << "Enter another number: ";
	cin >> y; 
	cout << endl; 
	cout << "Enter wordsize: ";
	cin >> w; 
	cout << endl; 

	// wordsize = 2^w
	wordsize = pow(2, w);

	//gives the result of x * y mod wordsize 
	result = (x * y) % wordsize; 

	//print on screen if x < 0 and y < 0 
	if (x < 0 && y < 0)
		cout << "The result is: " << -result << endl << endl; 

	//print on screen other wise 
	else
		cout << "The result is: " << result << endl << endl; 

}

void TDivision(int) //division equation 
{
	//initialized integers 
	int k; 
	int x; 
	int result; 

	//ask user for information 
	cout << "Enter a number: ";
	cin >> x; 
	cout << endl; 
	cout << "Enter a number for k: ";
	cin >> k; 
	cout << endl; 

	//gives the result of [x/2^k]
	result = x / pow(2, k); 

	// prints result on screen 
	cout << "The final result is: " << result << endl << endl; 
}