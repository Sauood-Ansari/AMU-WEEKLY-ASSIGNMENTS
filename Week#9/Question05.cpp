#include<iostream>
using namespace std;

int disp_arr(int len ,int* poi)

{
	if(len<=0)
		return 0;
	else
	{
		cout<<*poi<<" ";
		return disp_arr(--len,++poi);
	}
}

int main()
{
	int len,i;
	cout<<"Enter the length of the array\n";
	cin>>len;
	int arr[len];
	cout<<"Enter the elements of the array\n";
	for(i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	int* p=arr;
	disp_arr(len,p);
}
