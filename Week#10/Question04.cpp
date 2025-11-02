#include<iostream>
#include<cstring>
using namespace std;

union address
{
	char name[50];
	char home_address[50];
	char hostel_address[50];
	char city[25];
	char state[25];
	char zip[6];	
};


int main()
{
	address ad;
	
	cout<<"Present address is ";
	
	strcpy(ad.name,"Sauood Ansari");
	cout<<"\nName is: "<<ad.name;
	
	//strcpy(ad.home_address,"Lohiya Colony, Civil Lines");
	//cout<<"\nHome Address is: "<<ad.home_address;
	
	strcpy(ad.hostel_address,"VM Hall AMU Purani Chungi");
	cout<<"\nHostel Address is: "<<ad.hostel_address;

	strcpy(ad.city,"Aligarh");
	cout<<"\nCity is: "<<ad.city;

	strcpy(ad.name,"Uttar Pradesh");
	cout<<"\nState is: "<<ad.state;

	strcpy(ad.name,"231001");
	cout<<"\nZIP code is: "<<ad.zip;
}
