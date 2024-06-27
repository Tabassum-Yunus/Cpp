#include<iostream>
using namespace std;
int main()
{
    int arr[10], n, *ptr = arr, sum=0;
    cout << "Enter no. of elements u want to enter: ";
    cin >> n; 
    cout << "Enter array elements: ";
    for(int i=1; i<=n; i++)
    {
        cin >> *(ptr+i);
    }
    cout << "Sum of array elements: ";
    for(int j=1; j<=n; j++)
    {
        sum = sum + *(ptr+j);
    }
    cout << sum;
}