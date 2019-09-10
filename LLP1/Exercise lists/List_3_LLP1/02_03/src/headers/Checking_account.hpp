/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef CHECKING_ACCOUNT_HPP
#define CHECKING_ACCOUNT_HPP

#include "Account.hpp"
#include <string>

class Checking_account : public Account
{

protected:

double monthly_salary;
double limit;

public:

Checking_account();

Checking_account(std::string client_name,
                std::string account_number,
                double monthly_salary,
                double balance);

virtual void define_limit();

void set_monthly_salary(double monthly_salary);
double get_monthly_salary();
double get_limit();

}; // end Checking_account

#endif
