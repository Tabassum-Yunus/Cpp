#include<iostream>
using namespace std;
class Distance{
    int meter, cm;
    public:
        Distance(int d)
        {
            meter = d/100;
            cm = d%100;
        }
    int display()
    {
        cout << "Distance is " << meter << " m and " << cm << " cm"<< endl;         // basic to class
        cout << "Value of distance: ";                                      
        int m = meter*100+cm;                                                       // class to basic
        return m;
    }
};
int main()
{
    int x;
    cout << "Enter distance: ";   cin >> x;
    Distance d1(x);
    cout << d1.display();
}