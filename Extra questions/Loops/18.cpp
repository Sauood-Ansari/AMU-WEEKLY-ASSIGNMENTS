#include<iostream>
using namespace std;

int main()
{
	int i,num,garb,temp1=0,temp2=1;
	cout<<"Enter the number of fibonacci terms to be printed ";
	cin>>num;
	cout<<"The "<<num<<" terms of fibonacci are \n";
	if(num==1)
	 cout<<temp1;
	 else if(num==2)
	 	cout<<temp1<<" "<<temp2;
	else 
		cout<<temp1<<" "<<temp2<<" ";
	for(i=1;i<+num;i++)
	{
		garb=temp2;
		temp2=temp1+temp2;
		temp1=garb;
		cout<<temp2<<" ";
	}
}
