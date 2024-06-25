#include<iostream>
using namespace std;
class BankAccount{
    private:
        string name;
        int accNo;
        string accType;
        float balance;
    public:
        void initialValues(string name, int accNo, string accType, float balance)
        {
            this->name=name;
            this->accNo=accNo;
            this->accType=accType;
            this->balance=balance;
        }
        void depositAmount(float amount)
        {
            balance += amount;
            cout << "Now, Balance is: " << balance << endl;
        }
        void withdrawAmount(float amount)
        {
            if(balance >= amount)
            {
                balance -= amount;
                cout << "Now, Balance is: " << balance << endl;
            }
            else
                cout << "Sorry, Balance is not sufficient.";
        }
};

int main()
{
    BankAccount myAcc;
    string depoName, typeOfAcc;
    int accNo;
    float bal, amt;
    cout << "Enter Account holder name: ";
    getline(cin, depoName);
    cout << "Enter account no.: ";
    cin >> accNo;
    cout << "Enter account type: ";
    cin >> typeOfAcc;
    cout << "Enter initial balance: ";
    cin >> bal;
    myAcc.initialValues(depoName, accNo, typeOfAcc, bal);
    cout << "Enter amount to deposit: ";    cin >> amt;    myAcc.depositAmount(amt);
    cout << "Enter amount to withdraw: ";    cin >> amt;    myAcc.withdrawAmount(amt);
}