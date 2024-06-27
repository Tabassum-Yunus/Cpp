#include<iostream>
using namespace std;
int main()
{
    int arr[10], n, *ptr = arr;
    cout << "Enter no. of elements u want to enter: ";
    cin >> n; 
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> *(ptr+i);
    }
    cout << "Entered array elements are: ";
    for(int j=0; j<n; j++)
    {
        cout << *(ptr+j) <<" ";
    }
}