/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef LITTLE_HIGH_VALUE_EXCEPTION_HPP
#define LITTLE_HIGH_VALUE_EXCEPTION_HPP

#include <iostream>

class Little_high_value_exception : public std::exception
{

public:

const char * what () const throw ()
{
        return "The value is slightly higher than allowed";
}

};

#endif
