#include<iostream>
using namespace std;

/*
Objectives:
    Create super class 'Country'
    Detail a country's: name, currency, and population
 */

class Country{
private:
    string countryName; // Contain the country's name
    string countryCurrency; //Contain the country's currency
    double countryPopulation; //Contain the country's population
public:
    Country(){ //Default constructor
        this->countryName = "";
        this->countryCurrency = "";
        this->countryPopulation = 0.00;
    }
    Country(string countryName, string countryCurrency, double countryPopulation){
        this->countryName = countryName;
        this->countryCurrency = countryCurrency;
        this->countryPopulation = countryPopulation;
    }
    //Getters and setters
    void setCountryName(string countryName){
        this->countryName = countryName;
    }
    void setCountryCurrency(string countryCurrency){
        this->countryCurrency = countryCurrency;
    }
    void setCountryPopulation(double countryPopulation){
        this->countryPopulation = countryPopulation;
    }
    string getCountryName(){
        return this->countryName;
    }
    string getCountryCurrency(){
        return this->countryCurrency;
    }
    double getCountryPopulation(){
        return this->countryPopulation;
    }
};