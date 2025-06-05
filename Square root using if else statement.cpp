#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double s,n;
	cout<<"enter a number for which u want to get square root=  ";
	cin>>n;
	if(n<0)
	{
		cout<<"number is a negative and negative number does not have square root";
	}
	else
	{
		cout<<"square root is equals to=  "<<sqrt (n);
		
	}
	return 0;
}
