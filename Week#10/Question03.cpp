#include<iostream>
#include<string>
using namespace std;

struct Book
{
	public:
		
	string title,authorName;
	int book_id;
	float price;
	Book(string t,string a,int bi,int p)
	{
		title=t;
		authorName=a;
		book_id=bi;
		price=p;
	}		
}; 

void Disp(Book b)
{
	cout<<"Title of the book is: "<<b.title<<endl;
	cout<<"Author's name is: "<<b.authorName<<endl;
	cout<<"Book ID is: "<<b.book_id<<endl;
	cout<<"Price of the book is: "<<b.price<<endl;
}

int main()
{
	struct Book b("A Girl in Room 105","Chetan Bhagat",87468476,199.99);
	Disp(b);
	
}
