#include <iostream>
#include "Skateboarding.cpp"
using namespace std;
int main() {
    Skateboarding skateboarding; //Create an object of the Skateboarding class
    skateboarding.SetSponsor("GIRL");
    skateboarding.AddParticipant("Tony Hawk");
    skateboarding.AddParticipant("Rob Dyrdek");

    string firstParticipant = skateboarding.GetParticipant(0);
    int firstScore = skateboarding.TopScore(firstParticipant);
    string secondParticipant = skateboarding.GetParticipant(1);
    int secondScore = skateboarding.TopScore(secondParticipant);

    cout<<firstParticipant<<" has a score of: "<<firstScore<<endl;
    cout<<secondParticipant<<" has a score of: "<<secondScore<<endl;

    return 0;
}
