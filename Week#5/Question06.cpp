#include<iostream>
using namespace std;
void Addition(int tr,int tc)
{
	int i,j;
	int ar1[tr][tc],ar2[tr][tc],sum[tr][tc];
	cout<<"Enter the elements of first matrix..."<<endl;
	for(i=0;i<tr;i++)
	{
		for(j=0;j<tc;j++)
		{
			cin>>ar1[i][j];			
		}
	}
	cout<<"Enter the elements of second matrix..."<<endl;
	for(i=0;i<tr;i++)
	{
		for(j=0;j<tc;j++)
		{
			cin>>ar2[i][j];			
		}
	}
	for(i=0;i<tr;i++)
	{
		for(j=0;j<tc;j++)
		{
			sum[i][j]=ar1[i][j]+ar2[i][j];
		}
	}
	cout<<"Sum of the twqo matrix is..."<<endl;
	for(i=0;i<tr;i++)
	{
		for(j=0;j<tc;j++)
		{
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
}
void multiplication(int tr1,int tc1,int tc2)
{
	int i,j,k,prod;
	int ar1[tr1][tc1],ar2[tc1][tc2],pro[tr1][tc2];
	cout<<"Enter the elements of first matrix..."<<endl;
	for(i=0;i<tr1;i++)
	{
		for(j=0;j<tc1;j++)
		{
			cin>>ar1[i][j];			
		}
	}
	cout<<"Enter the elements of second matrix..."<<endl;
	for(i=0;i<tc1;i++)
	{
		for(j=0;j<tc2;j++)
		{
			cin>>ar2[i][j];			
		}
	}
	for(i=0;i<tr1;i++)
	{
		for(j=0;j<tc2;j++)
		{
			prod=0;
			for(k=0;k<tc1;k++)
			{
				prod+=ar1[i][k]*ar2[k][j];				
			}
			pro[i][j]=prod;
		}
	}
	cout<<"The product of two matrix is..."<<endl;
	for(i=0;i<tr1;i++)
	{
		for(j=0;j<tc2;j++)
		{
			cout<<pro[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
int main()
{
	int r1,c1,r2,c2,temp;
	cout<<"Enter the rowws and coloum of first matrix..."<<endl;
	cin>>r1>>c1;
	cout<<endl;
	cout<<"Enter the rowws and coloum of second matrix..."<<endl;
	cin>>r2>>c2;
	cout<<endl;
	cout<<"Choose the operation to be performed.."<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.Multiplication"<<endl;
	cin>>temp;
	if(temp==1)
	{
		if(r1==r2 && c1==c2)
		{
			Addition(r1,c1);
		}
		else
		cout<<"Matrix order not appropriate";
	}	
	else if(temp==2)
	{
		
		if(c1==r2)
		{
			multiplication(r1,c1,c2);
		}
		else
		cout<<"Matrix order not appropriate";
	}
	else
	cout<<"Wrong Option";
	return 0;
}
