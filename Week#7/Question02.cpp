#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char st[100];
	cout<<"Enter a string of maximum 100 character...\n";
	cin.getline(st,100);
	char* ch=st;
	int len=0;
	while(*ch!='\0')
	{
		len++;
		ch++;
	}
	cout<<"\nLength of the string is "<<len;
}
