#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num,dup,cube,rem,sum=0;
	cout<<"Enter the number \n";
	cin>>num;
	if(num<10)
		cout<<"Number is Armstrong";
	else
	{
		dup=num;
		while(num!=0)
		{
			rem=num%10;
			cube=pow(rem,3);
			sum+=cube;
			num=num/10;
		}
		if(dup==sum)
			cout<<"Number is Armstrong";
		else 
			cout<<"Number is not Armstrong";
	}
}
