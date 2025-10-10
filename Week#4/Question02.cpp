#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter the first number ";
	cin>>num1;
	cout<<"Enter the second number ";
	cin>>num2;
	
	if(num2>=0)	
	{	
	while(num2>0)
	{
		num1++;
		num2--;
	}
	}
	else
	{
	while(num2<0)
	{
		num1--;
		num2++;
	}
	}
	cout<<"Sum of both the numbers are "<<num1;
	/*
	
	int carry,sum;
	while (num2!=0)
	{
		carry=num1&num2;
		sum=num1^num2;
		num2=carry<<1;		
	}
	cout<<"Sum of both the numbers are "<<sum;
	*/
	return 0;
}
