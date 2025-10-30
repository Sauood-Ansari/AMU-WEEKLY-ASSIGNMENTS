#include<iostream>
using namespace std;

int recFact(int num)
{
	if(num<0)	
		return 0;	
	else if(num==0||num==1)
		return 1;
	else
		return (num*recFact(num-1));
}

int nonRecFact(int num)
{
	int i,fact=1;
	if(num<0)	
		return 0;	
	else if(num==0||num==1)
		return 1;
	else
	{
		for(i=1;i<=num;i++)
		{
			fact*=i;
		}
		return fact;
	}
}

int nonRecGCD(int num1,int num2)
{
	int num,GCD=0;
	(num1<=num2)?num=num1:num=num2;
	for(int i=1;i<=num;i++)
	{
		if(num1%i==0 && num2%i==0)	
		{
			GCD=i;
		}
	}	
	return GCD;
}

int recGCD(int num1,int num2,int temp)
{
	if(num1%temp==0 &&num2%temp==0 && temp!=0)
		return(temp);
	else
		return recGCD(num1,num2,--temp);
}

int main()
{
	int num,num1,num2,GCDnonrec,GCDrec,temp;
	
	cout<<"Enter the numbers to find its factorial by both methods...\n";
	cin>>num;	
	
	if(num<0)
		cout<<"Invalid Input.";
	else
	{
		int fact1=recFact(num);
		int fact2=nonRecFact(num);
		cout<<"\nFactorial of the number "<<num<<" by recursive method is: "<<fact1;
		cout<<"\nFactorial of the number "<<num<<" by non-recursive method is: "<<fact2<<endl<<endl<<endl;
	}
	cout<<"Enter two number to find their GCD...\n";
	cin>>num1>>num2;
	(num1<=num2)?temp=num1:temp=num2;
	
	if(num1==0 )
		cout<<"GCD by both the methods are "<<num2;
	else if(num2==0 )
		cout<<"GCD by both the methods are "<<num1;
	else
	{
		GCDnonrec=nonRecGCD(num1,num2);
		if(GCDnonrec==0)
			cout<<"No GCD found";
		else
			cout<<"\n\n\nGCD of the number "<<num1<<" and "<<num2<<" by non-recursive method is "<<GCDnonrec<<endl;
		
		GCDrec=recGCD(num1,num2,temp);
		if(GCDrec==0)
			cout<<"No GCD found";
		else
		
			cout<<"GCD of the number "<<num1<<" and "<<num2<<" by recursive method is "<<GCDrec;
	}
}
	
