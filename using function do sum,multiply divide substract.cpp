#include<iostream>
using namespace std;
void sum()
{
	int n1,n2;
	cout<<"enter 1st number\n";
	cin>>n1;
	cout<<"enter 2nd number\n";
	cin>>n2;
	cout<<n1+n2<<endl;
}
void substract()
{
	int n1,n2;
	cout<<"enter 1st number\n";
	cin>>n1;
	cout<<"enter 2nd number\n";
	cin>>n2;
	cout<<n1-n2<<endl;
}

void multiply()
{
	int n1,n2;
	cout<<"enter 1st number\n";
	cin>>n1;
	cout<<"enter 2nd number\n";
	cin>>n2;
	cout<<n1*n2<<endl;
}

void divide()
{
	int n1,n2;
	cout<<"enter 1st number\n";
	cin>>n1;
	cout<<"enter 2nd number\n";
	cin>>n2;
	cout<<n1/n2<<endl;
}


int main()
{
int n;
//menu
cout<<"press 1 to sum\n";
cout<<"press 2 to substract\n";
cout<<"press 3 to multiply\n";
cout<<"press 4 to divide\n";
cin>>n;
if(n==1)
{
	sum();
}
else if(n==2)
{
	substract();
}
else if(n==3)
{
	multiply();
}
else if(n==4)
{
	divide();
}
else 
{
	cout<<"invalid data";
}


















}
