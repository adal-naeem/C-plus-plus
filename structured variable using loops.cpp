#include<iostream>
using namespace std;
struct biodata{
	int roll_no;
	string name;
	char section;
	char grade;
	};
int main()
{
	biodata mystudents[5];
	for(int i=1;i<5;i++)
	{
	cout<<"roll_no= ";
	cin>>mystudents[i].roll_no;
	cout<<"name= ";
    cin>>mystudents[i].name;
	cout<<"section= ";
	cin>>mystudents[i].section;
	cout<<"grade= ";
    cin>>mystudents[i].grade;
	}
}
