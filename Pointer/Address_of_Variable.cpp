#include<iostream>
using namespace std;
int main()
{
	int a, *ptr_a;	
	ptr_a = &a;
	cout << "Address of variable using pointer: " << ptr_a;
}