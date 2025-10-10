#include<iostream>
using namespace std;
int main()
{
	int num1,num2,temp;
	cout<<"Enter the first values to be swapped....\n";
	cin>>num1;
	cout<<"Enter the first values to be swapped....\n";
	cin>>num2;
	int* a=&num1;
	int* b=&num2;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"The two values are swapper and are now "<<*a<<" and "<<*b;
	
}
