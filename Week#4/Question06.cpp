#include <iostream>
using namespace std;
void ifelse_method(char ch)
{
	if(ch>=65&&ch<=90)
	{
		cout<<"Character is capital letter";
	}
	else if(ch>=97 && ch<=122)
	{
		cout<<"Character is small letter";
	}
	else if(ch>=48&& ch<=57)
	{
		cout<<"Character is numeric";
	}
	else if((ch>=0&& ch<=47)||(ch>=58&& ch<=64)||(ch>=91&& ch<=96)||(ch>=123&& ch<=127))
	{
		cout<<"Character is special character";
	}
	else
		cout<<"Wrong Input";
}
void switch_method(char ch)
{
	int temp=int(ch);
	switch(temp)
	{
		case 65 ... 90:
		cout<<"Character is capital letter";
		break;
		case 97 ... 122:
		cout<<"Character is small letter";
		break;
		case 48 ... 57:
		cout<<"Character is numeric";
		break;
		case 0 ... 47:
		case 58 ... 64:
		case 91 ... 96:
		case 123 ... 127:
		cout<<"Character is special character";
		break;
		default:
		cout<<"Wrong Input";
	}
}
int main()
{
	char ch;
	int temp;
	cout<<"Enter the character"<<endl;
	cin>>ch;
	cout<<"Select with method to be used"<<endl;
	cout<<"1.if else method"<<endl;
	cout<<"2.switch case method"<<endl;
	cin>>temp;
	if(temp==1)
	ifelse_method(ch);
	else if(temp==2)
	switch_method(ch);
	else 
	cout<<"Wrong option";
	return 0;
}
