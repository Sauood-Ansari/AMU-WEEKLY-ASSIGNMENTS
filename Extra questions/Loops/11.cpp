#include<iostream>
using namespace std;

int main()
{
	int i,num,fact=1;
	cout<<"Enter a number \n";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fact*=i;
	}	
	cout<<"Factorial of the number "<<num<<" is "<<fact;
}
