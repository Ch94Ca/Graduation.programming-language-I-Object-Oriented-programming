/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Gynecologist.hpp"

Gynecologist::Gynecologist(std::string name,
                 double height,
                 double weight)
{

        this->name = name;
        this->height = height;
        this->weight = weight;
        this->specialization_course = "Gynecologist";

}// end constructor

std::string Gynecologist::get_procedure()
{
        return "Hysterectomy";

} // end get_procedure

std::string Gynecologist::get_specialization_course()
{
        return specialization_course;

} // end get_specialization_course
