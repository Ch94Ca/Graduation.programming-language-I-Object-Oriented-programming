/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Special_account.hpp"

Special_account::Special_account()
{

} // end constructor

Special_account::Special_account(std::string client_name,
                                 std::string account_number,
                                 double monthly_salary,
                                 double balance)
{
        this->client_name = client_name;
        this->account_number = account_number;
        this->monthly_salary = monthly_salary;
        this->balance = balance;
        this->define_limit();

} // end constructor

void Special_account::define_limit()
{
        this->limit = (monthly_salary * 3);
        void define_limit();

} // define_limite
