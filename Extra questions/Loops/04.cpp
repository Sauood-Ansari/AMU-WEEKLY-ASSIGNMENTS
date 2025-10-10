#include<iostream>
using namespace std;

int main()
{
	int temp=0,num=1;
	cout<<"First ten even numbers are \n";
	while(temp<10)
	{
		if(num%2==0)
		{
			cout<<num<<" ";
			temp++;
			
		}
		num++;
	}
}
