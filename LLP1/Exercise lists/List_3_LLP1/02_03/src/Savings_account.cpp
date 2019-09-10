/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Savings_account.hpp"

Savings_account::Savings_account()
{

} // end constructor

Savings_account::Savings_account(std::string client_name,
                                 std::string account_number,
                                 double balance,
                                 int variation,
                                 double yield_rate)
{
        this->client_name = client_name;
        this->account_number = account_number;
        this->balance = balance;
        this->variation = variation;
        this->yield_rate = yield_rate;

} // end constructor

double Savings_account::yield()
{
        double balance = 0;

        if(variation == 1)
        {
                balance = ((this->balance)*(yield_rate + 0.5)) / 100;

        } // end if

        else if(variation == 51)
        {
                balance = ((this->balance)*(yield_rate)) / 100;

        } // end else if

        return balance;

} // end yield
