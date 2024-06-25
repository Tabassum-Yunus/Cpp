#include<iostream>
using namespace std;
class DefaultConstructor{
    private:
        string name;
        string eyeColor;
    public:
    DefaultConstructor()
    {
        name = "Tabassum Yunus";
        eyeColor = "Hazel Brown"; 
    }
    void value()
    {
        cout << "Name: " << name << endl;
        cout << "Eye Color: " << eyeColor;
    }
};

int main()
{
    DefaultConstructor d;
    d.value();
}