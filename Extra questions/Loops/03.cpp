#include<iostream>
using namespace std;
int main()
{
	int i,num;
	cout<<"Enter the number to print the table till 10 \n";
	cin>>num;
	for(i=1;i<10;i++)
	{
		cout<<num<<"*"<<i<<"="<<(num*i)<<"\n";
	}
}
