#include <iostream>
#include <cstdlib>
using namespace std;
const int SIZE = 3;

class atype {
    int a[SIZE];
public:
   atype( ) {
       register int i;
       for(i=0; i<SIZE; i++) a[i] = i;
  }
  int &operator[](int i);
};
int& atype::operator[](int i){
    if(i>=3 || i<0){
        cout<<"Index value of 3 is out-of-bounds."<<endl;
        exit(0);
    }else{
        return a[i];
    }
}

int main( )
{
   atype ob;
   cin >> ob[1];
   ob[2] = ob[1];  // �±������[]�����ڸ�ֵ���������ߺ��ұ�
   cout << ob[2];
   ob[3] = 44; // ��������ʱ�����±�3����������߽�
   return 0;
}
