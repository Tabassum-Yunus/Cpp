#include<iostream>
using namespace std;
int main()
{
    int arr[20], n, pos=0, neg=0, even=0, odd=0;
    cout << "Enter no. of elements u want to enter: ";
    cin >> n; 
    cout << "Enter array elements: ";
    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];
    }

    cout << "POSITIVE INTEGERS: ";
    for(int i=1; i<=n; i++)
    {
        if(arr[i]>0)
        {
            pos++; 
            cout << arr[i] << " ";
        }
    }
    cout << "\nPositive count: " << pos;

    cout << "\nNEGATIVE INTEGERS: ";
    for(int i=1; i<=n; i++)
    {
        if(arr[i]<0)
        {
            neg++; 
            cout << arr[i] << " ";
        }
    }
    cout << "\nNegative count: " << neg;

    cout << "\nEVEN INTEGERS: ";
    for(int i=1; i<=n; i++)
    {
        if(arr[i]%2 == 0)
        {
            even++; 
            cout << arr[i] << " ";
        }
    }
    cout << "\nEven count: " << even;

    cout << "\nODD INTEGERS: ";
    for(int i=1; i<=n; i++)
    {
        if(arr[i]%2 != 0)
        {
            odd++; 
            cout << arr[i] << " ";
        }
    }
    cout << "\nOdd count: " << odd;
    return 0;
}
