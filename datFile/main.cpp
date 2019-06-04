#include <iostream>
#include <fstream>
using namespace std;

class Student{
private:
    int number;
    char *name;
    float score;
public:
    Student(int number1 = 0,char *name1="noname",float score1=0);
    void modify(float score1){
        score = score1;
    }

    friend ostream &operator <<(ostream &output,Student &stu){
        output<<"number: "<<stu.number<<" name: "<<stu.name<<" score: "<<stu.score<<'\n';
        return output;
    }
};
Student::Student(int number1,char *name1,float score1){
    name = name1;
    number = number1;
    score = score1;
}
int main()
{
    Student stu1,stu2(001,"xiaoming",99);
    cout << stu1 <<stu2;

    ofstream fout("student.dat",ios::binary);
    fout.write((char*) &stu1, sizeof(stu1));
    fout.write((char*) &stu2, sizeof(stu2));
    fout.close();

    ifstream fin("student.dat",ios::binary);
    fin.read((char*) &stu1,sizeof(stu1));
    fin.read((char*) &stu2,sizeof(stu2));

    cout<<"stu1: "<<stu1<<"stu2: "<<stu2;
    fin.close();
    return 0;
}
