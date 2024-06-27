#include<iostream>
using namespace std;
int main ()
{
	int a, b, temp, *ptr_a, *ptr_b;
	cout << "Enter value of first number: ";
	cin >> a;
	cout << "Enter value of second number: ";
	cin >> b;	
	ptr_a = &a;
	ptr_b = &b;
	cout << "BEFORE SWAPPING\n";
	cout << "a: " << *ptr_a << "    b: " << *ptr_b;
	cout << "\nAFTER SWAPPING\n";
	temp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = temp;
	cout << "a: " << *ptr_a << "    b: " << *ptr_b;
}