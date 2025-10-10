#include<iostream>
using namespace std;

int main()
{
	int len,neg=0,pos=0,zero=0;
	cout<<"Enter the length of the array\n";
	cin>>len;
	int arr[len];
	cout<<"Enter the elements\n";
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
		if(arr[i]<0)
			neg++;
		else if(arr[i]>0)
			pos++;
		else
			zero++;
	}
	cout<<"\nPositive elements are: "<<pos<<"\nNegative elements are: "<<neg<<"\nAnd, zeroes are: "<<zero;
	
}
