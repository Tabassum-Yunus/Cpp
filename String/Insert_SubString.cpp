#include<iostream>
using namespace std;
string insert_sub_string(string str, string sub_str, int pos)
{
	if( (pos<0) || (pos>str.length()) )
		return "NOt possible";
	return str.insert(pos-1,sub_str);
}
int main()
{
	string str, sub_str,inserted_str;
	int pos;
	cout << "Enter any string without spaces: ";
	cin >> str;
	cout << "Enter sub string which you want to enter: ";
	cin >> sub_str;
	cout << "Enter position where want to to insert the substring: ";
	cin >> pos;
	inserted_str = insert_sub_string(str,sub_str,pos);
	cout << "Inserted string: " << inserted_str;
	return 0;
}