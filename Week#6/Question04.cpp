#include<iostream>
using namespace std;
int main()
{
	int num,inc,dec,dup;	
	cout<<"Enter the number whose increment and decrement is to be found \n";
	cin>>num;
	dup=num;
	int* address=&num;	
	inc=++(*address);
	dec=--(*address);
	dec=--(*address);
	cout<<"The increment of the number "<<dup<<" is "<<inc<<" and the decrement is "<<dec;
	//cout<<num;
}
