#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter the number of elements in array...\n";
	cin>>num;
	int arr[num];
	int* poi=&arr[0];
	cout<<"Enter the elemetns of array...\n";
	for(i=0;i<num;i++)
	{
		cin>>*poi;
		++poi;
	}
	poi=poi-num;
	cout<<"The elemets of array are...\n";
	for(i=0;i<num;i++)
	{			
		cout<<*poi<<", ";
		++poi;	
	}
}
