/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef WORKER_NOT_FOUND_EXCEPTION_HPP
#define WORKER_NOT_FOUND_EXCEPTION_HPP

#include <iostream>

class Worker_not_found_Exception : public std::exception
{

public:

const char * what () const throw ()
{
        return "Worker not found";
}

};

#endif
