#include<iostream>
using namespace std;

int main()
{
	int len,avg,sum=0;
	cout<<"Enter the length of the array  \n";
	cin>>len;
	int arr[len];
	cout<<"Enter the elements \n";
	for(int i=0;i<len;i++)
		cin>>arr[i];
	
	for(int i=0;i<len;i++)
		sum+=arr[i];
	avg=sum/len;
	cout<<"\nThe average of array is "<<avg;
}
