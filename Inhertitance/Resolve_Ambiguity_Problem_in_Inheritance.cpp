#include<iostream>
using namespace std;
class Root
{
    public:
        void displayRoot()
        {
            cout << " This is a root class having no parents." << endl;
        }
};
class FirstChild : virtual public Root{
    public:
            void displayFirstChild()
            {
                cout << " This is first child of root class." << endl;
            }
};
class SeondChild :virtual public Root{
    public:
            void displaySeondChild()
            {
                cout << " This is second child of root class." << endl;
            }
};
class Leaf : public FirstChild, public SeondChild{
    public:
            void displayLeaf()
            {
                cout << " This is leaf class inherited from first child of root class." << endl;
            }
};

int main()
{
    Leaf l;
    l.displayRoot();
    l.displayFirstChild();
    l.displaySeondChild();
    l.displayLeaf();
    //l.display();
}