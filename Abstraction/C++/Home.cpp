#include<iostream>
using namespace std;

class Home{ //Class used to provide framework for sub classes
	private: //Class fields in subclasses
		int bedrooms; //Declare variable to keep count of bedrooms
		int bathrooms; //Declare variable to keep count of bathrooms

	public: //Class methods in subclasses
		Home(){ // Default constructor
			bedrooms = 0;//Initialize bedrooms to 0
			bathrooms = 0;//Initialize bathrooms to 0
		}
		Home(int bedrooms, int bathrooms){ //Overloaded constructor
			this -> bedrooms = bedrooms;
			this -> bathrooms = bathrooms;
		}
		int Cost(){ //Method to be overridden by sub classes
			return 0;
		}
		void Welcome(){ //Method to print a statement
			cout<<"Welcome to your "<<getBedrooms()<<" bedroom "<<getBathrooms()<<" bathroom home!"<<endl;
		}
		int getBedrooms(){ //Getter for bedroom count
			return this->bedrooms; //Points to class field bedrooms
		}
		int getBathrooms(){ //Getter for bathroom count
			return this->bathrooms; //Points to class field bathrooms
		}
};

