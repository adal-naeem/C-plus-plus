#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter number of rows"<<endl;
	cin>>n;
	cout<<"enter number of columns"<<endl;
	cin>>m;
	int table[n][m];	
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<m;j++)
	{
	cin>>table[i][j];
    }
	}
    cout<<"______________________________"<<endl;	
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<m;j++)
	{
	cout<<table[i][j]<<"                ";
    }
    cout<<"\n";
	}
	
	
	
	
	
}
