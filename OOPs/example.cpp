#include <iostream>
#include <string>
using namespace std;

// Abstraction - Abstract base class
class Account
{
protected:
    double balance;

public:
    Account(double initialBalance) : balance(initialBalance) {}

    virtual void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: $" << amount << "\n";
    }

    virtual void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: $" << amount << "\n";
        }
        else
        {
            cout << "Insufficient funds\n";
        }
    }

    virtual void calculateInterest() = 0; // Pure virtual function

    double getBalance() const
    {
        return balance;
    }
};

// Inheritance - Derived class from Account
class SavingsAccount : public Account
{
private:
    double interestRate;

public:
    SavingsAccount(double initialBalance, double rate)
        : Account(initialBalance), interestRate(rate) {}

    // Polymorphism - Overriding base class function
    void calculateInterest() override
    {
        double interest = balance * interestRate;
        balance += interest;
        cout << "Interest Added: $" << interest << "\n";
    }
};

// Encapsulation - Customer class for account holder's data
class Customer
{
private:
    string name;
    int accountNumber;
    SavingsAccount *account;

public:
    Customer(string custName, int accNum, double initialBalance, double rate)
        : name(custName), accountNumber(accNum)
    {
        account = new SavingsAccount(initialBalance, rate);
    }

    void displayInfo()
    {
        cout << "Customer: " << name << ", Account Number: " << accountNumber
             << ", Balance: $" << account->getBalance() << "\n";
    }

    void deposit(double amount)
    {
        account->deposit(amount);
    }

    void withdraw(double amount)
    {
        account->withdraw(amount);
    }

    void addInterest()
    {
        account->calculateInterest();
    }

    ~Customer()
    {
        delete account;
    }
};

// Main function demonstrating OOP concepts
int main()
{
    Customer customer("Alice", 12345, 1000.0, 0.05); // Encapsulation and Inheritance in action

    customer.displayInfo();

    customer.deposit(200); // Deposit to account
    customer.displayInfo();

    customer.withdraw(150); // Withdraw from account
    customer.displayInfo();

    customer.addInterest(); // Polymorphism and Abstraction in action
    customer.displayInfo();

    return 0;
}
