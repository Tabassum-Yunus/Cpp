#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b, c, d, root1, root2, r_part, img_part;
    cout << "Enter the coefficients a, b, c to calculate the roots: \n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    d = (pow(b,2)-(4*a*c));
    if(d>0)
    {
        cout << "The roots of " << a <<"x^2 + " << b << "x + " << c <<" = 0 are real and different.";
        root1 = ((-b)+(sqrt(d)))/(2*a);
        root2 = ((-b)-(sqrt(d)))/(2*a);
        cout << "\nroot1 = " << root1;
        cout << "\nroot2 = " << root2;
    }
    else if(d==0)
    {
        cout << "The roots of " << a <<"x^2 + " << b << "x + " << c <<" = 0 are equal.";
        root1 = (-b)/(2*a);
        cout << "\nroot1 = root2 = " << root1;
    }
    else
    {
        cout << "The roots of " << a <<"x^2 + " << b << "x + " << c <<" = 0 are complex.";
        r_part = (-b)/(2*a);
        img_part = ((sqrt(-d))/(2*a));
        cout << "\nroot1 = " << r_part << "+" << img_part << "i";
        cout << "\nroot1 = " << r_part << "-" << img_part << "i";
    }
    return 0;
}
