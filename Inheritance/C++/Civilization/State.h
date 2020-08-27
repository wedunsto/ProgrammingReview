#ifndef CIVILIZATION_STATE_H
#define CIVILIZATION_STATE_H
#include<iostream>
#include "Country.h"
using namespace std;
/*
 * Objectives:
 *  Create derived class from 'Country'
 *  Use 'State' class to act as super class for 'City' class
 */
class State:public Country{
private:
    string stateName; //Variable containing the state's name
    string stateFood; //Variable containing the state's famous food
    double statePopulation; //Variable containing the stat's population
public:
    State():Country(){ //Default constructor calls super class default constructor
      this->stateName="";
      this->stateFood="";
      this->statePopulation=0.00;
    }

    State(string countryName, string countryCurrency, double countryPopulation, string stateName, string stateFood, double statePopulation):
    Country(countryName,countryCurrency,countryPopulation){ //Overloaded constructor calls super class overloaded constructor
      this->stateName=stateName;
      this->stateFood=stateFood;
      this->statePopulation=statePopulation;
    }

    //Getters and setters
    void setStateName(string stateName){
      this->stateName=stateName;
    }

    void setStateFood(string stateFood){
      this->stateFood=stateFood;
    }

    void setStatePopulation(double){
      this->statePopulation=statePopulation;
    }

    string getStateName(){
      return this->stateName;
    }

    string getStateFood(){
      return this->stateFood;
    }

    double getStatePopulation(){
      return this->statePopulation;
    }
};
#endif //CIVILIZATION_STATE_H
