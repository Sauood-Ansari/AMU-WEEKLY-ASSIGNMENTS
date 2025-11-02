#include <iostream>
#include <string>
using namespace std;

struct Date {
	int day;
	int month;
	int year;
};

struct Person{
	string name;
	Date dob;
};

void setvalue(Person &p){
	cout << "Enter the name of the person: ";
	getline (cin, p.name);
	
	cout << "Enter the DOB: " <<endl;
	
	cout << "Enter the day: ";
	cin >> p.dob.day;
	
	cout << "Enter the month: ";
	cin >> p.dob.month;
	
	cout << "Enter the year: ";
	cin >> p.dob.year;	
}

void printvalue(Person &p){
	cout << "Name: " << p.name <<endl;
	cout << "DOB: " << endl;
	
	if (p.dob.day<10) cout << "0";
	cout << p.dob.day << "/";
	if (p.dob.month<10) cout << "0";
	cout << p.dob.month << "/" ;
	cout << p.dob.year;
}
int main(){
	Person p;
	
	cout << "Set Person details: "<<endl;
	setvalue(p);
	
	cout << "-----Person Details-----"<<endl;
	printvalue(p);
	return 0;
}
