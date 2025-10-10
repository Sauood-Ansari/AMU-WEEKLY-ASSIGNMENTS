#include<iostream>
using namespace std;

int main()
{
	int len,start=0;
	cout<<"Enter the length of the array\n";
	cin>>len;
	int end=len-1;
	int arr[len];
	cout<<"Enter the elements\n";
	for(int i=0;i<len;i++)
		cin>>arr[i];
	cout<<"The original matrix is: \n";
	for(int i=0;i<len;i++)
		cout<<arr[i]<<" ";
	for(int i=0;i<len/2;i++)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	cout<<"\nThe reversed matrix is: \n";
	for(int i=0;i<len;i++)
		cout<<arr[i]<<" ";
}
