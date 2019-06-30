#include<iostream>
using namespace std;

template <typename T>
void Mysort(T *a,int m){
	int i;
	for(i = 0;i < m - 1;i++){
		for(int j = i+1; j < m;j++){
			if(a[i] > a[j]){
				T temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
} 

int main()
{
    int m,n,a[20],i,j;
    float b[20];
    cin>>m;         
    for(i=0;i<m;i++)
        cin>>a[i];
    cin>>n;
    for(j=0;j<n;j++)
        cin>>b[j];
    Mysort(a,m); 
    Mysort(b,n);
    for(i=0;i<m;i++)
        cout<<a[i]<<' ';
    cout<<endl;
    for(j=0;j<n;j++)
        cout<<b[j]<<' ';
    cout<<endl;   
    return 0;   
}
