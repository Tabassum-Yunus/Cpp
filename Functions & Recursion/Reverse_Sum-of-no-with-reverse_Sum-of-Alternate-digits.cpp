#include<iostream>
#include<cmath>
using namespace std;
int reverse(int n)
{
    int num=n, d=0, rem=0, rev=0;
    while(n!=0)
    {
        n /=10;
        d++;
    }
    while (d>=0)
    { 
        rem =num%10;
        rev += rem*pow(10,d-1);
        num /=10;
        d--;
    }
    return rev;
}

int sum_reverse(int n)
{
    int rev = reverse(n);
    return rev+n;
}

void sum_alternate(int n)
{
    int *ptr, num=n, d=0, rem=0, even_sum=0, odd_sum=0;
    while(n!=0)
    {
        n /=10;
        d++;
    }
    while(d>0)
    {
        rem = num%10;
        if(d%2==0)
            even_sum += rem;
        else
            odd_sum += rem;
        d--;
        num /=10;
    }
    cout << even_sum << " and " << odd_sum;
    // cout << even_sum << "  " << odd_sum << "";
    // ptr = &odd_sum;
    // ptr++;
    // ptr = &even_sum;
    // return ptr;
}

int main()
{
    int no, operation, *ptr;
    cout << "Enter a number: ";
    cin >> no;
    cout << " 1. Reverse of number \n 2. Sum of number with its reverse. \n 3. Sum of alternative digits";
    cout << "\n Enter operation you want to perform: ";
    cin >> operation;
    switch (operation)
    {
    case 1:
        cout << "Reverse of " << no << ": " << reverse(no);
        break;
    case 2:
        cout << "Sum of " << no << " with its reverse: " << sum_reverse(no);
        break;
    case 3:
        //ptr = sum_alternate(no);
        cout << "Sum of alternative digits of " << no << ": ";
        sum_alternate(no);  //*(ptr) << " and " << *(ptr++);
        break;
    default:
        cout << "SORRY! wrong choice.";
        break;
    }
}
