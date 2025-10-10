#include<iostream>
#include<string>
using namespace std;
string insert_str(string main, string sub,int pos)
{
	if(pos>main.length())
	{
		cout<<"Exceeds the sentence limit...\n";
		return "";
	}
	return (main.substr(0,pos)+" "+sub+" "+main.substr(pos));
}
string delete_str(string str,int pos,int count)
{
	if(pos<0||pos>str.length())
	{
		cout<<"Invalid positon...";
		return "";
	}
	return (str.substr(0,pos)+str.substr(pos+count)); 
}
int main()
{
	string str,in_str,del_str,final_str;
	int pos,count;
	cout<<"Choose an option...";
	cout<<"\n1.Insert a string ";
	cout<<"\n2.Delete a part of string\n";
	int temp;
	cin>>temp;
	if(temp==1)
	{
		cin.ignore();
		cout<<"Enter the main sentence..\n";
		getline(cin,str);		
		cout<<"Enter the position...\n";
		cin>>pos;
		cin.ignore();
		cout<<"Enter the string to be replaced...\n";
		cin>>in_str;
		final_str=insert_str(str,in_str,pos);
		cout<<"\nThe final string is..."<<final_str;
	}
	else if(temp==2)
	{
		cin.ignore();
		cout<<"Enter the main sentence..\n";
		getline(cin,str);		
		cout<<"Enter the position...\n";
		cin>>pos;
		cout<<"Enter the number of characters...\n";
		cin>>count;	
		cin.ignore();	
		final_str=delete_str(str,pos,count);
		cout<<"\nThe final string is..."<<final_str;
	}
	else
	cout<<"Wrong input";
}
