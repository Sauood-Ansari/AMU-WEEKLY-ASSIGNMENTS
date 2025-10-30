#include<iostream>
using namespace std;

void transpose(int arr[][10],int row,int column)
{
	cout<<"Trnaspose of the given matrixc is...\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int row,column;
	int arr[10][10];
	cout<<"Enter the row and column of the matrix...\n";
	cin>>row>>column;
	cout<<"Enter the values of the  matrix....\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Original given matrixc is...\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	transpose(arr,row,column);
}
