#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the number of elements..\n";
	cin>>n;
	int ar[n];
	cout<<"Enter the elements of array...\n";
	for(i=0;i<n;i++)
		cin>>ar[i];
	int* poi=&ar[0];
	cout<<"Display of elements using pointers is shown below..\n";
	for(i=0;i<n;i++)
	{
		cout<<(*poi)<<", ";
		poi++;
	}
}
