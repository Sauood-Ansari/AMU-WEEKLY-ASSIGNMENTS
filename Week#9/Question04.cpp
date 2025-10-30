#include <iostream>
using namespace std;

void swap_value(int a, int b)
{
	cout<<"The original values are "<<a<<" and "<<b;
	int temp=a;
	a=b;
	b=temp;	
	cout<<"\nThe swapped values are "<<a<<" and "<<b;
}

void swap_reference(int *p,int*q)
{
	cout<<"The original values are "<<*p<<" and "<<*q;
	int temp=*p;
	*p=*q;
	*q=temp;
	cout<<"\nThe swapped values are "<<*p<<" and "<<*q;	
}

int main()
{
	int opt,num1,num2;
	cout<<"Enter two numbers to be swapped...\n";
	cin>>num1>>num2;
	int *pnum1=&num1;
	int *pnum2=&num2;
	cout<<"Choose any one of the method to swap two numbers...\n";
	cout<<"1.By Value\n";
	cout<<"2.By Reference\n";
	cout<<"3.Terminate\n";
	cin>>opt;
	switch(opt)
	{
		case 1: 
		swap_value(num1,num2);
		break;
		case 2:
		swap_reference(pnum1,pnum2);
		break;
		case 3:
		cout<<"Programm Terminated";
		break;
		default:
		cout<<"Wrong Option";
		main();
	}

}
