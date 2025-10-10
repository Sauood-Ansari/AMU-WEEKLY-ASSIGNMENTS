#include<iostream>
using namespace std;

int main()

{
	int i,num,dup,count=0;
	cout<<"Enter the number for evaluation\n";
	cin>>num;
	dup=num;
	while(num!=0)
	{
		count++;
		num/=10;
	}
	cout<<"Number of digits in the given number "<<dup<<" is "<<count;
}
