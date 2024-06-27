#include<iostream>
using namespace std;
class Program{
    public:
        virtual void VirtualFn()
        {
            cout << "This is a virtual function of Program class."<<endl;
        }
        Program()
        {
            cout << "       INSIDE CONSTRUCTOR "<<endl;
            VirtualFn();
            cout << "This is default constructor of Program class."<< endl;
        }
        void memberFn()
        {
            cout <<"        INSIDE MEMBER FUNCTION"<<endl;
            VirtualFn();
            cout << "This a member function of Program class."<< endl;
        }
};

int  main()
{
    Program p;
    p.memberFn();
}