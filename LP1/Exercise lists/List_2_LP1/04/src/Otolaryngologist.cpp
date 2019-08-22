/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Otolaryngologist.hpp"

Otolaryngologist::Otolaryngologist(std::string name,
                 double height,
                 double weight)
{

        this->name = name;
        this->height = height;
        this->weight = weight;
        this->specialization_course = "Otolaryngologist";

}// end constructor

std::string Otolaryngologist::get_procedure()
{
        return "Sinusectomy";

} // end get_procedure

std::string Otolaryngologist::get_specialization_course()
{
        return specialization_course;

} // end get_specialization_course
