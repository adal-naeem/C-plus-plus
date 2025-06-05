#include<iostream>
#include<string>
using namespace std;
struct biodata
	{
		int age;
		string name;
		int roll_no;
		char gender;
	};
	
int main()
{
	biodata mystudents[10];
	for(int i=1;i<10;i++)
	{
	cout<<"age= ";
	cin>>mystudents[i].age;
	cout<<"name= ";
    cin>>mystudents[i].name;
	cout<<"roll_no= ";
	cin>>mystudents[i].roll_no;
	cout<<"gender= ";
    cin>>mystudents[i].gender;
	}
 } 
