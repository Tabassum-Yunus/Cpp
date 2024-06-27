#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str, findd;
	int pos;
	cout << "Enter any string: ";
	getline(cin,str);
	cout << "Enter sub string which you want to find: ";
	getline(cin,findd);
	pos = str.find(findd);
	if(pos == -1)
		cout << "String doesn't exists.";
	else
		cout << " index of '"<< findd <<"' : " << pos+1;
}


/*											Q5 WITHOUT PREDEFINED FUNCTION
#include<iostream>
using namespace std;
int main()
{
	string str, find ;
	int pos;
	cout << "Enter any string without spaces: ";
	cin >> str;
	cout << "Enter sub string which you want to find: ";
	cin >> find;
	int len = str.length();
	int len1 = find.length();
	int j=0, c=0,i;

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
	cout << "String exists and its stating index: " << i;
else	
	cout << "String doesnot found.";
	return 0;
}
*/