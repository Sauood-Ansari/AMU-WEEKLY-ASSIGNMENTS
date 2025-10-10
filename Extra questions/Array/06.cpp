#include<iostream>
using namespace std;

int main()
{
	int len,num,temp=0;
	cout<<"Enter the length of the array  \n";
	cin>>len;
	int arr[len];
	cout<<"Enter the elements \n";
	for(int i=0;i<len;i++)
		cin>>arr[i];
	
	cout<<"Enter the number whose frequency is to be counrted\n";
	cin>>num;
	for(int i=0;i<len;i++)
	{
		if(num==arr[i])
		temp++;		
	}
	cout<<"\ The frequency of the number "<<num<<" is "<<temp<<" times";
}
