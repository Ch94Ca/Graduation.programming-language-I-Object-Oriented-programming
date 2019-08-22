/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef OTOLARYNGOLOGYST_HPP
#define OTOLARYNGOLOGYST_HPP

#include "Medic.hpp"

#include <iostream>

class Otolaryngologist : public Medic
{

private:

std::string specialization_course;

public:

Otolaryngologist(std::string name,
                double height,
                double weight);

std::string get_procedure();

std::string get_specialization_course();

}; // end Otolaryngologist

#endif
