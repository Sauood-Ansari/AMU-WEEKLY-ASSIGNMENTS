#include<iostream>
using namespace std;

int find_min(int len,int* p,int min)
{
	if(len<=0)
	{
		return min;		
	}
	else
	{
		if(min>(*p))
			min=*p;
		return find_min(--len,++p,min);	
	}
}

int find_max(int len,int* p,int max)
{
	if(len<=0)
	{
		return max;		
	}
	else
	{	
		if(max<(*p))
			max=*p;
		return find_max(--len,++p,max);	
	}
}

int main()
{
	int len,i,min,max;
	cout<<"Enter the length of the array...\n";
	cin>>len;
	int arr[len];
	cout<<"Ente the elements of the array...\n";
	for(i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	int* poi=arr;
	min=find_min(len,poi,*poi);
	max=find_max(len,poi,*poi);	
	cout<<"The maximum number is "<<max<<"\nThe minimum number is "<<min; 
}
