/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef EXPENSE_LIMIT_EXCEEDED_EXCEPTION_HPP
#define EXPENSE_LIMIT_EXCEEDED_EXCEPTION_HPP

#include <iostream>

class Expense_limit_exceeded_exception : public std::exception
{

public:

const char * what () const throw ()
{
        return "Expense limit exceeded";
}

};

#endif
