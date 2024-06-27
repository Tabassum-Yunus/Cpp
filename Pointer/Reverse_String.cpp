#include<iostream>
using namespace std;
int main()
{
	string str="Tabassum Yunus", *ptr;	
	ptr = &str;
	cout << "Original string: " << *ptr;
	cout << "\nReversed string: ";
	for(int i= str.length()-1; i>=0; i--)
		cout << str[i];
}


															 
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
// 	char str[20], *ptr;	
// 	ptr = str;
// 	cout << "Enter string: ";
// 	gets(str);
// 	int len = strlen(str);
// 	cout << "Original string: " << str;
// 	cout << "\nReversed string: ";
// 	for(int i= len-1; i>=0; i--)
// 	{
// 		cout << *(ptr+i) ;
// 	}
// }