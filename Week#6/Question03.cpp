#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number whose addredd is to be found...\n";
	cin>>num;
	int* address=&num;
	cout<<"The address of the number "<<num<<" is "<<address;
}
