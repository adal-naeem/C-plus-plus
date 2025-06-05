#include<iostream>
using namespace std;
int calculate(int base,int power)
{
	if (power!=0)
	{
		return (base*calculate(base,power-1));
	}
	else
	{
		return 1;
	}
}
int main()
{

	int base,power,result;
	cout<<"enter base = ";
	cin>>base;
	cout<<"enter power = ";
	cin>>power;
	result=calculate(base,power);
	cout<<"result of "<<base<<"^"<<power<<" = "<<result<<endl;
	
	
}
