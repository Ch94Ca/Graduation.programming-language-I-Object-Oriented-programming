/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Ophthalmologist.hpp"

Ophthalmologist::Ophthalmologist(std::string name,
                 double height,
                 double weight)
{

        this->name = name;
        this->height = height;
        this->weight = weight;
        this->specialization_course = "Ophthalmologist";

}// end constructor

std::string Ophthalmologist::get_procedure()
{
        return "Catract Surgery";

} // end get_procedure

std::string Ophthalmologist::get_specialization_course()
{
        return specialization_course;

} // end get_specialization_course
