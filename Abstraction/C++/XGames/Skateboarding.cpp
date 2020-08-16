#include<iostream>
#include"XGames.cpp" //Import the file containing the "Abstract" class
using namespace std;

class Skateboarding:public XGames{
private:
    string sponsor; //String variable to keep track of skateboarding sponsor
public:
    Skateboarding():XGames(){this->sponsor = " ";}//Default constructor
    Skateboarding(string sponsor) : XGames("Skateboarding"){this->sponsor = sponsor;} //Overloaded constructor
    int TopScore(string participant)override{return 10 * participant.size();}; //Calculates the score of the participant
    void SetSponsor(string sponsor){this->sponsor = sponsor;} //sponsor setter
    string GetSponsor(){return this->sponsor;} //sponsor getter
};