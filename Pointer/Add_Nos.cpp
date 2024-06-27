#include<iostream>
using namespace std;
int main()
{
	int a, b, *ptr_a, *ptr_b, sum;
	cout << "Enter value of first number: ";
	cin >> a;
	cout << "Enter value of second number: ";
	cin >> b;	
	ptr_a = &a;
	ptr_b = &b;
	sum = *ptr_a + *ptr_b;
	cout << "Sum: " << sum;
}