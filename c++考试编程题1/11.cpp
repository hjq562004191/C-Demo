#include <iostream>
#include <string>
using namespace std;

class Animal{
	public:
		void speak(){
			cout<<"animal language!";
		}
};
class Cat:public Animal{
	public:
		Cat(string name):name(name){
		}
		void print_name(){
			cout<<"cat name:"<<name<<endl;
		}
		private:
			string name;
};

int main()
{
    Cat cat("Persian"); //定义派生类对象
    cat.print_name();	//派生类对象使用本类成员函数
    cat.speak();	//派生类对象使用基类成员函数
    return 0;
}

