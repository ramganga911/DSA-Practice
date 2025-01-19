#include<bits/stdc++.h>
using namespace std;


class BankAccount{
    private:
    string accountHolder;
    double balance;
    public:
    BankAccount(string name, double amount){
        accountHolder = name;
        balance = amount;
    }
    //Public method to deposit money
    void deposit(double amount){
        if(amount > 0){
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        }
        else{
            cout << "Invalid amount. Please try again." << endl;
        }
    }
    //Public method to withdraw money
    void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else{
            cout << "Invalid amount. Please try again." << endl;
        }
    }
    //public method to get the current balance
    double getBalance(){
        return balance;
    }
    //public method to set a new account holder name
    void setAccountHolder(string name){
        accountHolder = name;
    }
    //public method to get the account holder name
    string getAccountHolder(){
        return accountHolder;
    }
};
int main()
{
    // Create a BankAccount object
    BankAccount acc("Alice", 1000);
    // access public methods
    acc.deposit(500);
    acc.withdraw(200);
    cout << "Account Holder: " << acc.getAccountHolder() << endl;
    return 0;
}
