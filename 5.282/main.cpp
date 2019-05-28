#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Student
{
public:
    int id;
    string name;
	int age;
    double ave;
};
int main()
{
	int i;
	int math,english,chinese;
	Student sts[5];
    for( i=0;i<5; i++)
	{
		cout<<"输入学号 姓名 年龄 数学 英语 语文"<<endl;
        cin>>sts[i].id>>sts[i].name>>sts[i].age>>math>>english>>chinese;
		sts[i].ave = (math + english + chinese)/3.0;
	}

	ofstream  fout("stud.dat",ios::binary|ios::trunc);

	fout.write((char *)sts,sizeof(Student)*5);
	fout.close();

	ifstream fin("stud.dat",ios::binary);
	fin.read((char *)sts,sizeof(Student)*5);

	for(i = 0;i<5;i++)
	{
		cout<<"id:  "<<sts[i].id<<"   name : "<<sts[i].name<<"   ave ："<<sts[i].ave<<endl;
	}
	fin.close();
	return 0;
}
