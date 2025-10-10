#include<iostream>
using namespace std;

int main()

{
	int i,num,dup,rem,sum=0;
	cout<<"Enter the number for evaluation\n";
	cin>>num;
	dup=num;
	while(num!=0)
	{
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	cout<<"Sum of digit so the given number "<<dup<<" is "<<sum;
}
