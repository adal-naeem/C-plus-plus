#include<iostream>
using namespace std;
int main()
{
	string s="adil is a developer";
	int n=s.length();
	int count;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			count++;
		}
	}
	cout<<count;

}
