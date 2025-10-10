#include<iostream>
using namespace std;

int main()
{
	int i,j,num,temp=0;
	cout<<"Al;l the prime numbers between 1 to 100 are listed below\n";
	for(num=2;num<100;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
				temp++;
		}
		if(temp==0)
			cout<<num<<" ";
		temp=0;
    }	
}
