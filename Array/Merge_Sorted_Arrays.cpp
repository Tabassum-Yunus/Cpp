#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter no. of elements u want to enter in array1: ";
    cin >> n1; 
    int arr1[n1];
    cout << "Enter array elements in sorted order: ";
    for(int i=0; i<n1; i++)
    {
        cin >> arr1[i];
    }
    
    cout << "Enter no. of elements u want to enter in array2: ";
    cin >> n2; 
    int arr2[n2];
    cout << "Enter array elements in sorted order: ";
    for(int j=0; j<n2; j++)
    {
        cin >> arr2[j];
    }

    int arr3[n1+n2];
    for(int i=0, j=0, k=0; k<(n1+n2); k++)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k] = arr1[i];
            cout << endl << arr3[k];
			i++;
		}	
		else
		{
			arr3[k] = arr2[j];
            cout << endl<< arr3[k];
			j++;
		}
	}

    cout << "Merged array in ascending order: ";
    for(int k=0; k<(n1+n2); k++)
    {
        cout << arr3[k] << " ";
    }
    return 0;
}
