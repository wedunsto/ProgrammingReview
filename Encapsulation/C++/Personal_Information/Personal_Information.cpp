#include<iostream>
using namespace std;

//Objective: Explore the power of encapsulation with varying access variables
class Personal_Information{
private:
    string social_security; //Write only variable to store social security number
    string address; //Read and write variable to store address
    double income; //Read only variable to store income
    string favorite_color; //inaccessible variable to store the favorite color

public:
    Personal_Information(){ //Default constructor
        social_security = "";
        address = "";
        income = 350.00;
        favorite_color = "Gray";
    }
    Personal_Information(string social_security, string address){ //Overloaded constructor
        this->social_security = social_security;
        this->address = address;
        income = 350.00;
        favorite_color = "Gray";
    }
    void SetSocialSecurity(string social_security){this->social_security = social_security;} //Setter for social security
    void SetAddress(string address){this->address = address;} //Setter for address
    string GetAddress(){return this->address;} //Getter for address
    double GetIncome(){return this->income;} //Getter for income
};