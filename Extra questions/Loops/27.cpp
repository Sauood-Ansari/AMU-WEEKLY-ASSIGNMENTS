#include<iostream>
using namespace std;

int main()
{
	int i,num,pow,res=1;
	cout<<"Enter the number \n";
	cin>>num;
	cout<<"Enter the power \n";
	cin>>pow;
	for(i=1;i<=pow;i++)
	{
		res*=num;
	}
	cout<<num<<" to the power "<<pow<<" is "<<res;
}
