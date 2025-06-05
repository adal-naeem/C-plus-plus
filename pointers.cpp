#include<iostream>
using namespace std;
int main()
{
	int n=10;
	int *p;
	p=&n;
	
	
	cout<<"the value of variable "<<n<<endl;
	cout<<"the address of variable "<<&n<<endl;

    cout<<*p<<endl;
	cout<<p<<endl;

}
