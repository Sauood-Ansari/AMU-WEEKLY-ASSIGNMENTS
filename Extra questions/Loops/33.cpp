#include<iostream>
using namespace std;

int main()
{
	int i,j,k,l=5;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=4;k++)
		{
			if((k+l)%2==0 && k>=l)
				cout<<"* ";
			else
				cout<<"  ";
		}
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
				cout<<"* ";
			else
				cout<<"  ";
		}
		cout<<endl;
		l--;
	}
}
