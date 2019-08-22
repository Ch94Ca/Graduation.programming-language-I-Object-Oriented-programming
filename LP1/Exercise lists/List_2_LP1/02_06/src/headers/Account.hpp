/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include "Bank.hpp"
#include <string>

class Account : public Bank
{

protected:

std::string client_name;
std:: string account_number;
double monthly_salary;
double balance;
double limit;

public:

Account();

Account(std::string client_name,
        std::string account_number,
        double monthly_salary,
        double balance);

virtual void define_limit();

void withdraw(double value);
void deposit(double value);

void set_client_name(std::string client_name);
void set_account_number(std::string account_number);
void set_monthly_salary(double monthly_salary);
void set_balance(double balance);
void set_limit(double limit);

std::string get_client_name();
std::string get_account_number();
double get_monthly_salary();
double get_balance();
double get_limit();

}; // end Account

#endif
