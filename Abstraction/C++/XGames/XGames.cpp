#include<iostream>
#include<vector>
using namespace std;

class XGames{ //Class to give structure to X-Games sub classes
private:
    string sport; //String variable to store the sports name
    vector<string> participants; //String vector to store the name of participants

public:
    XGames(){this->sport = " ";} //Default constructor
    XGames(string sport){this->sport = sport;} //Overloaded constructor
    virtual int TopScore(string participant) = 0; //Abstract method to calculate the participant's score
    void SetSport(string sport){this->sport = sport;} //sport setter
    string GetSPort(){return this->sport;} //sport getter
    void AddParticipant(string participant){participants.push_back(participant);}//Add participant's name to vector
    string GetParticipant(int position){return participants[position];} //Get participant's name
    int GetSize(){return participants.size();} //Get number of participant's names
    void RemoveParticipant(int position){participants.erase(participants.begin()+position);} //Remove participant's name
};