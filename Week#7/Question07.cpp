#include<iostream>
using namespace std;
class sample
{
	public:
		int sam;
	void get_sam(int temp_num)
	{
		this->sam=temp_num;
	}
	void disp_pointer_reference()
	{
		cout<<"The this pointer reference is "<<this;
		//int* a=&(sam);
		//cout<<"\nThe pointer reference is "<<a;
	}
};
int main()
{
	sample ob;
	ob.get_sam(10);
	ob.disp_pointer_reference();
}
