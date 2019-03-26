#include <iostream>

using namespace std;

class Score{ //Score 类定义
 public:
     float computer;
     float english;
     float mathematics;

     Score(float x1, float y1, float z1);
     Score( );
     void print( );
     void modify(float x2, float y2, float z2);
 };

 Score::Score(float x1,float x2,float x3)
{
	computer=x1;
	english=x2;
	mathematics=x3;
 }


class Student{
    int number;
    char *name;
    Score s;
public:
    Student(int n,char *na,int y1,int y2,int y3):s(y1,y2,y3){
        number = n;
        name = na;
        s = Score(y1,y2,y3);
    }
    void print(){
        cout<<"序号:"<<number<<endl;
        cout<<"姓名:"<<name<<endl;
        cout<<"computer:"<<s.computer<<" ";
        cout<<"english:"<<s.english<<" ";
        cout<<"mathematics:"<<s.mathematics<<" ";
    }
};

int main(){
    int number;
    char name[20];
    float computer;
    float english;
    float mathematics;
    cout<<"序号:";
    cin>>number;
    cout<<"姓名:";
    cin>>name;
    cout<<"computer:";
    cin>>computer;
    cout<<"english:";
    cin>>english;
    cout<<"mathematics:";
    cin>>mathematics;
    Student stu1 = Student(number,name,computer,english,mathematics);
    stu1.print();
}
