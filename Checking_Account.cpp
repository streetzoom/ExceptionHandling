//
// Created by STZ on 6/16/22.
//
#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account{std::move(name), balance} {
}

bool Checking_Account::deposit(double amount) {
    return Account::deposit(amount);
}

bool Checking_Account::withdraw(double amount) {
    amount += withdraw_fee;
    return Account::withdraw(amount);
}

void Checking_Account::print(std::ostream &os) const {
    os << "[Checking_Account: " << name << ": " << balance << "]";
}
