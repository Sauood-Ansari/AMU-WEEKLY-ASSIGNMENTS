#include<iostream>
using namespace std;
class flight

{
	public:
		int flight_no,fare;
		string source,destination;
	public:
	void get_data(int temp_flight_no,int temp_fare,string temp_source,string temp_destination)
	{
		this->flight_no=temp_flight_no;
		this->fare=temp_fare;
		this->source=temp_source;
		this->destination=temp_destination;
	}
	void disp()
	{
		cout<<"\nFlight number is "<<this->flight_no<<"\nSource is "<<this->source<<"\nDestination is "<<this->destination<<"\nFare is "<<this->fare;
		cout<<endl;
	}
};
int main()
{
	flight fl;
	fl.get_data(84884,2400,"Delhi","Mumbai");
	fl.disp();
}
