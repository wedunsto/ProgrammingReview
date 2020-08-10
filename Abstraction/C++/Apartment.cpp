#include<iostream>
#include "Home.cpp"
using namespace std;

class Apartment : public Home{//Apartment is-a home
	private: //Apartment class fields
		bool patio; //initializes patio to false
	public: //Apartment class methods
		Apartment(){ //Apartment class default constructor
			Home(); //Call the default constructor of the super class
			patio = false; //initialize patio as falsed
		}
		Apartment(int bedrooms, int bathrooms, bool patio) : Home(bedrooms,bathrooms){ //Apartment overloaded constructor
			//Call the overloaded constructor of the super class
			this -> patio = patio;
		}
		int Cost(){ //Overrides the Cost() method from the super class
			int rent = getBedrooms() * getBathrooms(); //Calculate the cost of living
			return rent;
		}
};

//C++ multiple inheritance: class sub : public sup1, sup2,... calls the constructors in order

int main(){
	Apartment apartment(3,2,true);
	apartment.Welcome();
	return 0;
}
