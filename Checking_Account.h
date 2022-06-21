//
// Created by STZ on 6/16/22.
//
#ifndef CHALLENGE_CHECKING_ACCOUNT_H
#define CHALLENGE_CHECKING_ACCOUNT_H
#include "Account.h"

// Checking Account is a type of Account
//   adds a withdrawal fee 1.5$
// Deposit - same as a regular account
// Withdraw - every withdraw will be assessed this flat fee

class Checking_Account: public Account {
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double withdraw_fee = 1.5;
public:
    explicit Checking_Account(std::string = def_name, double balance = def_balance);
    bool deposit(double amount) override;
    bool withdraw(double amount) override;
    void print(std::ostream &os) const override;
    ~Checking_Account() override = default;
};


#endif //CHALLENGE_CHECKING_ACCOUNT_H
