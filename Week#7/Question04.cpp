#include<iostream>
using namespace std;
class pntr_obj
{
	int roll_no;
	string name;
	public:
	void set_data(int temp_roll,string temp_name)
	{
		this->roll_no=temp_roll;
		this->name=temp_name;
	}
	void print()
	
	{
		cout<<"\nRoll no is "<<this->roll_no<<" and,name is "<<this->name;
	}
};
	int main()
	{
		pntr_obj obj1,obj2;
		obj1.set_data(151,"Sauood");
		obj1.print();
		obj2.set_data(150,"Asfar");
		obj2.print();
	}
