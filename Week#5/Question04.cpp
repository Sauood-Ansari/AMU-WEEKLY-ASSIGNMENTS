#include<iostream>
#include<climits>
using namespace std;
int main()
{	
	int n,i,big,sec_big;	
	cout<<"Enter the number of elements.."<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements..."<<endl;
	for (i=0;i<n;i++)	
	{
		cin>>arr[i];	
	}
	big=INT_MIN;
	sec_big=INT_MIN;
	for(i=0;i<n;i++)
	{
		if(arr[i]>big)
		{
			sec_big=big;
			big=arr[i];
		}
		else if(arr[i]>sec_big && arr[i]!=big)
		sec_big=arr[i];
	}
	if(sec_big==INT_MIN)
	{
		cout<<"All the elements are same";
	}
	else
	{
		cout<<"Second-largest integer is="<<sec_big;
	}
	
}
	

