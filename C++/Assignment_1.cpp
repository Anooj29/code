#include <iostream>
using namespace std;


class BankAccount {
private:
    string owner;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string Name, int accNum, double initialBalance) {
        owner = Name;
        accountNumber = accNum;
        balance = initialBalance;
        cout << "Account created for " << owner << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Account closed for " << owner << endl;
    }


    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }


    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ". Remaining balance: " << balance << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

  
    void checkBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {

    BankAccount myAccount("John Doe", 12345, 500.00);

 
    myAccount.deposit(200);
    myAccount.withdraw(150);
    myAccount.checkBalance();


    return 0;
}
