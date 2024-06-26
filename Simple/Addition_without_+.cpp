#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    cout << "\n";
    int no1, no2, sum;
    cout<<"Enter two number: ";
    cin >> no1 >> no2;
    // sum = log2(pow(2,no1)*pow(2,no2));
    // cout << sum;
    sum = no1;
    for(int i=1; i<=no2; i++)
        sum++;
    cout << "Sum: " << sum;
    return 0;
}