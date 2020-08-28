#include <iostream>
#include "OfficeJob.h"
using namespace std;

int main() {
	Waiter oliveGarden;
	Waiter redLobster;
	OfficeJob lenovo;

	oliveGarden.setCountry("America");
	double usWages=oliveGarden.Salary(2,1);
	redLobster.setCountry("France");
	double euWages=redLobster.Salary(5);
	cout<<"Living in: America, you can make "<<usWages<<". Whereas living in: France, you can make "<<euWages<<endl;
	lenovo.setCompanyName("Lenovo");
	double offWages=lenovo.Salary(30);
	cout<<"Working an office job can make you: "<<offWages;
	return 0;
}
