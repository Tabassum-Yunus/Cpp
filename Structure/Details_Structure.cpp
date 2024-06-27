#include<iostream>
using namespace std;
struct details
{
    string name;
    string branch;
    int year;
};

int main()
{
    details MyDetails;
    cout << "Enter your name: ";
    getline(cin, MyDetails.name);
    cout << "Enter your branch: ";
    getline(cin, MyDetails.branch);
    cout << "Enter year: ";
    cin >> MyDetails.year;
    cout << " Name: " << MyDetails.name << "\n Branch: " << MyDetails.branch << "\n Year: " << MyDetails.year;
}