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
    Cat cat("Persian"); //�������������
    cat.print_name();	//���������ʹ�ñ����Ա����
    cat.speak();	//���������ʹ�û����Ա����
    return 0;
}

