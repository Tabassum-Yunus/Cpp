#include<iostream>
using namespace std;
int main()
{
	string str, *ptr=&str;	
	int vow=0;
    char ch;
    cout << "Enter string without any space: ";
    cin >> str;
	for(int i= (*ptr).length(); i>=0; i--)
	{
        ch = str[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vow++;
    }
    cout << "No. of vowels in " << *ptr << ": " << vow;
}



// #include<iostream>
// #include<cstring>
// #include<string>
// using namespace std;
// int main()
// {
// 		char str[20], *ptr;	
// 		ptr=str;
// 		int vow=0;
//     	char ch;
//     	cout << "Enter string: ";
//     	gets(str);
// 		int len = strlen(str);
// 		for(int i=0; i<len; i++)
// 		{
//        	 ch = *(ptr+i);
//        	 if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//             vow++;
//     	}
//     	cout << "No. of vowels in " << *ptr << ": " << vow;
// }