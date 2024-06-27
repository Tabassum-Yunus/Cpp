#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float arr[10], n, *ptr = arr, sum=0, avg=0, mean=0, summation=0, std_dev=0;
    cout << "\n Enter no. of elements u want to enter: ";
    cin >> n; 
    cout << " Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> *(ptr+i);
    }
    cout << "\n Sum of array elements are: ";
    for(int j=0; j<n; j++)
    {
        sum = sum + (*(ptr+j));
    }
    cout << sum;
    mean = sum/n;
    cout << "\n Mean of array elements are: " << mean;
    for(int k=0; k<n; k++)
        summation += ((*(ptr+k) - mean) * (*(ptr+k) - mean));
    std_dev = sqrt(summation/n);
    cout << "\n Standard deviation of array elements are: "<< std_dev;
}