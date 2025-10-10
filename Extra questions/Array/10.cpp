#include<iostream>
using namespace std;

int main()
{
	int len,even=0,odd=0,zero=0;
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
				even++;
			else
				odd++;
		}
		else 
			zero++;
	}
	cout<<"\Even number of elements are: "<<even<<"\nOdd number of elements are: "<<odd<<"\nAnd, zeroes are: "<<zero;
	
}
