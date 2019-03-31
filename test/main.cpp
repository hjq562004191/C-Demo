#include <iostream>

using namespace std;

int main()

{

    string s[100];
    string s1;
    string s2;
    int i;
    for(i = 0;i<100;i++){
        cin>>s[i];
        if(s[i] == "end"){
            break;
        }
    }
    cin>>s1>>s2;
    if(s[0] == s1){
        cout<<s2;
    }else{
        cout<<s[0];
    }
    for(int j = 1;j<i;j++){
        if(s[j] == s1){
            cout<<" "<<s2;
        }else{
            cout<<" "<<s[j];
        }
    }
    return 0;
}
