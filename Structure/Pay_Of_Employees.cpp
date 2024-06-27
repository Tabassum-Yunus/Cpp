#include<iostream>
using namespace std;
struct employee
{
	string name;
	float basic_pay;
	float DA;
	float gross_sal = basic_pay + DA;
};

int main()
{
	employee e[100];
	int n;
	cout << "Enter no. of employees: ";
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cout << "Enter name & basic pay of " << i+1 << " employee: ";
		cin >> e[i].name >> e[i].basic_pay;
		e[i].DA = 0.52 * e[i].basic_pay;
		e[i].gross_sal = e[i].basic_pay + e[i].DA;
	}
	for(int i=0; i<n; i++)
	{
		cout << "Name & Gross Salary of " << i+1 << " employee: " << e[i].name <<"  "<< e[i].gross_sal << endl;
	}
}
