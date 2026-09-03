#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(double amount)
    {
        if(amount < 0)
            throw amount;

        balance = balance + amount;
    }

    void withdraw(double amount)
    {
        if(amount < 0)
            throw amount;

        if(amount > balance)
            throw string("Insufficient balance");

        balance = balance - amount;
    }

    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    try
    {
        double amount;

        cout << "Enter deposit amount: ";
        cin >> amount;
        b.deposit(amount);

        cout << "Enter withdrawal amount: ";
        cin >> amount;
        b.withdraw(amount);

        b.display();
    }
    catch(double amount)
    {
        cout << "Negative amount is not allowed: " << amount << endl;
    }
    catch(string message)
    {
        cout << message << endl;
    }

    return 0;
}
