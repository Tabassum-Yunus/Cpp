//                                                         USING IF-ELSE
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout << "\nEnter any alphanumeric character: ";
    cin >> c;
    int ascii = c;
    if (ascii >= 65 && ascii <=90)
        cout << "The entered character is a capital letter.";
    else if (ascii >= 97 && ascii <=122)
        cout << "The entered character is a Small letter.";
    else if (ascii >= 48 && ascii <=57)
        cout << "The entered character is a digit.";
    else
        cout << "The entered character is a special symbol.";
    return 0;
}


//                                                           USING SWITCH  

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i;
//     char c;
//     cout << "\nEnter any alphanumeric character: ";
//     cin >> c;
//     if(c>=65 && c<=90)
//         i=1;
//     else if(c>=97 && c<=122)
//         i=2;
//     else if(c>=48 && c<=57)
//         i=3;
//     switch(i)
//     {
//         case 1:
//             cout << "The entered character is a capital letter.";
//             break;
//         case 2:
//             cout << "The entered character is a small letter.";
//             break;
//         case 3:
//             cout << "The entered character is a digit.";
//             break;
//         default:
//             cout << "The entered character is a special symbol.";
//     }
// }