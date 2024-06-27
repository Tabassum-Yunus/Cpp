#include<iostream>
using namespace std;
int main()
{
    int arr[] = {420,100,108,143,404}, *ptr = arr;
    cout << "Array elements are: ";
    for(int j=0; j<5; j++)
    {
        cout << *(ptr+j) <<" ";
    }
}