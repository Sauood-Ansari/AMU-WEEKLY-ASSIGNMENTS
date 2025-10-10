#include<iostream>
using namespace std;

int main()
{
	int i,num,garb,temp1=0,temp2=1;
	cout<<"Enter the number upto which fibonacci terms to be printed ";
	cin>>num;
	cout<<"The fibonacci series upto "<<num<<" is \n";
	
	if(num==0)
		cout<<temp1<<" ";
		
	else if (num==1)
		cout<<temp1<<" "<<temp2<<" "<<temp2<<" ";
	else
	{
		cout<<temp1<<" "<<temp2<<" "<<temp2<<" ";
		while(num>temp2)
		{
			garb=temp2;
			temp2=temp1+temp2;
			temp1=garb;
			if(num>temp2)
				cout<<temp2<<" ";
		
		}
	}
}
