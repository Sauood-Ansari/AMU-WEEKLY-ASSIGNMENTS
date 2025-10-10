#include<iostream>
using namespace std;
int main()
{
	int n,i,temp=0;
	cout<<"Enter the number of elements..."<<endl;
	cin>>n;
	cout<<endl;
	int arr[n],rev[n];
	cout<<"Enter the elements..."<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
		for(i=n-1;i>=0;i--)
	{
		rev[temp++]=arr[i];
	}
	cout<<"The reversed array is..."<<endl;
		for(i=0;i<n;i++)
	{
		cout<<rev[i];
		cout<<endl;	
	}
}
