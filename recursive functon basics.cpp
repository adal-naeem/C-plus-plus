#include<iostream>
using namespace std;
void print(int i)
{
 
    if(i<=5)
    {
   	cout<<"adil is SE student"<<endl;
   	cout<<i<<endl;
   	i++;
	print(i);
}
}
int main()
{
	int i=0;
	print(i);
	
	
	
}
