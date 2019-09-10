/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef SPECIAL_ACCOUNT_HPP
#define SPECIAL_ACCOUNT_HPP

#include "Checking_account.hpp"
#include <string>

class Special_account : public Checking_account
{

public:

Special_account();

Special_account(std::string client_name,
                std::string account_number,
                double monthly_salary,
                double balance);

void define_limit();

}; // end Special_account

#endif
