#include<iostream>
using namespace std;

class FourDigit
{
	private:
		int num;
	
	public:
	
	void GetData()
	{
		cout<<"Enter the four digit number\n";
		cin>>num;
		int dup=num,count=0;
		while(dup>0)
		{
			dup=dup/10;
			count++;
		}
		if(count!=4)
		{
			cout<<"Entered number is not four digit\n";		
			GetData();
		}
	}
		
	int FirstOperation()
	{
		int dup=num,sum=0;
		while(dup>0)
		{
			int a=dup%10;
			sum=(sum*10)+a;
			dup=dup/10;
		}
		return sum;
	}
	
	void SecondOperation()
	{
		int dup=num,sum=0;
		while(dup>0)
		{
			int a=dup%10;
			sum+=a;
			dup=dup/10;
		}
		cout<<"Sum of integer is "<<sum<<endl;
		cout<<"Reverse is "<<FirstOperation()<<endl;
	}
	
	void ThirdOperation()
	{
		int dup=num,sumEven=0,sumOdd=0,temp=1;;
		while(dup>0)
		{
			int a=dup%10;
			if(temp%2==0)
				sumOdd+=a;
			if(temp%2!=0)
				sumEven+=a;
			dup=dup/10;
			
			temp++;
		}
		cout<<"Sum of odd alternative integer is "<<sumOdd<<endl;
		cout<<"Sum of even alternative integer is "<<sumEven<<endl;
	}
};

int main()
{
	int opt;
	FourDigit fd;
	do
	{
		fd.GetData();
		cout<<"Choose an option from the given list\n";
		cout<<"1.Reverse of that no. \n";
		cout<<"2.Sum of number with its reverse.\n";
		cout<<"3.Sum of alternative digits (1st digit + 3rd digit and 2 digit+4 digit)\n";\
		cout<<"4.Exit\n";
		cin>>opt;
		switch (opt)
		{
			case 1:
				cout<<"Reverse of the given number is "<<fd.FirstOperation()<<endl;
				break;
			case 2:
				fd.SecondOperation();
				break;
			case 3:
				fd.ThirdOperation();
				break;
			case 4:
				break;
			default:
				cout<<"Invalid Input\n";
		}
	}while(opt!=4);
	return 0;
}
