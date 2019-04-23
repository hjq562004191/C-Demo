#include <iostream>

using namespace std;

const int SIZE = 90;
template <class T>
class Stack {
public :
    ~Stack(){
    delete stack;
    }
    void push(T n){
    if(tos == SIZE){
        cout<<"ջ��"<<endl;
    }else{
        stack[++tos] = n;
    }
    }
    T pop(){
     if(tos == -1){
        cout<<"ջ��"<<endl;
    }else{
        cout<<stack[tos--]<<endl;
    }
    }
 private:
    T stack[SIZE];
    int tos = -1;
 };


int main( ) {

    Stack<int> s;
    Stack<double> sd;
    Stack<char> sc;
    cout<<"����Ԫ�ظ���:"<<endl;
    int n ;
    cin>>n;
    for(int i = 0;i < n;i++){
        int temp;
        cin>>temp;
        s.push(temp);
    }
    cout<<"ȡջ��Ԫ��:";
    s.pop();

    cout<<"double��Ԫ�ظ���:"<<endl;
    cin>>n;
    for(int i = 0;i < n;i++){
        double temp;
        cin>>temp;
        sd.push(temp);
    }
    cout<<"ȡջ��Ԫ��:";
    sd.pop();

    cout<<"char��Ԫ�ظ���:"<<endl;
    cin>>n;
    for(int i = 0;i < n;i++){
        char temp;
        cin>>temp;
        sc.push(temp);
    }
    cout<<"ȡջ��Ԫ��:";
    sc.pop();

  return 0;
}
