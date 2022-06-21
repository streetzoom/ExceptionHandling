//
// Created by STZ on 6/15/22.
//
#ifndef CHALLENGE_ACCOUNT_H
#define CHALLENGE_ACCOUNT_H
#include <iostream>
#include <string>
#include "I_Printable.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

class Account: public I_Printable {
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    explicit Account(std::string name = def_name, double balance = def_balance); // Account(std::string name = "Unnamed Account", double balance = 0.0);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    void print(std::ostream &os) const override;
    ~Account() override = default;
};

#endif //CHALLENGE_ACCOUNT_H
