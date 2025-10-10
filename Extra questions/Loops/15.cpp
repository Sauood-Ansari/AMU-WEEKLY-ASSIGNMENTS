#include<iostream>
using namespace std;

int main()

{
	int i,num,dup,rem,rev;
	cout<<"Enter the number for evaluation\n";
	cin>>num;
	dup=num;
	while(num!=0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num/=10;
	}
	if(rev==dup)
		cout<<"The given number "<<dup<<" is palindrome";
	else
		cout<<"The given number "<<dup<<" is not palindrome";
}
