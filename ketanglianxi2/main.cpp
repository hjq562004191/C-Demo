#include <iostream>
#include <math.h>
using namespace std;

double s(double a);
int main(){
    double a,b,c;
    cin >>a>>b>>c;
    if((a+b)>c && (a+c)>b && (b+c)>a)
	cout<<s(a,b,c)<<endl;
	else
        cout<<"No"<<endl;
}
double s(double a){
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
