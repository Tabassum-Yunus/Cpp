//                                                 NON RECURSIVE
#include<iostream>
using namespace std;
double factorial(int no)
{
    double fact=1;
    for(int i=1; i<=no; i++)
    {
        fact = i*fact;
    }
    return fact;
}
int main()
{
    int no; 
    cout << "Enter no: ";
    cin >> no;
    cout << "Factorial of "<< no << " :" << factorial(no);
} 


/*                                                RECURSIVE
#include<iostream>
using namespace std;
double factorial(int no)
{
    if(no==1)
        return 1;
    return no*factorial(no-1);
}
int main()
{
    int no; 
    cout << "Enter no: ";
    cin >> no;
    cout << "Factorial of "<< no << ": " << factorial(no);
} 
*/