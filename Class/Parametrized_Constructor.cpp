#include<iostream>
using namespace std;
class Calculator{
    private:
        int a,b,c,d;
    public:
        Calculator(int a, int b, int c, int d)
        {
            this->a = a;
            this->b = b;
            this->c = c;
            this->d = d;
        }
        void add()
        {
            cout << "Addition: " << a+b+c+d<< endl;
        }
        void multiply(){
            cout << "Product: " << a*b*c*d << endl;
        }
};
int main()
{
    int x,y,z,w;
    cout << "Enter four numbers: ";
    cin >> x >> y >> z >> w;
    Calculator c1(x,y,z,w);
    c1.add();
    c1.multiply();
}