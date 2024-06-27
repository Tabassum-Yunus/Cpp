#include<iostream>
using namespace std;
int max_array(int arr[], int n)
{
   if(n==1) return arr[0];
   return max(arr[n-1], max_array(arr, n-1));
}
int min_array(int arr[], int n)
{
   if(n==1) return arr[0];
   return min(arr[n-1], min_array(arr, n-1));
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int a[size];
    cout << "Enter " << size << " elements: ";
    for(int i=0; i<size; i++)
        cin >> a[i];
    cout << "Max of array elements: " << max_array(a,size) << endl; 
    cout << "Min of array elements: " << min_array(a,size); 
}