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
        friend Number operator+(Number n1, Number n2);
        friend Number operator-(Number n1, Number n2);
        friend Number operator*(Number n1, Number n2);
        friend Number operator/(Number n1, Number n2);
        void result()
        {
            cout << value1 <<" & "<< value2;
        }
};
Number operator+(Number n1, Number n2)
{
    Number temp;
    temp.value1 = n1.value1 + n2.value1;
    temp.value2 = n1.value2 + n2.value2;
    return temp;
}
Number operator-(Number n1, Number n2)
{
    Number temp;
    temp.value1 = n1.value1 - n2.value1;
    temp.value2 = n1.value2 - n2.value2;
    return temp;
}
Number operator*(Number n1, Number n2)
{
    Number temp;
    temp.value1 = n1.value1 * n2.value1;
    temp.value2 = n1.value2 * n2.value2;
    return temp;
    }
Number operator/(Number n1, Number n2)
{
    Number temp;
    temp.value1 = n1.value1 / n2.value1;
    temp.value2 = n1.value2 / n2.value2;
    return temp;
}

 int main()
 {
    int a, b, c, d;
    cout << "Enter two integers for fisrt object: ";    cin >> a >> b;
    cout << "Enter two integers for second object: ";    cin >> c >> d;
    Number N1(a,b), N2(c,d), N3;
    N3 = N1+N2;
    cout << "Addition: ";    N3.result();
    N3 = N1-N2;
    cout << endl << "Subtraction: ";    N3.result();
    N3 = N1*N2;
    cout << endl << "Multiplication: ";    N3.result();
    N3 = N1/N2;
    cout << endl << "Division: ";    N3.result();
 }
