#include<iostream>
using namespace std;

int main()
{
	int len,count=0;
	cout<<"Enter the length of the array\n";
	cin>>len;
	int arr[len];
	
	cout<<"Enter the values of the array\n";
	for(int i=0;i<len;i++)
		cin>>arr[i];
		
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len;j++)
		{
			if(arr[i]==arr[j] && i!=j)
			{
				arr[j]=NULL;
				count++;
			}
		}
	}
	
	//Display of the final array
	cout<<"The final array without any duplicate is \n";
	for(int i=0;i<=len-count;i++)
	{
		if(arr[i]!=NULL)
			cout<<arr[i]<<" ";
	}
}
