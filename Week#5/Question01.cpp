#include<iostream>
using namespace std;
int main()
{
	int i,limit;
	cout<<"Enter the mnumber of elements in array..."<<endl;
	cin>>limit;
	int arr[limit];
	cout<<"Enter the elements of array.."<<endl;
	for(i=1;i<=limit;i++)
	{
		cin>>arr[i];
	}
	cout<<"Elements of array are.."<<endl;
	for(i=1;i<=limit;i++)
	{
		cout<<arr[i]<<endl;
	}
}
	

