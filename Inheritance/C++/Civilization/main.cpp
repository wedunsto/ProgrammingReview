#include <iostream>
#include "Country.h"
#include "State.h"
using namespace std;

int main() {
    Country USA("United States","USD",4.6);
    State WA("United States","USD",4.6,"Washington","Coffee",1.6);

    cout<<"The country is: "<<USA.getCountryName()<<" the currency is: "<<USA.getCountryCurrency()<<" the population: "<<USA.getCountryPopulation()<<" million"<<endl;
    cout<<"In the country: "<<WA.getCountryName()<<", the state is"<<WA.getStateName()<<" the state is famous for: "<<WA.getStateFood()<<" the population is "
    <<WA.getStatePopulation()<<" million"<<endl;
    return 0;
}
