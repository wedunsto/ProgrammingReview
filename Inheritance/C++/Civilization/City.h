#ifndef CIVILIZATION_CITY_H
#define CIVILIZATION_CITY_H
#include<iostream>
#include<vector>
#include "State.h"
using namespace std;
/*
 * Objectives:
 *  Create derived class from 'State'
 *  Detail a city's name, zip code range, and citizens
 */
class City:public State{
private:
  string cityName;//Contains the city's name
  int ZIPCODE_SIZE = 3;
  int zipCodes[3];//Contains the city's range of zip codes
  vector<string> citizens;//Contains the names of the people living in the city
public:
  City():State(){//Default constructor
      cityName="";
  }
  City(string countryName,string countryCurrency, double countryPopulation,
          string stateName,string stateFood,double statePopulation,
          string cityName):State(countryName,countryCurrency,countryPopulation,stateName,stateFood,statePopulation){//Overloaded constructor
      this->cityName=cityName;
  }

  //Proper getters and setters
  void setCityName(string cityName){
      this->cityName=cityName;
  }

  string getCityName(){
      return this->cityName;
  }

  void setZipCode(int index, int zipCode){
      this->zipCodes[index] = zipCode;
  }

  int getZipCode(int index){
      return this->zipCodes[index];
  }

  int getZipCodeSize(){
      return this->ZIPCODE_SIZE;
  }

  void addCitizen(string citizen){
      this->citizens.push_back(citizen);
  }

  string getCitizen(int index){
      return this->citizens.at(index);
  }

  string removeCitizen(int index){
      string removedCitizen=this->citizens.at(index);
      citizens.erase(citizens.begin()+index);
      return removedCitizen;
  }

  int getCitizensSize(){
      return citizens.size();
  }
};
#endif //CIVILIZATION_CITY_H
