 #include<iostream>
 using namespace std;
 void print_array(int arr[], int size, int i)
 {
    //int size = sizeof(arr)/sizeof(int);
    if(i==size)
        return;
    cout << arr[i] << " ";
    return print_array(arr,size,i+1);
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
    cout << "Array elements are: ";
    print_array(a,size,0); 
}