#include <iostream>
using namespace std;
int main()
{
	int n,i,j,temp=0;
	cout<<"Enter the value of n"<<endl;
	cin>>n;		
	cout<<"Prime numbers between 1 and n are..."<<endl;
	for(i=2;i<n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
			temp++;
			break;
			}
		}
		if (temp==0)
		{
			cout<<" "<<i;		
		}	
		temp=0;		
	}
	return 0;
}
