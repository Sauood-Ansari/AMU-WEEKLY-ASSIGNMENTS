#include<iostream>
using namespace std;

int main()
{
	int len;
	cout<<"Enter the length of the array\n";
	cin>>len;
	int arr[len];
	cout<<"Enter the elements of the array\n";
	for(int i=0;i<len;i++)
		cin>>arr[i];
	int temp=0;
	for(int i=1;i<len;i++)
	{
		if(arr[i-1]>arr[i])
			temp++;
	}
	if(temp>0)
		cout<<"\nArray is not sorted";
	else
		cout<<"\nArray is sorted";
}
