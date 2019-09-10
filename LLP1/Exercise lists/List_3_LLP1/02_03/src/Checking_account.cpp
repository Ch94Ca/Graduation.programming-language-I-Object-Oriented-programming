/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Checking_account.hpp"

Checking_account::Checking_account()
{

} // end constructor

Checking_account::Checking_account(std::string client_name,
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

void Checking_account::define_limit()
{
        this->limit = (monthly_salary * 2);
        void define_limit();

} // end define_limite

void Checking_account::set_monthly_salary(double monthly_salary)
{
        this->monthly_salary = monthly_salary;
        this->define_limit();

} // end set_monthly_salarry

double Checking_account::get_monthly_salary()
{
        return monthly_salary;

} // end get_monthly_salary

double Checking_account::get_limit()
{
        return limit;

} // end get_limit
