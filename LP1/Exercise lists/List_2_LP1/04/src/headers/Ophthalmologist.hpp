/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef OPHTHALMOLOGIST_HPP
#define OPHTHALMOLOGIST_HPP

#include "Medic.hpp"

#include <iostream>

class Ophthalmologist : public Medic
{

private:

std::string specialization_course;

public:

Ophthalmologist(std::string name,
                double height,
                double weight);

std::string get_procedure();

std::string get_specialization_course();

}; // end Ophthalmologist

#endif
