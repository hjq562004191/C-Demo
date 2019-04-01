#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    while(cin>>s1>>s2){
            int i;
        for(i = 1;i<100;i++){
            string s3(s1,0,i);
            string s4(s2,0,i);
            if(s3 != s4){
        if(i == 1){
       cout<<"No common prefix"<<endl;
        }else{
            string s5(s3,0,i-1);
        cout<<"The common prefix is "<<s5<<endl;
        }
                break;
            }
        }

    }

    return 0;
}
