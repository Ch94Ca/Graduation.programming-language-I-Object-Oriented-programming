/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Cat.hpp"

#include <iostream>

Cat::Cat(std::string name)
{
        this->name = name;

} // end constructor

void Cat::make_noise()
{
        std::cout << "Miau" << std::endl;

} // end make_noise

void Cat::get_name()
{
        std::cout << "Cat's name: " << name << std::endl;

} // end get name
