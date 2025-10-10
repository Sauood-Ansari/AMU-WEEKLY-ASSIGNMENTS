#include<iostream>
using namespace std;
class greatest
{
	public:
		int num1,num2,greatest;
	public:
	int great(int temp_num1,int temp_num2)
	{
		this->num1=temp_num1;
		this->num2=temp_num2;
		if(this->num1>this->num2)
			this->greatest=this->num1;
		else
			this->greatest=this->num2;
		return(this->greatest);
	}
};
	int main()
	{
		greatest ob;
		int a=ob.great(15,10);
		cout<<"Greater of the two is "<<a;
	}
