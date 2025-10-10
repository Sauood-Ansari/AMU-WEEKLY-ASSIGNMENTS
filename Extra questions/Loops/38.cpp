#include<iostream>
using namespace std;

int main()
{
	//filled diamond
	/*int temp1=6,temp2=4;
	for(int i=0;i<9;i++)
	{
		if(i<5)
		{
			temp1--;
			temp2++;
			for(int j=1;j<=9;j++)
			{
				if(j>=temp1 &&j<=temp2)
					cout<<"* ";
				else
					cout<<"  ";
			}			
			cout<<endl;
		}		
		else
		{
			temp1++;
			temp2--;
			for(int j=1;j<=9;j++)
			{
				if(j>=temp1 &&j<=temp2)
					cout<<"* ";
				else
					cout<<"  ";
			}			
			cout<<endl;
		}
	}*/
	//Hollow Diamond
	int temp1=6,temp2=4;
	for(int i=0;i<9;i++)
	{
		if(i<5)
		{
			temp1--;
			temp2++;
			for(int j=1;j<=9;j++)
			{
				if(j==temp1 || j==temp2)
					cout<<"* ";
				else
					cout<<"  ";
			}			
			cout<<endl;
		}		
		else
		{
			temp1++;
			temp2--;
			for(int j=1;j<=9;j++)
			{
				if(j==temp1 ||j==temp2)
					cout<<"* ";
				else
					cout<<"  ";
			}			
			cout<<endl;
		}
	}
}
