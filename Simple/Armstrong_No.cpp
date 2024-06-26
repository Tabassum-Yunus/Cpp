#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, no, n, d=0, rem, sum=0;
    cout << "Enter a no.: ";
    cin >> num;
    no = num;
    n = num;
    while(no!=0)
    {
        no = no/10;
        d++;
    }
    while(n!=0)
    {
        rem = n%10;
        sum = sum + pow(rem,d);
        n = n/10;
    }
    if(num==sum)
        cout << num << " is an armstrong no.";
    else
        cout << num << " is not an armstrong no.";
    return 0;
}
