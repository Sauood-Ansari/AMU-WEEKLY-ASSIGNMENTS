#include<iostream>
using namespace std;

int main()
{
	int num,i,sum=0;
	cout<<"Enter a number for evaluation...\n";
	cin>>num;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	if(sum==num)
		cout<<"The given number "<<num<<" is perfect";
	else
		cout<<"The given number "<<num<<"  is not perfect";
}
