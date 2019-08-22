/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef SURGEON_HPP
#define SURGEON_HPP

#include "Medic.hpp"

#include <iostream>

class Surgeon : public Medic
{

private:

std::string specialization_course;

public:

Surgeon(std::string name,
        double height,
        double weight);

std::string get_procedure();

std::string get_specialization_course();

}; // end Medic

#endif
