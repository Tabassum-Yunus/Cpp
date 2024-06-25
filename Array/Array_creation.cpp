#include<iostream>
using namespace std;
int main()
{
    int arr[10], n;
    cout << "Enter no. of elements u want to enter: ";
    cin >> n; 
    cout << "Enter array elements: ";
    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];
    }
    cout << "Entered array elements are: ";
    for(int j=1; j<=n; j++)
    {
        cout << arr[j] <<" ";
    }
}