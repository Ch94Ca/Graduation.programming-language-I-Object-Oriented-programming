/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{

protected:

std::string name;

public:

virtual void make_noise() = 0;
virtual void get_name() = 0;

}; // end Animal

#endif
