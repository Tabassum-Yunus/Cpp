#include <iostream>
using namespace std;
int main()
{
    cout << "\n";
    int no;
    cout<<"Enter a number: ";
    cin >> no;
    no % 2 == 0? (cout << no << " is a even number") : (cout << no << " is a odd number");
    cout << "\n";
    return 0;
}