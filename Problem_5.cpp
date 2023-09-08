// Problem 5: Encapsulation. Create a C++ class called BankAccount with private attributes for accountNumber, balance, and accountHolderName. Implement member functions to deposit, withdraw, and display the balance. Ensure that the withdraw function does not allow withdrawing more money than the current balance.

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    double accountNumber, balance;
    string accountHolderName;

public:
    BankAccount()
    {
        balance = 0.0;
        accountNumber = 0;
    }

    void input()
    {
        cout << "Enter Your Account Number please: ";
        cin >> accountNumber;

        cout << "Enter Your Name please: ";
        cin.ignore();
        getline(cin, accountHolderName);
    };

    void Deposit()
    {
        double ammount;
        cout << "Enter the amount you want to deposit in your bank account: ";
        cin >> ammount;
        if (ammount > 0)
        {
            balance += ammount;
            cout << "Amount deposited Successfully" << endl;
        }
        else
        {
            cout << "Invalid Ammount" << endl;
        }
    };
    void Withdraw()
    {
        double ammount;
        cout << "Enter the amount you want to withdraw from your bank account: ";
        cin >> ammount;
        if (ammount > balance)
        {
            cout << "This ammount is more than your bank balance. error...." << endl;
        }
        else if (ammount <= 0)
        {
            cout << "Invalid Ammount" << endl;
        }
        else
        {
            balance -= ammount;
            cout << "withdrawal Done" << endl;
        }
    }
    void Balance()
    {
        cout << "Bank Account Holder Name: " << accountHolderName << endl;
        cout << "Bank Account Holder Number: " << accountNumber << endl;
        cout << "Total Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount user1;
    user1.input();

    user1.Deposit();
    // user1.Balance();
    user1.Withdraw();
    user1.Balance();
    return 0;
};