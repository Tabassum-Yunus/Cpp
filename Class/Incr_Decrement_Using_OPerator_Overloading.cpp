#include<iostream>
using namespace std;
 class Number{
    private:
        int value;
    public:
        Number(int value)
        {
            this->value = value;
        }
        int operator-()
        {
            return (-value);
        }
        int operator++()
        {
            return (value + 10);
        }
        int operator--()
        {
            return (value - 10);
        }
 };

 int main()
 {
    int a;
    cout << "Enter an integer: ";    cin >> a;
    Number n(a);
    cout <<"Negation of "<< a << ": " <<  -n << endl;
    cout <<"Increment "<< a << " by 10: " <<  ++n << endl;
    cout <<"Decrement "<< a << " by 10: " <<  --n << endl;
 }