#include<iostream>
using namespace std;

int main()
{
	int i,num,temp=0;
	cout<<"Enter hte number for evalutaion";
	cin>>num;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			temp++;
	}
	if(temp==0)
		cout<<"Number is prime";
	else 
		cout<<"Number is not prime";
}
