#include<iostream>
using namespace std;
int main()
{
	int a=5, *ptr_a;	
	ptr_a = &a;
	cout << "Value of integer: " << a;
	cout << "\nIncrement integer using pointer: " << (*ptr_a)+1;
	cout << "\nDecrement integer using pointer: " << (*ptr_a)-1;
}