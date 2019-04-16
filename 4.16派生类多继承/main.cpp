#include <iostream>
#include <string.h>
using namespace std;
class employee {
protected:
    string name;
    int individualEmpNo;
    int grade;
    float accumPay;
    int employeeNo;
public:
    employee(string s,int i,int g,float a , int e){
        name = s;
        individualEmpNo = i;
        grade = g;
        accumPay = a;
        employeeNo = e;
    }
   employee(){}
   void show(){
   cout<<"name:"<<name<<"\nindividualEmpNo:"<<individualEmpNo<<endl;
   cout<<"grade:"<<grade<<"\naccumPay:"<<accumPay<<"\nemployeeNo:"<<employeeNo<<endl;
   }

};

class technician:public employee{
protected:
    float hourlyRate;
    int workHours;
public:
    technician(string s,int i,int g,float a , int e,float h,int w):employee(s,i,g,a,e){
        name = s;
        individualEmpNo = i;
        accumPay = a + w*h;
        employeeNo = e;
        hourlyRate = h;
        workHours = w;
        grade = g;
    }
    void pay(){
    cout<<"technician����:"<<workHours*hourlyRate<<endl;
    }
    void displayStatus(){
    cout<<"technician״̬:\n";
    show();

    }
};
class manager:public employee{
protected:
    float monthlyPay;
public:
    manager( string s,int i,int g,float a , int e,float m):employee(s,i,g,a,e){
        monthlyPay = m;
    }
    manager(float m){
        monthlyPay = m;
    }
    void pay(){
    cout<<"manager����:"<<monthlyPay  <<endl;
    }
    void displayStatus(){
    cout<<"manager״̬:\n";
    show();
    }
};
class salesman:public employee{
protected:
    float CommRate;
    float sales;
public:
    salesman(string s,int i,int g,float a , int e,float comm,float sale):employee(s,i,g,a,e){
        CommRate = comm;
        sales = sale;
    }
    salesman(float comm,float sale){
        CommRate = comm;
        sales = sale;
    }
    void pay(){
    cout<<"salesman����:"<<CommRate * sales<<endl;
    }
    void displayStatus(){
    cout<<"salesman״̬:\n";
    show();
    }
};
class salesmanager:public manager,salesman,employee{

public:
    salesmanager(string s,int i,int g,float a , int e,float comm,float sale,float m):manager(m),salesman(comm,sale),employee(s,i,g,a,e){
    }
    void pay(){
    cout<<"salesmanager����:"<<manager::monthlyPay + salesman::sales * salesman::CommRate<<endl;
    }
    void displayStatus(){
    cout<<"salesmanager״̬:\n";
    manager::show();
    }
};
int main(){
    technician t("����Ա",1001,10,2000,1,10,5);
    t.pay();
    t.displayStatus();
    cout<<endl;
    manager m("����",1002,5,5000,2,10000);
    m.pay();
    m.displayStatus();
    cout<<endl;
    salesman s("����Ա",1003,20,3000,3,20,16);
    s.pay();
    s.displayStatus();
    cout<<endl;
    salesmanager sm("���۾���",1004,30,6000,4,30,20,10000);
    sm.pay();
    sm.displayStatus();
    return 0;
}


