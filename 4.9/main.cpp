#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

class Person {
protected:
     string name;
     int age;
public:
     Person();
     Person (string p_name, int p_age)
     {
         name=p_name; age=p_age;
     }
     void display() {cout<<name<<":"<<age<<endl;}
};
class student:public Person{
private:
int ID;//ѧ��
float cpp_score;//cpp�ϻ��ɼ�
float cpp_count;//cpp�ϻ�����
float cpp_grade;//cpp�����ɼ�
     //�����ɼ��������cpp_grade = cpp_score * 0.9 + cpp_count * 2;
public:
    student(){}
    student(string n,int id,int a,float s,float c):Person(n,a){
        name = n;
        ID = id;
        cpp_score = s;
        cpp_count = c;
        age = a;
        cpp_grade = cpp_score * 0.9 + cpp_count * 2;
    }
    void print(){

        cout<<ID<<" "<<name<<" "<<setiosflags(ios::fixed)<<setprecision(1)<<cpp_grade<<endl;

    }
};
int main()
{  int a,i;string n;float p,q;
while(1)
{   cin>>n;
    if(n=="0") return 0;
    else{
    cin>>i;
    cin>>a;
    cin>>p;
    cin>>q;
   student s(n,i,a,p,q);
   s.print();
    }
}
}
