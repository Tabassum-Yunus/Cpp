#include<iostream>
using namespace std;
int main()
{
	string str, *ptr=&str;	
	int vow=0;
    char ch;
    cout << "Enter string without any space: ";
    cin >> str;
    //for(int i=1; i<='\0';i++)
    cout << "Length of entered string: " << (*ptr).length();
}