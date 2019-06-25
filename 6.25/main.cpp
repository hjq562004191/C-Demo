#include<iostream>
using namespace std;

class Student{
private :
    int number;
    int socre;
public:
    static int count;
    Student(int n,int s){
        number = n;
        socre = s;
        count++;
    }
    Student(Student &s){
        number = s.number + 1;
        socre = s.socre;
        count++;
    }
    void display(){
        cout<<number<<" ";
    if(socre == 1){
        cout<<"Pass"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    }
};
int Student::count=0;
int main(){
    const int size=100;
    int i, N, no, score;
    Student *st[size];
    cin>>N;
    for(i=0; i<N; i++){
        cin>>no;
        if(no>0){
            cin>>score;
            st[i]=new Student(no, score);
        }
        else
            st[i]=new Student(*st[i-1]);
    }
    cout<<Student::count<<" Students"<<endl;
    for(i=0;i<N;i++) st[i]->display();
    for(i=0;i<N;i++) delete st[i];
    return 0;
}
