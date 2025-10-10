#include<iostream>
#include<string>
using namespace std;
int main()
{
	string nam;
	cout<<"Enter a string...\n";
	cin>>nam;
	string* add=&nam;
	cout<<"String entered is "<<*add;
}
