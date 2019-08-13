/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "GeoFig.hpp"

class Square : protected GeoFig
{

private:

double side;

public:

Square();
Square(double side, std::string name);

void set_name(std::string name);
void set_side(double side);

std::string get_name();
double get_side();

double get_area();

}; // end Square

#endif
