/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Triangle.hpp"

Triangle::Triangle()
{


} // end constructor

Triangle::Triangle(double base, double height, std::string name)
{
        this->base = base;
        this->height = height;
        this->name = name;

} // end constructor

void Triangle::set_name(std::string name)
{
        this->name = name;

} // end set_name

void Triangle::set_base(double base)
{
        this->base = base;

} // end set_base

void Triangle::set_height(double height)
{
        this->height = height;

} // end set_height

std::string Triangle::get_name()
{
        return name;

} // end get_name

double Triangle::get_base()
{
        return base;

} // end get_base

double Triangle::get_height()
{
        return height;

} // end get_height

double Triangle::get_area()
{
        return ((base * height) / 2);

} // end get_area
