//=====================================================
// Andrew Hartman
// February 20, 2019
// Programming Assignment #4
// Description: Mortgage
//=====================================================
#include <iostream>
#include <iomanip>
#include <string>
using namespace	std;
#include "Mortgage.h"

int main()
{
	Mortgage mortgage;

	double loan;    //holds the loan amount
	int years;      //holds duration of loan
	float rate;     //holds interest rate
	string input;   //temp variable for strings
	cout << "Enter the loan amount: $";
	getline(cin, input);

	//code below tests for valid input, but only once, idk how to loop it or any other way to do input validation
	try {
		loan = stod(input);
	}
	catch (const exception&) {
		cout << "Invalid Input. Enter the loan amount: $";
		getline(cin, input);
	}

	cout << "Enter the loan duration (in years): ";
	getline(cin, input);

	try {
		years = stoi(input);
	}
	catch (const exception&) {
		cout << "Invalid Input. Enter the loan amount: $";
		getline(cin, input);
	}

	cout << "Enter interest rate(%): ";
	getline(cin, input);

	try {
		rate = stof(input);
	}
	catch (const exception&) {
		cout << "Invalid Input. Enter the loan amount: $";
		getline(cin, input);
	}
	rate /= 100.;

	mortgage.setLoan(loan);
	mortgage.setRate(rate);
	mortgage.setYears(years);

	//output results
	cout << fixed << setprecision(2);
	cout << "payment: $" << mortgage.getPayment() << endl;
	cout << "total: $" << mortgage.getTotal() << endl;
}