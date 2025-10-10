#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num,dup,cube,rem,sum=0;
	cout<<"All the armstrong number between 1 and 500 are \n";	
	for(num=2;num<=9;num++)
		cout<<num<<" ";
		
	for(num=10;num<500;num++)
	{
		dup=num;
		while(dup!=0)
		{
			rem=dup%10;
			cube=pow(rem,3);
			sum+=cube;
			dup/=10;
		}
		if(num==sum)
			cout<<num<<" ";
		sum=0;
	}
	
}
