/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef WITHOUT_BALANCE_EXCEPTION_HPP
#define WITHOUT_BALANCE_EXCEPTION_HPP

#include <iostream>

class Without_balance_exception : public std::exception
{

public:

const char * what () const throw ()
{
        return "Unavailable Balance";
}

};

#endif
