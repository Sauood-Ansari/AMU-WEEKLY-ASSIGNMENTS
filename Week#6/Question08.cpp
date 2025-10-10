#include<iostream>
using namespace std;
int main()
{
	int num,i,sum=0;
	cout<<"Enter the number of elements...\n";
	cin>>num;
	int arr[num];
	cout<<"Enter the elements of array...\n";
	for(i=0;i<num;i++)
		cin>>arr[i];
	int* poi=&arr[0];
	for(i=0;i<num;i++)
	{
		sum+=*poi;
		poi++;
	}
	cout<<"The sum of elemets is "<<sum;
}
