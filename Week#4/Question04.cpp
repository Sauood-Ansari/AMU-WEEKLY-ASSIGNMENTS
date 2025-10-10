#include <iostream>
using namespace std;
int main()
{
	int n,i,a=0,b=1,c;
	cout<<"Enter the value of n";
	cin>>n;
	cout<<a<<" ";
	cout<<b<<" ";
	for(i=2;i<n;i++)
	{
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;		
	}
	return 0;
}
