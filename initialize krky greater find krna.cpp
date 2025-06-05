#include<iostream>
using namespace std;
int main()
{
	int grt=0;
	int A[4]={12,45,674,7990};
	
	
	grt=A[0];
	
	for(int i=1; i<4 ;i++)
	{
		if(grt<A[i])
		grt=A[i];
			
	}
	
	cout<<"the greater number is "<<grt<<endl;
	
	
	
	
}
