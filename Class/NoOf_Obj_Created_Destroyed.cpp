#include<iostream>
using namespace std;
class CountObject
{
    private: 
        static int count;
    public:
        CountObject()
        {
            count++;
            cout << "Object created. No of objects: " << count<< endl;
        }
        ~CountObject()
        {
            count--;
            cout << "Object destroyed. No of objects: " << count << endl;
        }
};
int CountObject::count = 0;
int main()
{
    CountObject c;
    CountObject c1;
}