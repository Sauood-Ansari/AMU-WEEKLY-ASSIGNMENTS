#include<iostream>
using namespace std;

int main()
{
	int i,j,num,temp=0;
	cout<<"Enter the number  \n";
	cin>>num;
	cout<<"Prime factors of "<<num<<" are ";
	if(num==1)
		cout<<"1 has no prime factors  \n";
	else if(num>1)
	{
		for(i=2;i<=num;i++)
		{
			if(num%i==0)
			{
				for(j=2;j<i;j++)
				{
					if(i%j==0)
						temp++;
				}
				if(temp==0)
					cout<<i<<" ";
				temp=0;
			}
		}	
	}
	else
		cout<<"Invalid Input";
}
