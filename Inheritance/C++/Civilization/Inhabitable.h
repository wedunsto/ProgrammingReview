#ifndef CIVILIZATION_INHABITABLE_H
#define CIVILIZATION_INHABITABLE_H
#include<iostream>
using namespace std;
/*
 *Objectives:
 *	Create interface for 'City' and 'Autonomous zone'
 * 	Create abstract method 'crimeCount()'
 */
class Inhabitable{
	bool safe=true;
	bool warm=true;
	bool food=true;

public:
	virtual int crimeCount(int inhabitant);
};
#endif //CIVILIZATION_INHABITABLE_H
