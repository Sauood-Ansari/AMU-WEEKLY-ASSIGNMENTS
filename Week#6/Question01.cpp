#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter the calues of two number..\n";
	cin>>num1>>num2;
	int* a=&num1;
	int* b=&num2;
	cout<<"Sum of the two numbers using pointers is "<<(*a+*b);
}
