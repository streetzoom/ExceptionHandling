#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<Account> daniel_acc;
    std::unique_ptr<Account> max_acc;
    std::unique_ptr<Account> sergio_acc;

    try {
        daniel_acc = std::make_unique<Savings_Account>("Daniel Ricciardo", 5000.0);
        std::cout << *daniel_acc << std::endl;
        sergio_acc = std::make_unique<Savings_Account>("Sergio Perez", -1000);
        std::cout << *sergio_acc << std::endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    catch (...)
    {
        std::cout << "!Crash unknown Error" << std::endl;
    }

    try {
        max_acc = std::make_unique<Savings_Account>("Max Verstappen", 5000.0);
        std::cout << *max_acc << std::endl;
        max_acc->withdraw(10000.0);
        std::cout << *max_acc << std::endl;
        max_acc->withdraw(5000.0);
        std::cout << *max_acc << std::endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    catch (const InsufficientFundsException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    catch (...)
    {
        std::cout << "!Crash unknown Error" << std::endl;
    }

    std::cout << "\nProgram completed successfully" << std::endl;

    return 0;
}

