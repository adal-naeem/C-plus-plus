#include<iostream>
using namespace std;
int main()
{
int n,m;
cin>>n;
cin>>m;
//declare,initialize 2 d array
int arr[n][m];
//input code
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
cin>>arr[i][j];}
}
cout<<"-------------------------------------"<<endl;

//output code
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
cout<<arr[i][j]<<" ";}
cout<<"\n";
}
}










