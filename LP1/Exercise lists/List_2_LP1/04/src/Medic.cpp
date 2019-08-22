/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Medic.hpp"

Medic::Medic()
{


} // end constructor

Medic::Medic(std::string name,
             double height,
             double weight)
{
        this->name = name;
        this->height = height;
        this->weight = weight;

}// end constructor

void Medic::set_name(std::string name)
{
        this->name = name;

} // end set_name

void Medic::set_height(double height)
{
        this->height = height;

} // end set_height

void Medic::set_weight(double weight)
{
        this->weight = weight;

} // end set_weight

std::string Medic::get_name()
{
        return name;

} // end get_name

double Medic::get_height()
{
        return height;

} // end get_height

double Medic::get_weight()
{
        return weight;

} // end get_weight

std::string Medic::get_specialization_course()
{
        return "General Doctor";

} // end get_specialization_course

std::string Medic::get_procedure()
{
        return "General care";

} // end get_procedure
