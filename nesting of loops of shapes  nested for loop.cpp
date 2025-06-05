#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter number of rows= ";
cin>>n;
for(int i=1;i<=n;i=i+1)
{
for(int j=1;j<=i;j=j+1)
{
cout<<"*";
}
cout<<"\n";
}
}
