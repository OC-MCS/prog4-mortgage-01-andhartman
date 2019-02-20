#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Mortgage {
private:
	double loan;
	float rate;
	int years;
	double term;
	
	double getTerm();
public:
	Mortgage();
	void setLoan(double);
	void setRate(float);
	void setYears(int);
	double getTotal();
	double getPayment();
};