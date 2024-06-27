#include<iostream>
#include<string>
using namespace std;
class STAFF{
    private:
        string staff;
    public:
        void staffFn(string staff)
        {
            this->staff=staff;
        }
        void displayStaff(){
            cout << "STAFF name: " << staff << endl;
        }
};
class Teaching: public STAFF{
    private:
        string teaching;
    public:
        void teachingFn(string teaching)
        {
            this->teaching=teaching;
        }
        void displayTeaching(){
            cout << "TEACHING staff name: " << teaching << endl;
        }
};
class NonTeaching: public STAFF{
    private:
        string nonTeaching;
    public:
        void nonTeachingFn(string nonTeaching)
        {
            this->nonTeaching=nonTeaching;
        }
        void displayNonTeaching(){
            cout << "NON TEACHING staff name: " << nonTeaching << endl;
        }
};
class Officer: public STAFF{
    private:
        string officer;
    public:
    void officerFn(string officer)
        {
            this->officer=officer;
        }
        void displayOfficer(){
            cout << "OFFICER staff name: " << officer << endl;
        }
};
class Regular: public NonTeaching{
    private:
        string regular;
    public:
        void regularFn(string regular)
        {
            this->regular=regular;
        }
        void displayRegular(){
            cout << "REGULAR non teaching staff name: " << regular << endl;
        }
};
class Casual: public NonTeaching{
    private:
        string casual;
    public:
        void casualFn(string casual)
        {
            this->casual=casual;
        }
        void displayCasual(){ 
            cout << "CASUAL non teaching staff name: " << casual << endl;
        }
};

int main()
{

    Teaching t;
    Officer o;
    Regular r;
    Casual c;
    r.staffFn("Tabassum Yunus");
    r.displayStaff();
    t.teachingFn("Cookie");
    t.displayTeaching();
    r.nonTeachingFn("Cooper");
    r.displayNonTeaching();
    o.officerFn("Oreo");
    o.displayOfficer();
    r.regularFn("Jerry");
    r.displayRegular();
    c.casualFn("Denny");
    c.displayCasual();                                       
}
