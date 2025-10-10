#include<iostream>
using namespace std;

int main()
{
	int num,i,sum=0;
	cout<<"All the perfect number berween 1 and 1000 are \n";
	for(num=2;num<1000;num++)
	{
		for(i=1;i<num;i++)
		{
			if(num%i==0)
			{
				sum+=i;
			}
		}
		
		if(sum==num)
			cout<<num<<" ";
		
		sum=0;
	}
}
