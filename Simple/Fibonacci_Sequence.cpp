#include <iostream>
using namespace std;
int main()
{
    cout << "\n";
    int term1 = 0, term2 = 1, term3, n;
    cout << "Enter the no of terms u want in fibonacci series: ";
    cin >> n;
    cout << "First " << n << " terms of fibonacci series are: ";
    cout << term1 <<" " << term2;
    for (int i=3; i<=n; i++)
    {
        term3 = term1+term2;
        cout << " " << term3;
        term1 = term2;
        term2 = term3;
    }
    return 0;
}