/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef NEGATIVE_WITHDRAW_EXCEPTION_HPP
#define NEGATIVE_WITHDRAW_EXCEPTION_HPP

#include <iostream>

class Negative_withdraw_exception : public std::exception
{

public:

const char * what () const throw ()
{
        return "Unable to withdraw negative values";
}

};

#endif
