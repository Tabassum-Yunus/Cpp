#include<iostream>
using namespace std;
bool palindrome(string str);
int main()
{
	string str;
	bool is_palindrome;
	cout<< "Enter any string without spaces: ";
	cin >> str;
	is_palindrome = palindrome(str);
	if(is_palindrome)
		cout << "YES! it is a palindrome string.";
	else
		cout << "Nope, it's not.";
	return 0;
}
bool palindrome(string str)
{
	int size = str.length();
	for(int i=0; i<size/2; i++)
	{
		if(str[i] != str[size-i-1])
			return false;
	}
	return true;

}