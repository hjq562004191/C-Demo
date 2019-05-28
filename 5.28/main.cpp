#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch;
    fstream iofile;
	iofile.open("test1.txt");
	if(!iofile)
	{cout<<"no such file!"<<endl;
	return -1;}

	iofile<<"Learning C++ programming is fun!";
    iofile.close();


	iofile.open("test1.txt");
	if(!iofile)
	{cout<<"no such file!"<<endl;
	return -1;}

	while(!iofile.eof())
	{
	   iofile.get(ch);
	   cout.put(ch);
	}
	iofile.close();
	return 0;
}

