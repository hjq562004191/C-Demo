#include <iostream>
#include <map>
#include <string>

using namespace std;
typedef pair<string, string> PAIR;

ostream& operator<<(ostream& out, const PAIR& p) {
  return out << p.first << "\t" << p.second;
}

int main(){
	map<string,string> m;
	string name,num;
	cin>>name;
	while(name != "end"){
		cin>>num;
		m[name] = num;
		cin>>name;
	}
	cin>>name;
	while(name != "end"){
		cin>>num;
		m[name] = num;
		cin>>name;
	}
	map<string,string>::iterator p = m.begin();
	while(p != m.end()){
		cout<< *p <<" ";
		p++;
	}
	cout<<endl;
} 
