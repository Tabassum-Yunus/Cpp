#include<iostream>
using namespace std;
struct no{
    int a,b;
};

int main()
{
    no str;
    int operation;
    cout << "Enter two numbers: ";
    cin >> str.a >> str.b;
    cout << " 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division";
    cout << "\n Enter operation you want to perform: ";
    cin >> operation;
    switch (operation)
    {
    case 1:
        cout << "Addition: " << str.a+str.b;
        break;
    case 2:
        cout << "Subtraction: " << str.a-str.b;
        break;
    case 3:
        cout << "Multiplication: " << str.a*str.b;
        break;
    case 4:
        cout << "Division: " << str.a/str.b;
        break; 
    default:
        cout << "SORRY! wrong choice.";
        break;
    }
}