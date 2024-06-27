#include <iostream>
using namespace std;
class Number {
private:
    double num1, num2, num3, num4, num5;
public:
    Number(double n1, double n2, double n3, double n4, double n5)
        : num1(n1), num2(n2), num3(n3), num4(n4), num5(n5) {}
    friend double func1(Number& obj, double a, double b);
    friend double func2(Number& obj, double a, double b, double c);
};
double func1(Number& obj, double a, double b) {
    return (obj.num1 + obj.num2 + a + b) / 4.0;
}
double func2(Number& obj, double a, double b, double c) {
    return (obj.num3 + obj.num4 + obj.num5 + a + b + c) / 6.0;
}
int main() {
    double n1, n2, n3, n4, n5, no1, no2, no3, no4, no5; 
    cout << "Enter five different numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    Number numObj(n1, n2, n3, n4, n5);
    cout << "Enter two numbers for freind function 1: ";
    cin >> no1 >> no2;
    double average1 = func1(numObj, no1, no2);
    cout << "Enter three numbers for freind function 2: ";
    cin >> no3 >> no4 >> no5;
    double average2 = func2(numObj, no3, no4, no5);
    cout << "Average using func1: " << average1 << endl;
    cout << "Average using func2: " << average2 << endl;
    return 0;
}