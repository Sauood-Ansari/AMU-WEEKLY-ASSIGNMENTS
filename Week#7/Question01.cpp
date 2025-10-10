#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char st[100];
	cout<<"Enter a string of maximum 100 character...\n";
	cin.getline(st,100);
	char* ch=st;
	int temp=strlen(st)-1;
	int vow=0;
	while(temp>=0)
	{
		if(*ch=='a'||*ch=='e'||*ch=='i'||*ch=='o'||*ch=='u')
			vow++;
		temp--;
		ch++;
	}
	cout<<"\nTotal number of vowels in the string are "<<vow;
}
