#include<iostream>
using namespace std;

int main()

{
	int i,num,sum=0;
	cout<<"Enter number to find summation till that number\n";
	cin>>num;
	for(i=1;i<=num;i++)
		sum+=(i*i);
	cout<<"Summation till "<<num<<" is "<<sum;
}
