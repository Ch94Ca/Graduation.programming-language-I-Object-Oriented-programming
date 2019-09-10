/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef SAVINGS_ACCOUNT_HPP
#define SAVINGS_ACCOUNT_HPP

#include "Account.hpp"
#include <string>

class Savings_account : public Account
{

private:

int variation;
double yield_rate;

public:

Savings_account();

Savings_account(std::string client_name,
                std::string account_number,
                double balance,
                int variation,
                double yield_rate);

double yield();

}; // end Savings_account

#endif
