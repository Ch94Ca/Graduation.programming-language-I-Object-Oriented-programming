/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef LOW_VALUE_EXCEPTION_HPP
#define LOW_VALUE_EXCEPTION_HPP

#include <iostream>

class Low_value_exception : public std::exception
{

public:

const char * what () const throw ()
{
        return "Number value is below than allowed";
}

};

#endif
