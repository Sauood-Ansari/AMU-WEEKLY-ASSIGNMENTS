#include<iostream>
#include<string>
using namespace std;

struct monthlyPay
{
	public:

	static const float daPc=0.52;
	string name[100];
	float basicPay[100];
	float grossSalary[100];
	
	public:
		
	void getData()
	{
		cout<<"Enter the names of 100 employees along with their basic pay \n";
		for(int i=0;i<5;i++)			
		{
			cin.ignore();
			getline(cin,name[i]);
			cin>>basicPay[i];
		}
		cout<<endl;
	}
		
	void compute()
	{		
		for(int i=0;i<5;i++)
		{
			int temp=daPc*basicPay[i];
			grossSalary[i]=basicPay[i]+temp;
		}
	}
	
	void disp()
	{
		cout<<"Name of 100 Employees along with there gross salary,  \n";
		for(int i=0;i<5;i++)			
		{
			cout<<"Name: "<<name[i]<<" and salary is: "<<grossSalary[i]<<endl;
		}
	}
};

int main()
{
	struct monthlyPay mp;
	mp.getData();
	mp.compute();
	mp.disp();
	
}
