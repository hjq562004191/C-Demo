#include <iostream>
using namespace std;

class Car{
private:
    int m_nWheels;
public:
    void disp_welcomemsg(){
    cout<<"Welcome to the car world!"<<endl;
    }
    int get_wheels(){
    return m_nWheels;
    }
    void set_wheels(int a){
    m_nWheels = a;
    }
};

int main()
{
    int n;
    cin >> n;
    Car myfstcar, myseccar;
    myfstcar.disp_welcomemsg();
    myfstcar.set_wheels(n);
    myseccar.set_wheels(n+4);

    cout << "my first car wheels num = " << myfstcar.get_wheels() << endl;
    cout << "my second car wheels num = " << myseccar.get_wheels() << endl;

    return 0;
}
