#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
	private:
		string name,acc_type;
		int acc_number;	
		double balance;
	
	public:
		BankAccount(string s,string t,int n,double b)
		{
			name=s;
			acc_type=t;
			acc_number=n;
			balance=b;
		}
		
		void deposit()
		{
			double credit;
			cout<<"Welcome "<<name<<endl;
			cout<<"Enter the amount to be deposited...\n";
			cin>>credit;
			balance+=credit;
		}
		
		void withdraw()
		{
			double debit;
			cout<<"Welcome "<<name<<endl;
			cout<<"Enter the amount to withdraw\n";
			cin>>debit;
			if(debit>balance)
				cout<<"Insufficiant balance in account\n";
			else
			{
				balace-=debit;
			}
		}
		
		void disp()
		{
			cout<<"Name of account holder is: "<<name<<endl;
			cout<<"Account type is: "<<acc_type<<endl;
			cout<<"Account number is: "<<acc_number<<endl;
			cout<<"Total balance in account is: "<<balance<<endl;
		}
};
int main()
{
	char ch;
	string s,t;
	int n;
	double b;
	cout<<"Enter your name...\n ";
	getline(cin,s);
	cout<<"Enter your account type...\n ";
	cin>>t;
	cout<<"Enter your account number...\n ";
	cin>>n;
	cout<<"Enter your name...\n ";
	cin>>b;
	BankAccount ba(s,t,n,b);
	cout<<"Do you want to display your account info(Y/N)\n";
	cin>>ch;
	if(ch=='y'||ch=='Y')
		ba.disp();
	else if(ch)
}
