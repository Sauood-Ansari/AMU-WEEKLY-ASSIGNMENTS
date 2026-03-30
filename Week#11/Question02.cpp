#include<iostream>
using namespace std;

class Calculator
{
	public:
	inline float addition(float a,float b)
	{
		return (a+b);
	}
	inline float substraction(float a,float b)
	{
		return (a-b);
	}
	inline float multiplication(float a,float b)
	{
		return (a*b);
	}
	inline float division(float a,float b)
	{
		return (a/b);
	}	
};

int main()
{
	Calculator cal;
	float num1,num2;
	int opt;
	
	cout<<"Enter the first number \n";
	cin>>num1;
	cout<<"Enter the second number\n";
	cin>>num2;
	cout<<"Choose the operation to be performed\n";
	cout<<"1.Addition\n";
	cout<<"2.Substraction\n";
	cout<<"3.Multiplication\n";
	cout<<"4.Division\n";
	cout<<"5.Exit\n";
	cin>>opt;
	cout<<endl<<endl<<endl<<endl;
	switch (opt)
	{
		case 1:
			cout<<"Addition of two numbers is "<<cal.addition(num1,num2)<<endl;
			break;
		case 2:
			cout<<"Substraction of two numbers is "<<cal.substraction(num1,num2)<<endl;
			break;
		case 3:
			cout<<"Multiplication of two numbers is "<<cal.multiplication(num1,num2)<<endl;
			break;
		case 4:
			if(num2==0)
				cout<<"Denominator is 0, hence operation is not valid"<<endl;
			else
				cout<<"Division of two number is "<<cal.division(num1,num2)<<endl;
			break;
		case 5:
			break;
		default:
			cout<<"Invalid option"<<endl;			
	}
}
