#include<iostream>
using namespace std;
int main()
{
	string str1="Tabassum " ,str2="Yunus", *ptr_a, *ptr_b;	
	ptr_a = &str1, ptr_b =&str2;
	cout << "First string: " << *ptr_a;
	cout << "\nSecond string: " << *ptr_b;
	cout << "\nConcatenated string: " << (*ptr_a + *ptr_b);
}