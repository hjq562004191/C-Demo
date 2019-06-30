#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string s1,s2,s3,s4;
	getline(cin,s1);
	while(1){
		getline(cin,s2);
		if(s2=="end"){
			break;
		}
		s1+='\n';
		s1+=s2;
	}
	
	cin>>s3>>s4;
	
	int found = s1.find(s3);
	while(found != -1){
		s1.replace(found,s3.size(),s4);
		found = s1.find(s3,found+1);
	}
	cout<<s1;
}
