#include <iostream>
#include <string>
using namespace std;

const int SIZE=100;

template <typename T>
class Queue {    
  T q[SIZE];
  int front;  //队列头
  int rear;   //队列尾
public:
  Queue() 
  { front = rear = 0; }
  void put(T i); // 在队尾放置一个数据
  T get( );  // 从队列头部取一个数据
};
template <typename T>
void Queue<T>::put(T m){
	if(front == SIZE){
		cout<<"队列已满"<<endl;
		exit(1);
	}
	front++;
	q[front] = m;
}
template <typename T>
T Queue<T>::get(){
	if(front == 0){
		cout<<"队列为空"<<endl;
		exit(1);
	}
	
	return q[front--];
}

int main()
{
  Queue<int> a; // 创建一个整数队列
  int m,n;
  cin>>m>>n; 
  a.put(m);
  a.put(n);
  cout << a.get() << " ";
  cout << a.get() << endl;

  Queue<double> d; // 创建一个双精度浮点数队列
  double x,y;
  cin>>x>>y;
  d.put(x);
  d.put(y);
  cout << d.get() << " ";
  cout << d.get() << endl;

  Queue<string> qs;// 创建一个字符串队列
  string s1,s2,s3;
  cin>>s1>>s2>>s3;
  qs.put(s1);
  qs.put(s2);
  qs.put(s3);
  cout <<	qs.get() << " ";
  cout <<	qs.get() << " ";
  cout << qs.get() << endl;

  return 0;
}
