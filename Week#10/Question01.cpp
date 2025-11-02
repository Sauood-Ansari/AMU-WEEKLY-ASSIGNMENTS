#include<iostream>
using namespace std;

struct complex
{
	int re,im;
	void setter()
	{
		cout<<"Enter the real part\n";
		cin>>re;
		cout<<"Enter the imaginary part\n";
		cin>>im;
		cout<<endl;
	}
	void disp()
	{
		cout<<"The complex number is "<<re<<"+"<<im<<"i";
		cout<<endl;
	}
	void add_sub(complex c1,complex c2)
	{
		int sum_re=c1.re+c2.re;
		int sum_im=c1.im+c2.im;
		signed int sub_re=c1.re-c2.re;
		signed int sub_im=c1.im-c2.im;
		cout<<"\nSum of the two complex number is: "<<sum_re<<"+"<<sum_im<<"i\n";
		if(sub_im<0)
			cout<<"\nDifference of two complex number is: "<<sub_re<<sub_im<<"i\n";
		else
			cout<<"\nDifference of two complex number is: "<<sub_re<<"+"<<sub_im<<"i\n";
	}
	void mult(complex c1,complex c2)
	{
		signed int mult_re=(c1.re*c2.re)-(c1.im*c2.im);
		signed int mult_im=(c1.re*c2.im)+(c1.im*c2.re);
		if(mult_im<0)
			cout<<"\nMultiplication of two complex number is: "<<mult_re<<mult_im<<"i\n";
		else
			cout<<"\nMultiplication of two complex number is: "<<mult_re<<"+"<<mult_im<<"i\n";
	}
};

int main()
{
	struct complex c;
	struct complex c1;
	struct complex c2;
	int opt;
	do
	{
		cout<<"\nChoose any of thre following \n";
		cout<<"1.Reading a complex number\n";
		cout<<"2.Display of the complex number\n";
		cout<<"3.Addition and substraction of two complex number\n";
		cout<<"4.Multiplication of two complex number\n";
		cout<<"5.To exit\n";
		cin>>opt;
		if(opt==1)
			c.setter();
		else if(opt==2)
			c.disp();
		else if(opt==3)
		{
			c1.setter();
			c2.setter();
			c.add_sub(c1,c2);
		}
		else if(opt==4)	
			{
			c1.setter();
			c2.setter();
			c.mult(c1,c2);
		}
		else if(opt==5)
			break;		
		else
			cout<<"Invalid Input\n";
	}while(opt!=5);
	cout<<"Thank you\n";
}
