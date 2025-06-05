#include<iostream>
using namespace std;
int one()
{
	return 1111;
}
char aaa()
{
	return 'a';
}
string displaydata()
{
	string s;
	cout<<"enter data=";
	getline(cin,s);
	return s;
}
int main()
{
int n;
char m;
string a;
n=one();
cout<<n<<endl;
m=aaa();
cout<<m<<endl;
a=displaydata();
cout<<a<<endl;
}
