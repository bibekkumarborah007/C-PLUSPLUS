#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    // constructor
    BankAccount(string accNum, double initalBalance)
    {
        accountNumber = accNum;
        balance = initalBalance;
    }

    // getter
    double getBalance() const
    {
        return balance;
    }

    // method to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount";
        }
    }

    // method to withdraw the ammount
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Balance after withdrawn amount is: " << balance << endl;
        }
        else
        {
            cout << "Invalid withdrawn amount";
        }
    }
};

int main()
{
    BankAccount myAccount("1229988", 500);

    myAccount.getBalance();
    myAccount.deposit(200);
    myAccount.withdraw(100);

    return 0;
}