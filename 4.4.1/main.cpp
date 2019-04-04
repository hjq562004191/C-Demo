#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main ()
{
  string str;
  cout<<"请输入数字运算："<<endl;
  getline(cin,str);
  int found1,found2,found3,found4,found5,f = 0;
    if(str.at(0) == '-'){
        f=1;
        str.replace(str.begin(),str.begin()+1,"0");
    }
    if(str.at(0)>='0' && str.at(0)<'9'){
        found1 = str.find('+');
        found2 = str.find('-');
        found3 = str.find('*');
        found4 = str.find('/');
        found5 = str.find('%');
    }else{
        cout<<"请输入正确算式"<<endl;
        return 0;
    }
    int n1,n2;

    if (found1!=-1){
        string s1 = str.substr(0,found1);
        string s2 = str.substr(found1+1);
        n1 = atoi(s1.c_str());
        n2 = atoi(s2.c_str());
        if(f == 1){
           n1 = n1*-1;
        }
        cout <<n1 + n2<< '\n';
    }
    else if (found2!=-1){
        string s1 = str.substr(0,found2);
        string s2 = str.substr(found2+1);
        n1 = atoi(s1.c_str());
        n2 = atoi(s2.c_str());
        if(f == 1){
           n1 = n1*-1;
        }
        cout <<n1 - n2<< '\n';
    }else if (found3!=-1){
        string s1 = str.substr(0,found3);
        string s2 = str.substr(found3+1);
        n1 = atoi(s1.c_str());
        n2 = atoi(s2.c_str());
        if(f == 1){
           n1 = n1*-1;
        }
        cout <<n1 * n2<< '\n';
    }else if (found4!=-1){
        string s1 = str.substr(0,found4);
        string s2 = str.substr(found4+1);
        n1 = atoi(s1.c_str());
        n2 = atoi(s2.c_str());
        if(f == 1){
           n1 = n1*-1;
        }
        cout <<n1 / n2<< '\n';
    }else if (found5!=-1){
        string s1 = str.substr(0,found5);
        string s2 = str.substr(found5+1);
        n1 = atoi(s1.c_str());
        n2 = atoi(s2.c_str());
        if(f == 1){
           n1 = n1*-1;
        }
        cout <<n1 % n2<< '\n';
    }else
    cout <<"ERROR"<< '\n';

  return 0;
}
