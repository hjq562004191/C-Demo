#include <iostream>
#include <cmath>
using namespace std;

class shape {// ������
public:
 virtual double getArea()=0;// �����
 virtual double getPerimeter()=0; // ���ܳ�
};

class RTriangle:public shape {
private:
    double a;
    double b;
public:
    RTriangle(double c,double d){
        a = c;
        b = d;
    }
    double getArea(){
        return a*b/2;
    }
    double getPerimeter(){
        return sqrt(a*a+b*b) + a +b;
    }
};

int main()
{
  double a,b;
  cin>>a>>b;
  RTriangle t(a,b);
  cout<<t.getArea()<<endl;
  cout<<t.getPerimeter()<<endl;
}
