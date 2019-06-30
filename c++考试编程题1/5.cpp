#include<iostream>
#include<string.h>
using namespace std;

class Student{
public:
	void print();
Student(int number1, char * name1, float score1){
	number = number1;
	name = name1;
	score = score1;
	count++;
	sum += score1;
}	

static int count;
static int sum;

static void average(){
	cout<<sum/count;
}


private:
	int number;
	char * name;
	int score;
	
};

int Student::count=0;
int Student::sum = 0;

void Student::print()
{
  cout<<"number: "<<number<<" name: "<<name
  <<" score: "<<score<<" count: "<<count<<'\n';
}
int main( )
{ 
//	Student::init( );
	Student stu1(1,"Bill",87); 
	stu1.print( );

	Student stu2(2,"Adam",91);
	stu2.print( );

	Student stu3(3,"David",96);
	stu3.print( );

	Student::average( ); //静态成员函数的调用	
	
	return 0;
}
