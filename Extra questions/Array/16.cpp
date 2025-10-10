#include<iostream>
using namespace std;
int main()
{
	int len;
	cout<<"Enter the length of the array\n";
	cin>>len;
	int arr[len];
	cout<<"Enter the elements of array\n";
	for(int i=0;i<len;i++)
		cin>>arr[i];
	cout<<"The original array is\n";
	for(int i=0;i<len;i++)
		cout<<arr[i]<<" ";
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"The sorted array is\n";
	for(int i=0;i<len;i++)
		cout<<arr[i]<<" ";
}
