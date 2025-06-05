#include<iostream>
#include<stdlib.h>
using namespace std;


void InitArray(int arr[5][5])
{
    for(int i=0;i<5;i++)
	{
    for(int j=0;j<5;j++)
    {
	arr[i][j]=rand();
	}
    cout<<endl;
	}
}
int main()


{
	int A[5][5];
	
InitArray(A);
}

