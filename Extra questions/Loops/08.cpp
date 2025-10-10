#include<iostream>
using namespace std;

int main()
{
	int i,sum=0;
	for(i=1;i<100;i++)
	{
		if(i%2!=0)
			sum+=i;
	}	
	cout<<"Summation of all the odd numbers between 1 and 100 is "<<sum;
}
