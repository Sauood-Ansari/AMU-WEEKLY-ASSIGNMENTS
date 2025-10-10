#include<iostream>
#include<cmath>
using namespace std;

int main()

{
	int i,num,sum=0;
	cout<<"Enter number to find summation till that number\n";
	cin>>num;
	for(i=1;i<=num;i++)
		sum+=pow(i,3);
	cout<<"Summation till "<<num<<" is "<<sum;
}
