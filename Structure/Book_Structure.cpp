#include<iostream>
#include<string>
using namespace std;
struct book
{
	int book_id;
	string title;
	string author;
	float price;
};
book print(book book1)
{
	cout << "Enter book id: ";	cin >> book1.book_id; 
	cout << "Enter title: " ;	cin >> book1.title;
	cout << "Enter author: ";	cin >> book1.author;
	cout << "Enter price: ";	cin >> book1.price;
	return book1;
}
int main()
{
	book mybook;
	book mine = print(mybook);
	cout << endl <<"	BOOK DETAILS" << endl;
	cout << "Book Id: "<< mine.book_id << endl;
	cout << "Book Title: "<< mine.title << endl;
	cout << "Book Author: "<< mine.author << endl;
	cout << "Book Price: "<< mine.price << endl;
	
}