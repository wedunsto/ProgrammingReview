#include <iostream>
#include "Country.h"
#include "State.h"
#include "City.h"
using namespace std;

int main() {
    Country USA("United States","USD",4.6);
    State WA("United States","USD",4.6,"Washington","Coffee",1.6);
    City SJ("United States","USD",4.6,"California","Avocado Toast",7.8,"San Jose");

    SJ.setZipCode(0,11111);
    SJ.setZipCode(1,11211);
    SJ.setZipCode(2,22322);
    SJ.addCitizen("William Dunston");
    SJ.addCitizen("Shiroe Kagi");

    cout<<"The country is: "<<USA.getCountryName()<<" the currency is: "<<USA.getCountryCurrency()<<" the population: "<<USA.getCountryPopulation()<<" million"<<endl;
    cout<<"In the country: "<<WA.getCountryName()<<", the state is"<<WA.getStateName()<<" the state is famous for: "<<WA.getStateFood()<<" the population is "
    <<WA.getStatePopulation()<<" million"<<endl;
    cout<<"In the state is: "<<SJ.getStateName()<<", the city is: "<<SJ.getCityName()<<endl;
    for(int i=0;i<SJ.getZipCodeSize();i++){
        cout<<"The zip code is: "<<SJ.getZipCode(i)<<endl;
    }
    for(int j=0;j<SJ.getCitizensSize();j++){
        cout<<"The citizens include: "<<SJ.getCitizen(j)<<endl;
    }
    return 0;
}
