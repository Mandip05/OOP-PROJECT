#include <iostream>
#include <string>
using namespace std;
class Bank {
private:
    string depositor_name;
    string account_number;
    float account_balance;
    static string account_type;
public:
    Bank(const string& depositor, const string& acc_number, float balance)
        : depositor_name(depositor), account_number(acc_number), account_balance(balance) {}
    void withdrawAmount(float amount) {
        if (amount <= account_balance) {
            account_balance -= amount;
            cout << "Withdrawal of " << amount << " successful.\n";
        } else {
            cout << "Insufficient balance.\n";
        }
    }
    void depositAmount(float amount) {
        account_balance += amount;
        cout << "Deposit of " << amount << " successful.\n";
    }
    friend void displayDetails(const Bank& bank);
};
string Bank::account_type = "Savings";
void displayDetails(const Bank& bank) {
    cout << "Depositor Name: " << bank.depositor_name << "\n";
    cout << "Account Number: " << bank.account_number << "\n";
    cout << "Account Type: " << Bank::account_type << "\n";
    cout << "Account Balance: " << bank.account_balance << "\n";
}
int main() {
    Bank myAccount("Mandip Chaudhary", "1234567788", 900000);
    displayDetails(myAccount);
    myAccount.depositAmount(25000.00);
    myAccount.withdrawAmount(20000.00);
    displayDetails(myAccount);
    return 0;
}
