#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(){
	list<string> l;
	for(int i = 0;i < 10;i++){
		l.push_back("a");
	}
	list<string>::iterator p = l.begin();

	while(p!=l.end()){
		cout<< *p++ <<" ";
	}
} 
