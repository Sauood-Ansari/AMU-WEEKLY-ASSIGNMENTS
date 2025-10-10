#include<iostream>
using namespace std;

int main()
{
	int i,num1,num2,num,hcf;
	cout<<"Enter the two  numbers \n";
	cin>>num1>>num2;
	num=(num1>num2)?num1:num2;
	for(i=1;i<num;i++)
	{
		if(num1%i==0 && num2%i==0)
			hcf=i;
	}
	cout<<"The GCD for "<<num1<<" and "<<num2<<" is "<<hcf;
}
