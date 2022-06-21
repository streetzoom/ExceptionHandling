//
// Created by STZ on 6/15/22.
//
#ifndef CHALLENGE_TRUST_ACCOUNT_H
#define CHALLENGE_TRUST_ACCOUNT_H
#include "Savings_Account.h"

// Trust Account is a type of Savings Account
// Withdraw - 3 withdraw per year and each of these must be less than 20% of the account balance
// Deposit - same as a Savings Account
//      however, any deposit of $5000.0 or more will receive a $50.00 bonus deposited to the account

class Trust_Account: public Savings_Account {
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr double bonus_reward = 50.0;
    static constexpr int max_withdraw_per_year = 3;
    static constexpr double max_withdraw_percent = 0.2;
protected:
    int current_withdraw_per_year;
public:
    explicit Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool withdraw(double amount) override;
    bool deposit(double amount) override;
    void print(std::ostream &os) const override;
    ~Trust_Account() override = default;
};


#endif //CHALLENGE_TRUST_ACCOUNT_H
