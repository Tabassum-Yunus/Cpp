#include<iostream>
using namespace std;
 class Number{
    private:
        int value1, value2;
    public:
        Number()
        {
            value1 = 0;
            value2 = 0;
        }
        Number(int value1, int value2)
        {
            this->value1 = value1;
            this->value2 = value2;
        }
        Number operator+(Number n)
        {
            Number temp;
            temp.value1 = value1 + n.value1;
            temp.value2 = value2 + n.value2;
            return temp;
        }
        Number operator-(Number n)
        {
            Number temp;
            temp.value1 = value1 - n.value1;
            temp.value2 = value2 - n.value2;
            return temp;
        }
        Number operator*(Number n)
        {
            Number temp;
            temp.value1 = value1 * n.value1;
            temp.value2 = value2 * n.value2;
            return temp;
        }
        Number operator/(Number n)
        {
            Number temp;
            temp.value1 = value1 / n.value1;
            temp.value2 = value2 / n.value2;
            return temp;
        }
        void result()
        {
            cout << value1 <<" & "<< value2;
        }
 };

 int main()
 {
    int a, b, c, d;
    cout << "Enter two integers for fisrt object: ";    cin >> a >> b;
    cout << "Enter two integers for second object: ";    cin >> c >> d;
    Number n1(a,b), n2(c,d), n3;
    n3 = n1+n2;
    cout << "Addition: ";    n3.result();
    n3 = n1-n2;
    cout << endl << "Subtraction: ";    n3.result();
    n3 = n1*n2;
    cout << endl << "Multiplication: ";    n3.result();
    n3 = n1/n2;
    cout << endl << "Division: ";    n3.result();
 }