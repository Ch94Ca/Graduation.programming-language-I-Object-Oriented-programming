/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Worker.hpp"

void Worker::set_name(std::string name)
{
        this->name = name;

} // end set_name

void Worker::set_registration(std::string registration)
{
        this->registration = registration;

} // end set_registration

std::string Worker::get_name()
{
        return name;

} // end get_name

std::string Worker::get_registration()
{
        return registration;

} // end get_registration
