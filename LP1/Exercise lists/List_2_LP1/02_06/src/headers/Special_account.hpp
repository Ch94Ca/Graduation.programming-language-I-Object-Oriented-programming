/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef CONTA_HPP
#define CONTA_HPP

#include "Account.hpp"
#include <string>

class Special_account : public Account
{

public:

Special_account();

Special_account(std::string client_name,
                std::string account_number,
                double monthly_salary,
                double balance);

void define_limit();

}; // end Conta

#endif
