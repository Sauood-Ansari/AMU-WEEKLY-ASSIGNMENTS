#include<iostream>
using namespace std;

int main()
{
	int len;
	cout<<"Enter the length of the array\n";
	cin>>len;
	int arr[len];
	cout<<"Enter the elements of the array";
	for(int i=0;i<len;i++)
		cin>>arr[i];
	cout<<"\nOriginal matrix is \n";
	for(int i=0;i<len;i++)
		cout<<arr[i]<<" ";
	int temp=arr[len-1];
	arr[len-1]=arr[0];
	for(int i=0;i<len-2;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[len-2]=temp;
	cout<<"\nRotated array is\n";
	for(int i=0;i<len;i++)
		cout<<arr[i]<<" ";
}
