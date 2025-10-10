#include<iostream>
using namespace std;

int main()
{
	int num,len;
	cout<<"Enter the length of the array\n";
	cin>>len;
	int arr[len];
	for(int i=0;i<len;i++)
		cin>>arr[i];
	cout<<"Enter the number to be searched\n";
	cin>>num;
	
	for(int i=0;i<len;i++)
	{
		if(num==arr[i])
		{
			cout<<"The number "<<num<<" is found ar the position "<<i+1<<"\n";
		}
	}
}
