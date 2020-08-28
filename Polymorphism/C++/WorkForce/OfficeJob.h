#ifndef WORKFORCE_OFFICEJOB_H
#define WORKFORCE_OFFICEJOB_H
#include<iostream>
#include "Waiter.h"
using namespace std;
/*
 *Objective:
 *	Create derived class of the Waiter class
 *	Override the Salary() method
 */
class OfficeJob:public Waiter{
private:
	string companyName;//Contains the name of the company
public:
	OfficeJob(){
		this->companyName="";
	}

	double Salary(int wage){//Override the Salary() function
		int vacation=wage/2;
		int wages=wage*40;
		return wages+vacation;
	}

	void setCompanyName(string companyName){//Setter for comapany name
		this->companyName=companyName;
	}
};
#endif //WORKFORCE_OFFICEJOB_H
