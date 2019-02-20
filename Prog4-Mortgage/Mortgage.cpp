#include <iostream>
#include <string>
using namespace std;
#include "Mortgage.h"

//calculates monthly payment
double Mortgage::getPayment()
{
	double term = getTerm();
	return ((loan*(rate / 12.)*term) / (term - 1));
}

//gets total of all payments
double Mortgage::getTotal()
{
	double payment = getPayment();
	return (payment * 12 * years);
}

//calculates term
double Mortgage::getTerm()
{
	return pow((1 + (rate / 12.)), (12 * years));
}

//sets loan value
void Mortgage::setLoan(double l)
{
	if (l < 0)
		cout << "Invalid input" << endl;
	else
		loan = l;
}

//sets the interest rate
void Mortgage::setRate(float r)
{
	rate = r;
}

//set duration
void Mortgage::setYears(int y)
{
	years = y;
}

//default constructor
Mortgage::Mortgage()
{
	loan = 0;
	years = 0;
	rate = 0;
}