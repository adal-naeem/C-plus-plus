#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter number of rows= ";
cin>>n;
int i=1;
while(i<=n)
{
int j=1;
while(j<=i)
{
cout<<j;
j=j+1;
}
cout<<"\n";
i=i+1;
}
}

