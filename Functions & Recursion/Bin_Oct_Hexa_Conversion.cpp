#include<iostream>
using namespace std;
string binary(int n){
    string bin="";     char ch;     int rem=0;
    while(n!=0)
    {
        rem = n%2;      n/=2;
        ch = rem + 48;
        bin = ch+bin;
    }
    return bin;
}
string octal(int n){
     string oct="";     char ch;     int rem=0;
    while(n!=0)
    {
        rem = n%8;      n/=8;
        ch = rem + 48;
        oct = ch+oct;
    }
    return oct;
}

string hexadecimal(int n){
    string hexa="";     char ch;     int rem=0;
     while(n!=0)
    {
        rem = n%16;      n/=16;
        if(rem<10)
            ch = rem + 48;
        else
            ch = rem + 55;
        hexa = ch+hexa;
    }
    return hexa;
}
int main()
{
    int dec, bin, oct, hexa,  operation;
    cout << "Enter a number: ";
    cin >> dec;
    cout << " 1. Binary equivalent \n 2. Octal equivalent \n 3. Hexadecimal equivalent";
    cout << "\n Enter operation you want to perform: ";
    cin >> operation;
    switch (operation)
    {
    case 1:
        cout << "Binary equivalent: " << binary(dec);
        break;
    case 2:
        cout << "Octal equivalent: " << octal(dec);
        break;
    case 3:
        cout << "Hexadecimal equivalent: " << hexadecimal(dec);
        break;
    default:
        cout << "SORRY! wrong choice.";
        break;
    }
}
