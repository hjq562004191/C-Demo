#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    char i = s.at(0);
    int k = s.size();
    int t = 1;
    for(int j = 0;j < k;j++){
        if(s.at(j)<'0' || s.at(j) > '9'){
            t = 0;
            break;
        }
    }
    if(i == '1' && k == 11 && t == 1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}
