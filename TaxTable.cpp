// TaxTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
// Header for input
cout << "INPUT PART\n==========" << endl;


//Collect input
double firstPrice{-1}, lastPrice{-1}, stride{-1}, taxPercent{-1};

    
while (firstPrice < 0) {
	cout << "Enter first price: ";
	cin >> firstPrice;

	if (firstPrice < 0) {
		cout << "ERROR: First price must be at least 0 (zero) SEK" << endl;
	}
	else { 
		break; }

}
while (lastPrice < firstPrice) {
	cout << "Enter last price : ";
	cin >> lastPrice;

	if (lastPrice < 0) {
		cout << "ERROR: Last price must be at least 0 (zero) SEK" << endl;
	}
	else if (lastPrice < firstPrice) {
		cout << "ERROR: Last price must be bigger than the first price" << endl;
	}
	else {
		break;
	}
}
while (stride < 0) {
	cout << "Enter stride     : ";
	cin >> stride;

	if (stride < 0.01) {
		cout << "ERROR: Stride must be at least 0.01" << endl;
	}
	else {
		break;
	}
}
while (taxPercent < 0) {
	cout << "Enter tax percent: ";
	cin >> taxPercent;
	
	if (taxPercent < 0) {
		cout << "ERROR: Stride must be at least 0 (zero) SEK" << endl;
	}
	else {
		break;
	}
}


//Header for output
cout << "\nTAX TABLE\n==========" << endl;
cout << "      Price            Tax         Price with tax" << endl;
cout << "-------------------------------------------------" << endl;


//Output
while (firstPrice <= lastPrice) {

	cout << setprecision(2) << fixed << "      " << firstPrice << "           " << firstPrice * (taxPercent / 100) << "                  " << firstPrice + (firstPrice * (taxPercent / 100)) << endl;

	firstPrice += stride;

}







}


