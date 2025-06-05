#include<iostream>
using namespace std;
int main()
{
	string s="adil is uogian";
	int l=s.length();
	cout<<l<<endl;
	for(int i=0;i<l;i++)
	{
		if(i %2==0)
		{
			s[i]='a';
				
		}
		
			cout<<s;
	}
	
	
	
	
}
