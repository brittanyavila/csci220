// NAME: Brittany Avila 
// DATE: Feb 7, 2023
// CLASS: CSCI 220 
// PROFESSOR: Grace Lew

#include <iostream>
#include <string>

using namespace std; 

//protype of functions
void B2U(string); 
void B2T(string);
void T2U(int);
void U2T(int);
void Q(int); 


int main()
{

	//menu display 
	int choice;
	cout << "Enter one of the following:" << endl;
	cout << "Option 1 (Unsigned Encodingy) " << endl;
	cout << "Option 2 (Two’s Complement Encoding)" << endl;
	cout << "Option 3 (Two’s Complement Signed to Unsigned Conversion)" << endl;
	cout << "Option 4 (Unsigned to Two’s Complement Signed Conversion) " << endl;
	cout << "or 0 (Quit): ";
	cin >> choice;

	//initialize the names in function prototype
	string b;
	string bin; 
	int twos = 0;
	int t = 0; 
	int q = 0; 

	//loop that keeps going until user wants to quit 
	while (choice != 0)
	{

		// binary to unsigned
		if (choice == 1)
		{
			cout << "SELECTED: Unsigned Encoding" << endl;
			//function
			B2U(b);
		}

		//binary to signed
	    if (choice == 2)
		{
			cout << "SELECTED: Two’s Complement Encoding" << endl;
			//function
			B2T(bin); 
		}

		//signed to unsigned 
		if (choice == 3)
		{
			cout << "SELECTED: Two’s Complement Signed to Unsigned Conversion" << endl;
			//function
			T2U(twos);
		}

		//unsigned to signed 
		if (choice == 4)
		{
			cout << "SELECTED: Unsigned to Two’s Complement Signed Conversion" << endl;
			//function
			U2T(t); 

		}

		//repeat menu 
		cout << endl <<  "Enter one of the following:" << endl;
		cout << "Option 1 (Unsigned Encodingy) " << endl;
		cout << "Option 2 (Two’s Complement Encoding)" << endl;
		cout << "Option 3 (Two’s Complement Signed to Unsigned Conversion)" << endl;
		cout << "Option 4 (Unsigned to Two’s Complement Signed Conversion) " << endl;
		cout << "or 0 (Quit): ";
		cin >> choice;

	}

	//quit option 
	if (choice == 0)
	{
		Q(q); 
		return 0;
	}
	
}

void B2U(string b)
{
	cout << "Enter Binary Number: "; 
	cin >> b; //user inserts binary number 

	//initialize num equal to binary and initialize the decimal value
		string num = b;
		int dec_value = 0;

		// Initializing base value to 1
		int base = 1;

		//function that calculates binary to decimal 
		int len = num.length();
		for (int i = len - 1; i >= 0; i--) {
			if (num[i] == '1')
				dec_value += base;
			base = base * 2;
		}

	//print statement to screen 
	cout << "The Unsigned Decimal of " << b << " is: " << dec_value << endl; 

}

void B2T(string bin)
{
	
	//initialize num equal to binary and initialize the decimal value
	string n;
	int number = 0 ;
	int m = 0;
	int k = 0; 


	// Initializing base value to 2
	int base = 2;
	int basept2 = -2;


	//print on screen 
	cout << "Enter Binary Number: ";
	cin >> bin;

	//function that calculates binary to decimal 
	for (int i = bin.length() - 1; i >= 0; i--) {

		n = bin[k];
		if (n[k] == 1)
		{
			
			//if statement if k is equal to zero do this 
			if (k == 0)
			{
				m = pow(basept2, i);
				number += m; 
			
			}

			//else do this
			else 
			{

				m = pow(base, i); 
				number += m; 
			
			}

		}

		k* k; 
	
	}

	//print on screen
	cout << "Two's Complement Value of " << bin  << " is: " << number << endl;

}

void T2U(int twos)
{
	// initialize variables used in function 
	int final; 
	int number; 
	int w; 

	//print out on screen 
	cout << "Enter Signed Number: "; 
	cin >> number; 
	cout << "Enter word size: ";
	cin >> w; 

	//loop that caluclates if number is less than 0 
	if (number < 0)
	{
		//equation for signed to unsigned 
		final = number + pow(2, w);
		cout << "The Unsiged Number of " << number << " and word size of " << w << " is: " << final << endl;
	}
	else
	{
		// if number is the name 
		cout << "Number does not change: " << number << endl;
	}

}

void U2T(int t)
{
	// initialize variables used in function 
	int final; 
	int number; 
	int w; 

	//print out on screen 
	cout << "Enter Unsigned Number: ";
	cin >> number; 
	cout << "Enter word size: "; 
	cin >> w; 

	// loop that if number is less than or equal to 7 then it doesnt change 
	if (number <= 7)
	{
		cout << "Number does not change: " << number; 
	}
	else //otherwise it does 
	{
		final = number - pow(2, w); 
		cout << "The Signed Number of " << number << " and word size of " << w << " is: " << final << endl;
	}
}

void Q(int q)
{
	//print on screen 
	cout << "YOU QUIT PROGRAM! " << endl; 
}