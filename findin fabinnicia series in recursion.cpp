#include<iostream>
using namespace std;
int fabonaci(int n)
{
	if (n==0||n==1)
	{
		return n;
	}
	else
	{
		return (fabonaci(n-1)+fabonaci(n-2));
	}
}
int main()
{

	int x;
	cout<<"enter number of terms in  ";
	cin>>x;
	cout<<"\n fabonaci series =";
	int i=0;
	while(i<x)
	{
	cout<<" "<<fabonaci(i);
    i++;
	}
}
