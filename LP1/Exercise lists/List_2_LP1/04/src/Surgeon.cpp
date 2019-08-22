/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Surgeon.hpp"

Surgeon::Surgeon(std::string name,
                 double height,
                 double weight)
{

        this->name = name;
        this->height = height;
        this->weight = weight;
        this->specialization_course = "Surgeon";

}// end constructor

std::string Surgeon::get_procedure()
{
        return "General Surgery";

} // end get_procedure

std::string Surgeon::get_specialization_course()
{
        return specialization_course;

} // end get_specialization_course
