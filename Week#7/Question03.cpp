#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the number of elements...\n";
	cin>>n;
	int ar[n];
	cout<<"Enter the elements of the array...\n";
	for(i=0;i<n;i++)
		cin>>ar[i];
	int* ptr=ar;
	int sum=0;
	for(i=0;i<n;i++)
		sum+=*(ptr++);
	double mean=sum/n;
	double sd;
	ptr=ar;
	for(i=0;i<n;i++)
		sd+=pow((*(ptr++)-mean),2);
	sd=pow((sd/(n-1)),0.5);
	cout<<"\nSum is "<<sum<<"\nMean is "<<mean<<"\nStandard deviation is "<<sd;
}
