#include <iostream>

using namespace std;

template <class T>
T mysort(T a[],int n){
    int i , j;
    for(i = 0;i < n;i++){
        for(j = i;j<n;j++){
            if(a[i]>a[j]){
                T temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout <<"�����:";
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int n;
    cout<<"�������������"<<endl;
    cin>>n;
    int a[n];
    for(int i = 0;i< n;i++)
        cin>>a[i];
    cout<<"����ǰ:";
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
    mysort(a,n);

    return 0;
}
