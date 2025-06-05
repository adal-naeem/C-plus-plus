#include<iostream>
using namespace std;
void sum(int n1,int n2)
{
	cout<<n1+n2<<endl;
	
}
void details(int n1,char n2)
{
	cout<<"quiz marks are = "<<n1<<endl;
	cout<<"your grades are = "<<n2<<endl;
	
}

int main()
{
int a=10,b=20,marks=30;
char grade='A';
sum(a,b);
details(marks,grade);




//main ka variable function body mn use ni hosakta
//greater ambigous value h ye ni use ho sakti as function name
//scope of variable ka matlab jis bracket mn declare hua bs usi mn use ho sakta h
}
