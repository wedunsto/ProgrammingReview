#ifndef CIVILIZATION_AUTONOMOUSZONE_H
#define CIVILIZATION_AUTONOMOUSZONE_H
#include<iostream>
#include<vector>
#include "State.h"
#include "Inhabitable.h"
/*
 *Objectives:
 *	Create derived class from 'State'
 *  Contain AZ details
 */
class AutonomousZone:public State, public Inhabitable{
private:
	string azName;
	int azSize;
	vector<string> azCriminals;
public:
	AutonomousZone():State(){
		this->azName="";
		this->azSize=0;
	}

	AutonomousZone(string azName, int azSize):State("N/A","N/A",0.0,"N/A","N/A",0.0){
		this->azName=azName;
		this->azSize=azSize;
	}

	void addAZCriminal(string criminal){
		this->azCriminals.push_back(criminal);
	}

	string removeAZCriminal(int index){
		string removedCriminal=this->azCriminals.at(index);
		this->azCriminals.erase(this->azCriminals.begin()+index);
		return removedCriminal;
	}

	string getAZCriminal(int index){
		return this->azCriminals.at(index);
	}

	int getAZCriminalSize(){
		return this->azCriminals.size();
	}

	void setAZName(string azName){
		this->azName = azName;
	}

	string getAZName(){
		return this->azName;
	}

	int crimeCount(int inhabitant) override {
		return this->getAZCriminalSize()*100;
	}
};
#endif //CIVILIZATION_AUTONOMOUSZONE_H
