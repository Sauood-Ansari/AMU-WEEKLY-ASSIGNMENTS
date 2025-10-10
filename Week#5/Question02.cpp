#include<iostream>
using namespace std;
int main()
{
	int i,limit,sum=0;
	cout<<"Enter the mnumber of elements in array..."<<endl;
	cin>>limit;
	int arr[limit];
	cout<<"Enter the elements of array.."<<endl;
	for(i=1;i<=limit;i++)
	{
		cin>>arr[i];
	}	
	for(i=1;i<=limit;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"Sum of elements are.."<<sum<<endl;
}
	

