#include <iostream>
#include <string>
class BankAccount {
private:
    std::string accountHolderName;
    int accountNumber;
    double balance;
public:
    BankAccount(const std::string &name, int number, double initialBalance) 
        : accountHolderName(name), accountNumber(number), balance(initialBalance) {
        std::cout << "Account created for " << accountHolderName 
                  << " with account number " << accountNumber 
                  << " and initial balance $" << balance << std::endl;
    }
    ~BankAccount() {
        std::cout << "Account " << accountNumber << " for " << accountHolderName 
                  << " is being closed. Final balance: $" << balance << std::endl;
    }
    void displayAccountDetails() const {
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Deposit amount must be positive!" << std::endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << ". New balance: $" << balance << std::endl;
        } else if (amount > balance) {
            std::cout << "Insufficient funds!" << std::endl;
        } else {
            std::cout << "Withdrawal amount must be positive!" << std::endl;
        }
    }
};
int main() {
    BankAccount account("John Doe", 123456, 500.00);
    account.displayAccountDetails();
    account.deposit(200.00);
    account.withdraw(150.00);
    account.withdraw(600.00);
    return 0;
}
