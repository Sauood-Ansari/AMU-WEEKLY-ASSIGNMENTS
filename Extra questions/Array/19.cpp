#include<iostream>
using namespace std;

int main()
{
	int len1,len2;
	//taking the length of both the array
	cout<<"Enter the length of first and second array\n";
	cin>>len1>>len2;
	int ar1[len1];
	int ar2[len2];
	
	//taking values of the first array
	cout<<"Enter the elements of the first array\n";
	for(int i=0;i<len1;i++)
		cin>>ar1[i];
		
	//taking values of the second array
	cout<<"Enter the elements of the second array\n";
	for(int i=0;i<len2;i++)
		cin>>ar2[i];
	
	//creating a new array where both the arrays will be merged
	int len=len1+len2;
	int arr[len];
	int temp;
	
	//binding both the array in one
	for(int i=0;i<len1;i++)
		arr[temp++]=ar1[i];
	for(int i=0;i<len2;i++)
		arr[temp++]=ar2[i];
		
	//sorting the final array
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	//Display of the original array
	cout<<"\nThe elements of the first array are\n";
	for(int i=0;i<len1;i++)
		cout<<ar1[i]<<" ";
		
	cout<<"\nThe elements of the second array are\n";
	for(int i=0;i<len2;i++)
		cout<<ar2[i]<<" ";
	
	//Display of the final array
	cout<<"\nThe merged array is \n";
	for(int i=0;i<len;i++)
		cout<<arr[i]<<" ";
}
