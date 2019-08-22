/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Circle.hpp"

Circle::Circle()
{


} // end constructor

Circle::Circle(double radius, std::string name)
{
        this->radius = radius;
        this->name = name;

} // end constructor

void Circle::set_name(std::string name)
{
        this->name = name;

} // end set_name

void Circle::set_radius(double radius)
{
        this->radius = radius;

} // end set_radius

std::string Circle::get_name()
{
        return name;

} // end get_name

double Circle::get_radius()
{
        return radius;

} // end get_radius

double Circle::get_area()
{
        return (3.14 * (radius * radius));

} // end get_area
