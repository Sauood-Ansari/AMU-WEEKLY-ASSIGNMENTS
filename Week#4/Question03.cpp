#include <iostream>
using namespace std;
int main()
{
	 int a=0,b=0,c=0,d=0,e=0,f=0,g=0,eval;
	cout<<"Enter the values of a,b,c,d,e,f,g  ";
	cin>>a>>b>>c>>d>>e>>f>>g;
	eval=((a + b / c * d - e)* (f - g));
	cout<<"The evaluated value of((a + b / c * d - e)* (f - g)) is "<<eval;
	return 0;
}
