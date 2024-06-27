#include<iostream>
using namespace std;
union details
{
    char name[10];
    char home_address[20];
    char hostel_address[20];
    char city[10];
    char state[10];
    char zip[10];
};
int main()
{
    details myDetails;
    cout << "Enter your hostel address: ";
    gets(myDetails.hostel_address); 
	cout << "Present address: " << myDetails.hostel_address << endl;
}

int main()
{
    details myDetails;
    cout << "Enter your name: ";
    gets(myDetails.name);
    cout << "Enter your home address: ";
    gets(myDetails.home_address);  
    cout << "Enter your hostel address: ";
    gets(myDetails.hostel_address); 
    cout << "Enter your city: ";
    gets(myDetails.city);
    cout << "Enter your state: ";
    gets(myDetails.state);
    cout << "Enter your zip: ";
    gets(myDetails.zip);
	cout <<myDetails.name << endl;
	cout <<myDetails.home_address << endl;
	cout <<myDetails.hostel_address << endl;
	cout <<myDetails.city << endl;
	cout <<myDetails.state << endl;
	cout <<myDetails.zip << endl;
}