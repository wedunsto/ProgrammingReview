#ifndef WORKFORCE_WAITER_H
#define WORKFORCE_WAITER_H
#include<iostream>
using namespace std;
/*
 * Objective:
 * 	Create a base class 'Waiter'
 * 	Overload the Salary() method
 */
class Waiter{
private:
	string country;//Contains the country name
public:
	Waiter(){//Default constructor
		this->country="";
	}

	double Salary(int wage){
		return wage*40;
	}

	double Salary(int wage, int tip){//Overload the Salary() method
		int temp = wage*40;
		return temp+tip;
	}

	void setCountry(string country){//Setter for country
		this->country=country;
	}
};
#endif //WORKFORCE_WAITER_H
