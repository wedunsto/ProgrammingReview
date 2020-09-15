#include<iostream>
#include<set>
#include<map>
using namespace std;

int main(){
		//creates the set
	set<int> S;
	//populate set
	for(int i=0;i<5;i++)S.insert(i);
	//create iterator
	set<int>::iterator it;
	//get value at each set index
	for(it=S.begin();it!=S.end();it++)cout<<*it<<" ";
	S.erase(0);
	cout<<endl;
	for(it=S.begin();it!=S.end();it++)cout<<*it<<" ";
	cout<<endl;
	
	//create the map
	map<string,int>M;
	//populate map
	M.insert(pair<string,int>("Black",0));
	M.insert(pair<string,int>("Red",1));
	M.insert(pair<string,int>("Blue",2));
	M.insert(pair<string,int>("Green",3));
	M.insert(pair<string,int>("Yellow",4));
	M.insert(pair<string,int>("Orange",4));
	//create iterator
	map<string,int>::iterator it0;
	for(it0 = M.begin();it0!=M.end();it0++)cout<<it0->first<<" "<<it0->second<<endl;

	return 0;
}