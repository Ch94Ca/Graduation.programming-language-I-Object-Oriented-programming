/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "GeoFig.hpp"

class Circle : protected GeoFig
{

private:

double radius;

public:

Circle();
Circle(double radius, std::string name);

void set_name(std::string name);
void set_radius(double radius);

std::string get_name();
double get_radius();

double get_area();

}; // end Circle

#endif
