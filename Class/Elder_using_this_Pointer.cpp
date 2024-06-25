#include<iostream>
using namespace std;
class Person
{
    private:
        int age1, age2;
    public:
    Person(int age1, int age2)
    {
        this->age1 = age1;
        this->age2 = age2;
    }
        int elder()
        {
            if(this->age1 > this->age2)
                return this->age1;
            else
                return this->age2;
        }
};
int main()
{
    int a,b;
    cout << "Enter ages of two person: ";    cin >> a >> b;
    Person p(a,b);
    cout << "Elder one is: " << p.elder();
}