#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str,dup;
	int end,start=0,temp=0; 
	cout<<"Enter the string...\n";
	getline(cin,str);
	dup=str;
	end=str.length()-1;
	//cout<<end;
	int len=str.length();
	while(start<=end)
	{
		//cout<<"\n"<<str[start]<< " "<<str[end];
		if(str[start]!=str[end])
		{
			temp++;
		}
		start++;
		end--;
	}
	if(temp!=0)
		cout<<"The string "<<dup<<" is not a palindrome";
	else
		cout<<"The string "<<dup<<" is palindrome";
}
