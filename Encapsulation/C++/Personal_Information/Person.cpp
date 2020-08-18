#include<iostream>
#include "Personal_Information.cpp"
using namespace std;

//Objective create a sub class from Personal_Information to show access modifiers
class Person : public Personal_Information{
private:
    string name; //Variable used to keep track of the name

public:
    Person():Personal_Information(){ //Default constructor
        name = "";
    }
    //Overloaded constructor
    Person(string social_security, string address, string name):Personal_Information(social_security, address){
        this->name = name;
    }
    void SetName(string name){this->name = name;} //Name setter
    string GetName(){return this->name;} //Name getter
};