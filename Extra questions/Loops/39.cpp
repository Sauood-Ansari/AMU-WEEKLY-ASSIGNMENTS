#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			if(i*j<10)
				cout<<"  "<<i*j<<" ";
			else if(i*j>9 && i*j<100)
				cout<<" "<<i*j<<" ";
			else 
				cout<<i*j<<" ";
		}
		cout<<endl;
	}
}
