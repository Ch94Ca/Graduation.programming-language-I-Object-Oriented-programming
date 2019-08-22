/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef GYNECOLOGIST_HPP
#define GYNECOLOGIST_HPP

#include "Medic.hpp"

#include <iostream>

class Gynecologist : public Medic
{

private:

std::string specialization_course;

public:

Gynecologist(std::string name,
                double height,
                double weight);

std::string get_procedure();

std::string get_specialization_course();

}; // end Gynecologist

#endif
