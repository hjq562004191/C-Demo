#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ofstream fout("test.txt");

    if(!fout){
        cout<<"Can't open file test.txt\n";
        return 1;
    }
    fout<<"Learning C++ programming is fun!\n";
    fout.close();

    char s[100];
    ifstream in("test.txt");

    if(!in.is_open()){
        cout<<"Cannot open file.\n";
        return 1;
    }
    in.getline(s,100);
    cout<<s<<endl;

    in.close();
    return 0;
}
