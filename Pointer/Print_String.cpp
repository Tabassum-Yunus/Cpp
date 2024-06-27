#include<iostream>
using namespace std;
int main()
{
	string str="Tabassum Yunus", *ptr_a;	
	ptr_a = &str;
	cout << "String using pointer: " << *ptr_a;
}