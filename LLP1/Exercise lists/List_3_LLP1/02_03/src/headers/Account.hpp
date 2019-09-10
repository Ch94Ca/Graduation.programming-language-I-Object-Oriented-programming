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
double balance;

public:

Account();

Account(std::string client_name,
        std::string account_number,
        double balance);

void withdraw(double value);
void deposit(double value);

void set_client_name(std::string client_name);
void set_account_number(std::string account_number);
void set_balance(double balance);

std::string get_client_name();
std::string get_account_number();
double get_balance();

}; // end Account

#endif
