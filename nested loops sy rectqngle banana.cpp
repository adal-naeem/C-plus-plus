#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<5;i++)
	{
	for(int j=0;j<5;j++)
	{
		cout<<"*";
	}
		cout<<endl;
	}
	
	for(int i=0;i<5;i++)
	{
	for(int j=0;j<5;j++)
	{
		cout<<j+1;
	}
		cout<<endl;
	}
	for(int i=0;i<5;i++)
	{
	for(int j=5;j>0;j--)
	{
		cout<<j;
	}
		cout<<endl;
	}
	for(int i=0;i<5;i++)
	{
	for(int j=0;j<=i;j++)
	{
		cout<<"*";
	}
		cout<<endl;
	}
	
	
}
