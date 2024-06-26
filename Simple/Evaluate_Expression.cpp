#include <iostream>
using namespace std;
int main()
{
    cout << "\n";
    float a, b, c, d, e, f , g, exp ;
    cout << "Enter the values of a, b, c, d, e, f & g";
    cout << "\n";
    cout << "a: ";
    cin >> a ;
    cout << "b: ";
    cin >> b ;
    cout << "c: ";
    cin >> c ;
    cout << "d: ";
    cin >> d ;
    cout << "e: ";
    cin >> e ;
    cout << "f: ";
    cin >> f ;
    cout << "g: ";
    cin >> g ;
    exp = ((a + b / c * d - e) * (f - g)) ;
    cout << "The value of expression ((a + b / c * d - e) * (f - g)) is: " << exp;
    cout << "\n";
    return 0;
}