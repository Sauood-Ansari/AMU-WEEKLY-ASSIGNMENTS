#include<iostream>
using namespace std;

int main()
{
	int len;
	cout<<"Enter the length of the array\n";
	cin>>len;
	int arr[len];
	int copy[len];
	cout<<"Enter the elements of array\n";
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
		copy[i]=arr[i];
	}
	cout<<"The original matrix is \n";
	for(int i=0;i<len;i++)
		cout<<arr[i]<<" ";
	cout<<"\nThe copy matrix is \n";
	for(int i=0;i<len;i++)
		cout<<copy[i]<<" ";	
}
