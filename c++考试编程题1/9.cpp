#include <iostream>

using namespace std;

//double myMax(int a,int b);
//double myMax(int a,int b,int c);
//double myMax(double a,double b);

double myMax(int a,int b){
    if( a > b)
    return a;
    else
    return b;
}
 double myMax(int a,int b,int c){
     int max;
    if( a > b)
    max = a;
    else
    max = b;
    if(max > c)
        return max;
    else
        return c;
}
double myMax(double a,double b){
    if( a > b)
    return a;
    else
    return b;
}


int main(){
	cout<<myMax(3,4)<<endl;
	cout<<myMax(3,4,5)<<endl;
	cout<<myMax(4.3,3.4)<<endl;
}

