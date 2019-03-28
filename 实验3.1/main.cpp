#include <iostream>

using namespace std;

class student{
private:
    string name;
public:
    string getname(){
        return name;
    }
    void setname(string n){
        name = n;
    }
};

int main()
{
    student stu[5];
    string name;
    for(int i = 0;i < 5;i++){
        cin>>name;
        stu[i].setname(name);
    }
    for(int i = 0;i < 5 ; i++){
        student *s = &stu[i];
        cout<<"name"<<i+1<<":"<<s->getname()<<endl;
    }
    return 0;
}
