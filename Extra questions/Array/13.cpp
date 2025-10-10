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
	{
		cin>>arr[i];
	}
	cout<<"The original matrix is \n";
	for(int i=0;i<len;i++)
		cout<<arr[i]<<" ";
	int temp=arr[0];
	arr[0]=arr[len-1];
	arr[len-1]=temp;
	cout<<"\nThe changed matrix is \n";
	for(int i=0;i<len;i++)
		cout<<arr[i]<<" ";	
}
