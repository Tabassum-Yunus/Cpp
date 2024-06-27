 #include<iostream>
 using namespace std;
 void swap_value(int a, int b)
 {
    a = a+b;
    b = a-b;
    a = a-b;
    cout << "After Swapping: no1="<< a<< " & no2="<<b;
 }
 void swap_reference(int &a, int &b)
 {
    a = a^b;
    b = a^b;
    a = a^b; 
    cout << "After Swapping: no1="<< a<< " & no2="<<b;
 }

 int main()
 {
    int no1,no2, choice;
    cout << "Enter two numbers: ";
    cin >> no1 >> no2;
    cout << "Enter 1 to swap no by value. & 2 for call by reference: ";
    cin >> choice;
    cout << "Before Swapping: no1="<<no1<<" & no2="<<no2<<endl;
    switch(choice)
    {
        case 1:
            swap_value(no1,no2);
            break;
        case 2:
            swap_reference(no1,no2);  
    }
 }