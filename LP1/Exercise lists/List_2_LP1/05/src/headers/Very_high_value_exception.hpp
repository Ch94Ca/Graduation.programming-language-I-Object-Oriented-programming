/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef VERY_HIGH_VALUE_EXCEPTION_HPP
#define VERY_HIGH_VALUE_EXCEPTION_HPP

#include <iostream>

class Very_high_value_exception : public std::exception
{

public:

const char * what () const throw ()
{
        return "The value is much higher than allowed";
}

};

#endif
