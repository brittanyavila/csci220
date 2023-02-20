// NAME: Brittany Avila 
// DATE: Jan 23, 2022
// CLASS: CSCI 220 
// PROFESSOR: Grace Lew


#include <iostream>
#include <string>
#include <map>
using namespace std;

void HtoB(string hexdecimal); 

void BtoH(string binary); 

void HtoD(string hextodecimal);

void DtoH(string decimal); 

int main() {

	char choice; 

	cout << "Enter one of the following:" << endl; 
	cout<< "Option A (Hexadecimal to Binary), " << endl; 
	cout << "Option B (Binary to Hexadecimal)," << endl; 
	cout << "Option C (Hexadecimal to Decimal)," << endl; 
	cout << "Option D (Decimal to Hexadecimal), " << endl; 
	cout << "or Q (Quit): ";
	cin >> choice; 

	string hexdecimal; 
	string binary; 
	string hextodecimal;
	string decimal; 



	switch (choice)
	{
	case 'A': cout << "Enter a Hexadecimal Number: "; 
		cin >> hexdecimal; 
		cout << "The Binary Number is: "; 
		HtoB(hexdecimal); 
		break; 
		
	case 'B': BtoH(binary); 
		break;

	case 'C': HtoD(hextodecimal); 
		break; 

	case 'D': DtoH(decimal); 
		break;

	case 'Q': return 0; 
		break; 
	}

	return 0;
}

void HtoB(string hexdecimal)
{
	int i = 0; 

	while (hexdecimal[i]) 
	{
		switch (hexdecimal[i])
		{
		case '0': cout << "0000"; 
			break; 

		case '1': cout << "0001"; 
			break;

		case '2': cout << "0010";
			break;

		case '3': cout << "0011";
			break;

		case '4': cout << "0100";
			break;

		case '5': cout << "0101";
			break;

		case '6': cout << "0110";
			break;

		case '7': cout << "0111";
			break;

		case '8': cout << "1000";
			break;

		case '9': cout << "1001";
			break;

		case 'A': 
		case 'a': cout << "1010";
			break;

		case 'B':
		case 'b': cout << "1011"; 
			break; 

		case 'C':
		case 'c': cout << "1100";
			break;

		case 'D':
		case 'd': cout << "1101";
			break;

		case 'E':
		case 'e': cout << "1101";
			break;

		case 'F':
		case 'f': cout << "1111";
			break;
		
		default: cout << "Not a valid digit! " << hexdecimal[i]; 
		}

		i++; 
	}
	 
}

void BtoH(string binary)
{
	long int binarynumber, hexadecimalnumber = 0, i = 1, rem;

	cout << "Enter a Binary Number: ";
	cin >> binarynumber; 

	while (binarynumber != 0)
	{
		rem = binarynumber % 10; 
		hexadecimalnumber = hexadecimalnumber + rem * i; 
		i = i * 2; 
		binarynumber = binarynumber / 10; 
	}

	cout << "The Hexadecimal Number is: " << hexadecimalnumber << endl; 

}

void HtoD(string hextodecimal)
{
	char num[20];
	int i, rem, dec, hex = 0;

	cout << "Enter a Hexadecimal Number: ";
	cin >> num; 
	dec = strlen(num); 

	for (i = 0; num[i] != 0; i++) 
	{
		dec--; 
		if (num[i] >= '0' && num[i] <= '9')
			rem = num[i] - 48;
		else if (num[i] >= 'a' && num[i] <= 'f')
			rem = num[i] - 87;
		else if (num[i] >= 'A' && num[i] <= 'F')
			rem = num[i] - 55; 
		hex += rem * pow(16, dec); 
	}

	cout << "The Decimal Number is: " << hex; 

}

void DtoH(string decimal)
{
	int dec, rem, product = 1; 

	string hextodec = ""; 
	cout << "Enter a Decimal Number: "; 
	cin >> dec; 

	while (dec != 0) {
		rem = dec % 16; 
		char ok; 
		if (rem >= 10)
			ok = rem + 55;
		else
			ok = rem + 48; 
		hextodec += ok; 

		dec = dec / 16; 
		product *= 10; 
	}

	cout << "The Hexadecimal Number is: " << hextodec; 
}

