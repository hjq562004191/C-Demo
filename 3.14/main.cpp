#include <iostream>
using namespace std;

class Stock{
public:
    char symbol[10];
    char name[20];
    double previousClosingPrice;
    double currentPrice;
public:
    void set(char s1[],char n1[]){
        for(int i= 0;i<10;i++)
            symbol[i]=s1[i];
        for(int i= 0;i<20;i++)
            name[i]=n1[i];
    }
    double changePercent(){
        return (currentPrice - previousClosingPrice) / previousClosingPrice;
    }
};

int main( ) {
    char s1[10],n1[20];
    cin>>s1>>n1;
    Stock stock;
    stock.set(s1, n1);
    // ����ǰһ�����̼�
    cin>>stock.previousClosingPrice;

    // ���뵱ǰ�ɽ���
    cin>>stock.currentPrice;

    // ��ʾ��Ʊ��Ϣ
    cout<<stock.name<<" price changed: " <<(stock.changePercent() * 100)<<"%";
    return 0;
  }
