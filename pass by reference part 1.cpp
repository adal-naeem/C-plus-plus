#include<iostream>
using namespace std;
//by reference
int change(int &n)
{
	n=n+10;
	cout<<"the value of n by change method is = "<<n<<endl;
	//n=20
}
int main()
{
	int n=10;
	change(n);
	cout<<"the value of n by main method is = "<<n<<endl;
	//n=20

}
