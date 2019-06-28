#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1[100],name;
    int num1[100];
    int i;
    for(i = 0;i<100;i++){
        cin>>name;
        if(name == "end"){
            break;
        }
        name1[i] = name;
        cin>>num1[i];
    }

    for(i;i<100;i++){
        cin>>name;
        if(name == "end"){
            break;
        }
        name1[i] = name;
        cin>>num1[i];
    }

    for(int j = 0;j<i-1;j++){
        for(int k = j+1;k<i;k++){
            if(name1[j] > name1[k]){
                string t = name1[j];
                name1[j] = name1[k];
                name1[k] = t;
                int t1 = num1[j];
                num1[j] = num1[k];
                num1[k] = t1;
            }
        }
    }
    for(int j = 0;j<i;j++){
        if(name1[j] == name1[j+1]){
            continue;
        }else{
            cout <<name1[j] <<" "<<num1[j]<< endl;
        }
    }

    return 0;
}
