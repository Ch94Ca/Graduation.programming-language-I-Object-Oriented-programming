/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Account.hpp"
#include "headers/Without_balance_exception.hpp"
#include "headers/Negative_withdraw_exception.hpp"
#include "headers/Negative_deposit_exception.hpp"

Account::Account()
{


} // end constructor

Account::Account(std::string client_name,
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

void Account::define_limit()
{
        this->limit = (monthly_salary * 2);

} // define_limite

void Account::withdraw(double value)
{
        if(value > balance)
        {
                throw(Without_balance_exception());

        } // end if

        if(value < 0)
        {
                throw(Negative_withdraw_exception());

        } // end if

        balance -= value;

} // end withdraw

void Account::deposit(double value)
{
        if(value < 0)
        {
                throw(Negative_deposit_exception());

        } // end if

        balance += value;

} // end deposit

void Account::set_client_name(std::string client_name)
{
        this->client_name = client_name;

} // end set_client_name

void Account::set_account_number(std::string account_number)
{
        this->account_number = account_number;

} // end set_account_number

void Account::set_monthly_salary(double monthly_salary)
{
        this->monthly_salary = monthly_salary;
        this->define_limit();

} // end set_monthly_salary

void Account::set_balance(double balance)
{
        this->balance = balance;

} // end set_balance

void Account::set_limit(double limit)
{
        this->limit = limit;

} // end set_limit

std::string Account::get_client_name()
{
        return client_name;

} // end get_client_name

std::string Account::get_account_number()
{
        return account_number;

} // end get_account_number

double Account::get_monthly_salary()
{
        return monthly_salary;

} // get_monthly_salary

double Account::get_balance()
{
        return balance;

} // end get_balance

double Account::get_limit()
{
        return limit;

} // end get_limit
