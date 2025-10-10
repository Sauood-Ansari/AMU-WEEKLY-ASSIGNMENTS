#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the values for pascal's triangle\n";
	cin>>num;
	int i,j,k,l=num+1,temp=1;
	for(i=1;i<=num;i++)
	{
		for(k=1;k<=num;k++)
		{
			if((k+l)%2==0 && k>=l)
				cout<<temp++<<" ";
			else
				cout<<"  ";
		}
		if(i%2==0)
			temp--;
		for(j=1;j<i;j++)
		{
			if((i+j)%2==0)
				cout<<--temp<<" ";
			else
				cout<<"  ";
		}
		cout<<endl;
		l--;
		temp=1;
	}
}
