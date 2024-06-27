#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a){
        this->name = n;
        this->age = a;
    }
    friend void display(Student);
};

void display(const Student student) {
    cout << "Student Information:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
}
int main() {
    Student student1("Oreo", 20);
    display(student1);
}