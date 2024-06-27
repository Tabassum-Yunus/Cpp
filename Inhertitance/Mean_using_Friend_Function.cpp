#include <iostream>
using namespace std;
class NumberList {
    int size;
public:
    friend double calculateMean(int size);  
};

double calculateMean(int size) {
    double sum = 0, arr[20];
    cout << "Enter " << size << " elements: ";
    for(int i=0; i<size; i++)
        cin >> arr[i];
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    cout << "Mean: ";
    return (sum/size);
}

int main() {
    int n;
    cout << "Enter the number of values: ";
    cin >> n;
    cout << calculateMean(n) << endl;
    return 0;
}