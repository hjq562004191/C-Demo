#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
	set<string> s;
	string s1;
	for(int i = 0; i < 5; i++){
		cin>>s1;
		s.insert(s1);
	}
	set<string>::iterator p = s.begin();
	while(p != s.end()){
		cout<< *p++ <<" ";
	}
	cout<<endl;
} 
