#include <iostream>

using namespace std;

class Account {
public:
    string account_num = "MAN23455678";
    double account_amount = 81000.89;

    virtual void deposit(double amount) {
        account_amount += amount;
        cout << "Deposited: $" << amount << " | New Balance: $" << account_amount << endl;
    }

    virtual void withdraw(double amount) {
        if (amount > account_amount) {
            cout << "Insufficient funds. Withdrawal denied." << endl;
        } else {
            account_amount -= amount;
            cout << "Withdrew: $" << amount << " | New Balance: $" << account_amount << endl;
        }
    }
};

class SavingsAccount : public Account {
private:
    double interestRate = 5.0; // Interest rate in percentage

public:
    void deposit(double amount) override {
        Account::deposit(amount); // Use the base class method to add the deposit
        calculateInterest();
    }

    void calculateInterest() {
        double interest = account_amount * (interestRate / 100);
        account_amount += interest;
        cout << "Interest added: $" << interest << " | New Balance: $" << account_amount << endl;
    }
};

class CheckingAccount : public Account {
public:
    void withdraw(double amount) override {
        cout << "Overridden function of withdrawal from checking class" << endl;
        Account::withdraw(amount); // Use the base class method for withdrawal
    }
};

int main() {
    SavingsAccount sa1;
    CheckingAccount ca1;

    cout << "Initial Savings Account Balance: $" << sa1.account_amount << endl;
    sa1.deposit(9000.0);

    cout << "\nInitial Checking Account Balance: $" << ca1.account_amount << endl;
    ca1.withdraw(2000.0);

    return 0;
}