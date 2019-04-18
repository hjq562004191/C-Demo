#include <iostream>

using namespace std;

template <typename s> void mysort(s *a,int n){
        for(int i = 0;i < n;i++){
            for(int j = i+1;j<n;j++){
                if(a[i]>a[j]){
                    s t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
        for(int i = 0;i<5;i++)
                cout << a[i]<< " ";

    }


int main()
{
    int a[5];
    for(int i = 0;i<5;i++)
        cin>>a[i];
    mysort(a,5);
    return 0;
}
