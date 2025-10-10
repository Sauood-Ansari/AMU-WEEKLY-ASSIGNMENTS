#include<iostream>
using namespace std;

int main()
{
	int len,evenSum=0,oddSum=0,zero=0;
	cout<<"Enter the length of the array\n";
	cin>>len;
	int arr[len];
	cout<<"Enter the elements\n";
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
		if(arr[i]!=0)
		{
			if(arr[i]%2==0)
				evenSum+=arr[i];
			else
				oddSum+=arr[i];
		}
		else 
			zero++;
	}
	cout<<"\nEven number sum of elements are: "<<evenSum<<"\nOdd number sum of elements are: "<<oddSum<<"\nAnd number of zeroes are: "<<zero;
	
}
