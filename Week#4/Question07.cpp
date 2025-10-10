#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int consta,constb,constc;
	float disc,root1,root2;
	cout<<"Enter the value of the three constants a,b,c...."<<endl; 
	cin>>consta>>constb>>constc;
	if (consta==0)
	cout<<"Not a quadratic equation";
	else
	{
		disc=(constb*constb)-(4*consta*constc);
		if(disc<0)
		cout<<"Rots are imaginary";
		else if(disc==0)
		{
			root1=((constb)+sqrt(disc))/(2*consta);
			cout<<"The root is "<<root1;
		}
		else if(disc>0)
		{
			root1=((constb)-sqrt(disc))/(2*consta);
			root1=((constb)+sqrt(disc))/(2*consta);
			cout<<"The root are "<<root1<<" and "<< root2;
		}
    }
}
