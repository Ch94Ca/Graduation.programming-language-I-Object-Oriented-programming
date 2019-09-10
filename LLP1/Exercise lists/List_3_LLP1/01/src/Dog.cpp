/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Dog.hpp"

#include <iostream>

Dog::Dog(std::string name)
{
        this->name = name;

} // end constructor

void Dog::make_noise()
{
        std::cout << "Au au" << std::endl;

} // end make_noise

void Dog::get_name()
{
        std::cout << "Dog's name: " << name << std::endl;

} // end get name
