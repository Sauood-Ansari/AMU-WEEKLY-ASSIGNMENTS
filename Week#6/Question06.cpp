#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word1,word2;
	cout<<"Enter the first word...\n";
	cin>>word1;
	cout<<"Enter the second word...\n";
	cin>>word2;
	string* a=&word1;
	string* b=&word2;
	string con=*a+""+*b;
	cout<<"The concatenate of two words are "<<con;
}
