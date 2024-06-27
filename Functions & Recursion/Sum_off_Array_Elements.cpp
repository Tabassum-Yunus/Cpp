  #include<iostream>
 using namespace std;
 
 int sum_array(int arr[], int size, int i)
 {
    if(i==size)
        return 0;
    return arr[i]+sum_array(arr,size,i+1);
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
    cout << "Sum of array elements: " << sum_array(a,size,0); 
    
}