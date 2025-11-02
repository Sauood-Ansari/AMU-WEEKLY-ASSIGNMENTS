#include<iostream>
using namespace std;

struct calc
{
	public:
				
		inline int add(int num1,int num2)
		{
			return(num1+num2);
		}
		
		inline int sub(int num1,int num2)
		{
			return(num1-num2);
		}
		inline int mult(int num1,int num2)
		{
			return(num1*num2);
		}
		
		inline int div(int num1,int num2)
		{
			return(num1/num2);
		}
};
int main()
{
	int opt,num1,num2;
	calc c;
	do
	{
		cout<<"Enter the two number...\n";
		cin>>num1>>num2;
		cout<<"Choose the option given below...\n";
		cout<<"1.Addition\n";
		cout<<"2.Substraction\n";
		cout<<"3.Multiplication\n";
		cout<<"4.Division\n";
		cout<<"5.Exit\n\n";
		cin>>opt;		
		switch(opt)
		{
			case 1:
				cout<<"Sum of the two number "<<num1<<" and "<<num2<<" is "<<c.add(num1,num2)<<endl<<endl<<endl;;
				break;
			case 2:
				cout<<"Difference of the two number "<<num1<<" and "<<num2<<" is "<<c.sub(num1,num2)<<endl<<endl<<endl;
				break;
			case 3:
				cout<<"Product of the two number "<<num1<<" and "<<num2<<" is "<<c.mult(num1,num2)<<endl<<endl<<endl;
				break;
			case 4:
				if(num2!=0)
				{
					cout<<"Division of the two number "<<num1<<" and "<<num2<<" is "<<c.div(num1,num2)<<endl<<endl<<endl;
				}
				else
					cout<<"Denominator is zero enter a valid number\n\n\n";
				break;
			case 5:
				cout<<"Program terminated";
				break;
			default:
				cout<<"Invalid Input\n\n\n";
		}
	}while(opt!=5);
}
