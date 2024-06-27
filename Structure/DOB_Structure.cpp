#include<iostream>
#include<string>
using namespace std;
struct Date{
	int day;
	int month;
	int year;
};
struct DOB{
	string name;
	Date birth_date;
};
int main()
{
	DOB dob;
	cout << "Enter name: ";		getline(cin,dob.name);
	cout << "Enter birth day: "; 	cin >> dob.birth_date.day;
	cout << "Enter birth month: "; 	cin >> dob.birth_date.month;
	cout << "Enter birth year: ";	cin >> dob.birth_date.year;
	cout <<"Name: " << dob.name << endl;
	cout << "Date of Birth: " << dob.birth_date.day << "/" << dob.birth_date.month << "/" << dob.birth_date.year;
}