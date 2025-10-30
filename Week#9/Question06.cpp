#include<iostream>
using namespace std;

int disp_arr(int sum,int len ,int* poi)
{
	if(len<=0)
	{
		return sum;		
	}
	else
	{	
		sum+=*poi;
		return (disp_arr(sum,--len,++poi));	
	}
}

int main()
{
	int len,i,sum=0;
	cout<<"Enter the length of the array\n";
	cin>>len;
	int arr[len];
	cout<<"Enter the elements of the array\n";
	for(i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	int* p=arr;
	sum=disp_arr(sum,len,p);
	cout<<"The sum of the elements of the array is "<<sum;
}
