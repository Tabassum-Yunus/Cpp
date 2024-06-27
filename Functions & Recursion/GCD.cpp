//                                                        NON RECURSIVE
#include<iostream>
using namespace std;
int divisor(int a, int b)
{
    if(a==b)
        return a;
    if(a==1 || b==1)
        return 1;
    int rem = a%b;
    while(rem!=0)
    {
        a = b;
        b = rem; 
        rem = a%b;
    }
    return b;
}
int main()
{
    int no1, no2;
    cout << "Enter two numbers: ";
    cin >> no1 >> no2;
    cout << "GCD of "<< no1 <<" & " << no2 << ": " << divisor(no1,no2);
}




/*                                                        RECURSIVE
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int no1, no2;
    cout << "Enter two numbers: ";
    cin >> no1 >> no2;
    cout << "GCD of "<< no1 <<" & " << no2 << ": " << gcd(no1,no2);
    return 0;
}
*/