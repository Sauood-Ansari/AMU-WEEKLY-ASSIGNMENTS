#include<iostream>
using namespace std;

int main()
{
	int len;
	cout<<"Enter the length of the array  \n";
	cin>>len;
	int arr[len];
	cout<<"Enter the elements \n";
	for(int i=0;i<len;i++)
		cin>>arr[i];
	int min=arr[0];
	for(int i=0;i<len;i++)
	{
		if(min<=arr[i])
		min=arr[i];		
	}
	cout<<"\nThe smallest of array is "<<min;
}
