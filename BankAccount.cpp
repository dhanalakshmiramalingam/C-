#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    double balance;

public:
    BankAccount(const string& name, double initialBalance) {
        accountHolderName = name;
        balance = initialBalance;
        cout << accountHolderName << " created with initial balance: $" << balance << endl; 
    }

    ~BankAccount() {
        cout << "Account for " << accountHolderName << " with balance $" << balance << " is being destroyed." << endl;
    }

    void displayAccountInfo() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account1("John Doe", 1000.0);
    BankAccount account2("Jane Smith", 500.0);

    cout << "\nAccount Information:\n";
    account1.displayAccountInfo();
    account2.displayAccountInfo();

    return 0;
}

