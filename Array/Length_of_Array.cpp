#include<iostream>
using namespace std;
int main()
{
    int arr[100], i=0, sent=-1;
    cout << "Enter array elements: ";
    while(true)
    {
        cin >> arr[i];
        i++;
        if(arr[i-1] == sent)
            break;
    }
    cout << "Length of array: " << i-1;
}