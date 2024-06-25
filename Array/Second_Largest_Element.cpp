#include<iostream>
using namespace std;
int main()
{
    int arr[10], n, temp;
    cout << "Enter no. of elements u want to enter: ";
    cin >> n; 
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]!=arr[i-1])
        {
            cout << "Second largest integer: " << arr [i-1];
            break;
        }       
    }
}
