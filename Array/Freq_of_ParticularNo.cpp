#include<iostream>
using namespace std;
int main()
{
    int arr[20], n, no, freq=0;
    cout << "Enter no. of elements u want to enter: ";
    cin >> n; 
    cout << "Enter array elements: ";
    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number whose frequency u want to find: ";
    cin >> no;
    for(int i=0; i<=n; i++)
    {
        if(arr[i] == no)
            freq++;
    }
    if(freq>0)
        cout << "Frequency of " << no << " is: " << freq;
    else
        cout <<"Sorry! " << no <<" doesn't exists in array";
   