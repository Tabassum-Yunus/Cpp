//												  using find() & replace()
#include<iostream>
#include<string>
using namespace std;
string find_replace(string str, string findd, string replace, int pos)
{
	pos = str.find(findd);
	if(pos == -1)
		return "String doesn't exists.";
	return str.replace(pos,findd.length(),replace);
}
int main()
{
	string str, findd, replace, updated_str;
	int pos;
	cout << "Enter any string without spaces: ";
	cin >> str;
	cout << "Enter sub string which you want to find: ";
	cin >> findd;
	cout << "Enter string which you want to replace with: ";
	cin >> replace;
	//if(findd.length() != replace.length())
		cout << "Not Possible, length doesn't match.";
	else
		cout << "Replaced string: " << find_replace(str, findd, replace, pos);
}



/*													Q3   WITHOUT PREDEFINED FUNCTION
#include<iostream>
using namespace std;
int main()
{
	string str, find, replace, updated_str;
	int pos;
	cout << "Enter any string without spaces: ";
	cin >> str;
	cout << "Enter sub string which you want to find: ";
	cin >> find;
	cout << "Enter string which you want to replace with: ";
	cin >> replace;
	int len = str.length();
	int len1 = find.length();
	int j=0, c=0,i;
	
	if(find.length() == replace.length())
	{
	for(i=0; i< len; i++)
	{
		if (find[0] == str[i])
		{
			c++;
			for(int k=i+1,j=1; j<len1; j++,k++)
			{
				if(find[j] == str[k])
				{
					c++;	
					continue;
				}
				else 	
					break;
			}
			break;
		}
	}
if(c==len1)
{
	for(int l=i,m=0; m<len1; l++,m++)
	{
		str[l] = replace[m];
	}
	cout<< endl<< "Updated str:";
	for(int n=0; n<len; n++)
	{
		cout << str[n];
	}
}
else
	cout << "String doesnot found.";
}
else
	cout<< "Length doesn't match.";
	return 0;
}
*/

