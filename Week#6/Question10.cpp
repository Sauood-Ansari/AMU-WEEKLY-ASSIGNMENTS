#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char st[101];
	cout<<"Enter a string of maximum 100 character...\n";
	cin.getline(st,101);
	char* s=st;
	char* e=st+(strlen(st)-1);
	//cout<<s<<" "<<e;
	//cout<<endl;
	while(s<e)
	{
		//cout<<*s<<" "<<*e;
		//cout<<endl;
		char t=*s;
		*s=*e;
		*e=t;
		*s++;
		*e--;		
	}
	cout<<"The reversed string is "<<st;
}
