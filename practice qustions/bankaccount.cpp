#include <iostream>
using namespace std;

class BankAccount
{
private:
    long accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(long no, string holder, double amt)
    {
        accountNumber = no;
        accountHolder = holder;
        balance = amt;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        balance -= amount;
    }

    void displayBalance()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1(12345, "Aslah", 5000);

    b1.deposit(1000);
    b1.withdraw(500);

    b1.displayBalance();

    return 0;
}