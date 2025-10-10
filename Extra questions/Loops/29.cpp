#include<iostream>
using namespace std;

int main()
{
	int i,num1,num2,num,lcm=0;
	cout<<"Enter the two numbers \n";
	cin>>num1>>num2;
	num=(num1>num2)?num1:num2;
	while(lcm==0)
	{
		if(num%num1==0 && num%num2==0)
			lcm=num;
		num++;		
	}
	cout<<"The lcm of "<<num1<<" and "<<num2<<" is "<<lcm;
}
