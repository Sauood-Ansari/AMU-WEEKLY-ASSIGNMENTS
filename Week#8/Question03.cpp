#include<iostream>
#include<string>
using namespace std;
int main()
{
	string sentence,strng,replaced;
	cout<<"Enter the string...\n";
	getline(cin,sentence);//cout<<"\nSentence is; "<<sentence;
	int len_sen=sentence.length();
	cout<<"Enter the string to be replaced\n";
	getline(cin,replaced);
	int len_rep=replaced.length();
	cout<<"Enter the string to be placed\n";
	getline(cin,strng);
	int pos=sentence.find(replaced);//cout<<"\nPosition is"<<pos;
	string new_sen=sentence.substr(0,pos)+" "+strng+" "+sentence.substr((pos+len_rep+1),len_sen);
           //cout<<sentence.substr(0,pos)<<endl;
	       //cout<<sentence.substr(pos,(len_rep+1))<<endl;
	      //cout<<sentence.substr((pos+len_rep+1),len_sen)<<endl;
	cout<<"\nThe new sentence is: "<<new_sen;
}
