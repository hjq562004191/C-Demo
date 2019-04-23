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
    cout <<"排序后:";
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int n;
    cout<<"请输入数组个数"<<endl;
    cin>>n;
    int a[n];
    for(int i = 0;i< n;i++)
        cin>>a[i];
    cout<<"排序前:";
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
    mysort(a,n);

    return 0;
}
