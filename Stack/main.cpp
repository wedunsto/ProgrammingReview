#include<iostream>
#include "StackClass.h"
using namespace std;

int main(){
	char verifySymetryOld[]="[{()}]";//Create input string to verify
	char verifySymetryNew[]="[{()}]]";//Create input string to verify
	stack s;//Create stack object
	int symetryResult;
	symetryResult=s.verifySymetry(verifySymetryOld,6);
	if(symetryResult>0){
		cout<<"Symertical"<<endl;
	}
	else{
		cout<<"Non-Symertical"<<endl;
	}
	symetryResult=s.verifySymetry(verifySymetryNew,7);
	if(symetryResult>0){
		cout<<"Symertical"<<endl;
	}
	else{
		cout<<"Non-Symertical"<<endl;
	return 0;
	}
}