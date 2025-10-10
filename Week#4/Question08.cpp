#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,digit,temp,i=1,sum=0;	
	cout<<"Enter the three digit number..."<<endl;
	cin>>num;
	temp=num;
	while(temp!=0)	
	{				
		digit=pow((temp%10),3);					
		sum=sum+digit;			
		temp=temp/10;					
		i++;
		digit=0;		
	}
	
	if(sum==num)
	cout<<"Number "<<num<<" is an Amstrong"<<endl;
	else
	cout<<"Number is not an Amstrong Number"<<endl;
return 0;
}
