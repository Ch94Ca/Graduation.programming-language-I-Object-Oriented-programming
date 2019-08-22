/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Square.hpp"

Square::Square()
{


} // end constructor

Square::Square(double side, std::string name)
{
        this->side = side;
        this->name = name;

} // end constructor

void Square::set_name(std::string name)
{
        this->name = name;

} // end set_name

void Square::set_side(double side)
{
        this->side = side;

} // end set_side

std::string Square::get_name()
{
        return name;

} // end get_name

double Square::get_side()
{
        return side;

} // end get_side

double Square::get_area()
{
        return (side * side);

} // end get_area
