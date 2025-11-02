#include<iostream>
#include<string>
#include<sstream>
using namespace std;

struct operations
{
	private:
		int num;
	
	public:
		int getData()
		{
			cout<<"Enter a whole decimal number \n";
			cin>>num;
			return num;
		}
		
		void binary(int n)
		{
			cout<<"The binary convertion of the number "<<n;
			int con=0,tens=1;
			while(n!=0)
			{
				int r=n%2;
				con=con+(r*tens);
				tens=tens*10;
				n=n/2;
			}
			cout<<" is: "<<con<<"\n\n\n";
		}
		
		void octal(int n)
		{
			cout<<"The octal convertion of the number "<<n;
			int con=0,tens=1;
			while(n!=0)
			{
				int r=n%8;
				con=con+(r*tens);
				tens=tens*10;
				n=n/8;
			}
			cout<<" is: "<<con<<"\n\n\n";
		}
		
		void hexaDecimal(int n)
		{
			stringstream ss;
			cout<<"The hexadecimal convertion of the number "<<n;
			string con=NULL;
			while(n!=0)
			{
				int r=n%16;
				if(r<10)
				{
					ss>>r;
					con=con+ss;
				}
				else if(r>9&&r<15)
				{
					ss>>r+56;
					con=con+ss;
				}
				n=n/16;
			}
			
			
			cout<<" is: "<<con<<"\n\n\n";
		}
};

int main()
{
	int opt,num;
	operations op;
	do
	{
		num=op.getData();
		if(num>0)
		{
			cout<<"Choose the option given below...\n";
			cout<<"1.Convert to Binary\n";
			cout<<"2.Convert to Octal\n";
			cout<<"3.Convert to Hexadecimal\n";
			cout<<"4.Exit\n\n";
			cin>>opt;		
			switch(opt)
			{
				case 1:
					op.binary(num);
					break;
				case 2:
					op.octal(num);
					break;
				case 3:
					op.hexaDecimal(num);
					break;
				case 4:
					break;
				default:
					cout<<"Invalid Input\n";
			}
		}
		else 
		opt=4;
	}while(opt!=4);
}
