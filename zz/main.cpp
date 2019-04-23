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
        cout<<"栈满"<<endl;
    }else{
        stack[++tos] = n;
    }
    }
    T pop(){
     if(tos == -1){
        cout<<"栈空"<<endl;
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
    cout<<"整形元素个数:"<<endl;
    int n ;
    cin>>n;
    for(int i = 0;i < n;i++){
        int temp;
        cin>>temp;
        s.push(temp);
    }
    cout<<"取栈顶元素:";
    s.pop();

    cout<<"double型元素个数:"<<endl;
    cin>>n;
    for(int i = 0;i < n;i++){
        double temp;
        cin>>temp;
        sd.push(temp);
    }
    cout<<"取栈顶元素:";
    sd.pop();

    cout<<"char形元素个数:"<<endl;
    cin>>n;
    for(int i = 0;i < n;i++){
        char temp;
        cin>>temp;
        sc.push(temp);
    }
    cout<<"取栈顶元素:";
    sc.pop();

  return 0;
}
