#include<iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    char accountHolderName[50];
    double balance;

public:
    BankAccount()
    {
        accountNumber = 0;
        accountHolderName[0] = '\0';
        balance = 0;
    }

    void setAccountNumber(int accountNumber)
    {
        this->accountNumber = accountNumber;
    }

    void setAccountHolderName(const char name[])
    {
        int i = 0;
        while(name[i] != '\0')
        {
            accountHolderName[i] = name[i];
            i++;
        }
        accountHolderName[i] = '\0';
    }

    void deposit(double amount)
    {
        if(amount > 0)
            balance = balance + amount;
    }

    void withdraw(double amount)
    {
        if(amount > 0 && amount <= balance)
            balance = balance - amount;
        else
            cout << "Invalid withdrawal" << endl;
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.setAccountNumber(101);
    b.setAccountHolderName("Raj More");

    b.deposit(10000);
    b.withdraw(2500);

    b.display();

    return 0;
}
