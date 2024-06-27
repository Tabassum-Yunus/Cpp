#include<iostream>
using namespace std;
string delete_chars(string str, int pos, int no_of_chars);
int main()
{
	string str, updated_str;
	int pos, no_of_chars;
	cout << "Enter any string without spaces: ";
	cin >> str;
	cout << "Enter position from where want to delete characters: ";
	cin >> pos;
	cout << "Enter no. of characters want to delete: ";
	cin >> no_of_chars;
	//updated_str = 
	cout << "Updated string: " << delete_chars(str, pos, no_of_chars);
	return 0;
}
string delete_chars(string str, int pos, int no_of_chars)
{
	string return_str;
	if( (pos<0) || (pos>str.length()) )
		return "NOt possible";
	return str.erase(pos-1, no_of_chars);
}



/*														Q1 ii 		WITHOUT PREDEFINED FUNCTION
#include<iostream>
using namespace std;
string delete_chars(string str, int pos, int no_of_chars);
int main()
{
	string str, updated_str;
	int pos, no_of_chars;
	cout << "Enter any string without spaces: ";
	cin >> str;
	cout << "Enter position from where want to delete characters: ";
	cin >> pos;
	cout << "Enter no. of characters want to delete: ";
	cin >> no_of_chars;
	updated_str = delete_chars(str, pos, no_of_chars);
	cout << "Updated string: " << updated_str;
	return 0;
}

string delete_chars(string str, int pos, int no_of_chars)
{
	string return_str;
	if( (pos<0) || (pos>str.length()) )
		return "NOt possible";
	else
		{
			for(int i=0; i<pos-1; i++)
			{
				return_str[i] = str[i];
			}
			for(int i=0,j=pos; i<(pos+no_of_chars)-1; i++)
			{
				return_str[j] = str[i];
			}
		}
	return return_str;
}
*/