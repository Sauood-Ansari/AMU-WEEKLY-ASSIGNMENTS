#include<iostream>
#include<cmath>
using namespace std;

char start='A',end='C',temp='B';
void hanoi_nonRecursive(int n,int m)
{
	int i;
	char from,to;
	for(i=1;i<=m;i++)
	{
		if(n%2==0)
		{
			int drop=temp;
			temp=end;
			end=drop;
		}
		if(i%3==1)
		{
			from=start;
			to=end;
		}
		 if(i%3==2)
		{
			from=start;
			to=temp;
		}
		else
		{
			from=temp;
			to=end;
		}
		
		cout<<"Disk moves from "<<from<<" to "<<to<<endl;
	}
}

void hanoi_recursive(int n,char start,char end,char temp)
{

	if(n==1)
	{
		cout<<"Disk "<<n<<" moves from "<<start<<" to "<<end<<endl;
		return ;
		
	}
	hanoi_recursive(n-1,start,temp,end);

	cout<<"Disk "<<n<<" moves from "<<start<<" to "<<end<<endl;

	hanoi_recursive(n-1,temp,end,start);	
}

int main()
{
	int n,moves,opt;
	cout<<"Enter the number of disk...\n";
	cin>>n;
	moves=pow(2,n)-1;
	cout<<"Choose any one method to solve the tower of hanoi problem\n";
	cout<<"1.Non Recursive\n";
	cout<<"2.Recursive\n";
	cin>>opt;
	if(opt==1)
		hanoi_nonRecursive(n,moves);
	else if(opt==2)
		hanoi_recursive(n,'A','C','B');
	else
	cout<<"Invald option";
}
