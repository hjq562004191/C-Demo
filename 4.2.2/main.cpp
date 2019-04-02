#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int i = s.find_last_of("/\\");
    cout<<s.substr(0,i)<<endl;
    cout<<s.substr(i+1)<<endl;
    return 0;
}
