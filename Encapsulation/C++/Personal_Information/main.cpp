#include<iostream>
#include "Person.cpp"
using namespace std;

int main(){
    Person William_Dunston; //Create an object of the person class
    William_Dunston.SetName("William Dunston");
    William_Dunston.SetSocialSecurity("000-00-0000");
    William_Dunston.SetAddress("123 West Ave.");

    cout<<"My name is: "<<William_Dunston.GetName()<<endl;
    cout<<"My address is: "<<William_Dunston.GetAddress()<<endl;
    cout<<"My income is: $"<<William_Dunston.GetIncome()<<endl;
    return 0;
}