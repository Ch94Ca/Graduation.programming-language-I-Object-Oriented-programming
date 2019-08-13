/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "GeoFig.hpp"

class Triangle : protected GeoFig
{

private:

double base;
double height;

public:

Triangle();
Triangle(double base, double height, std::string name);

void set_name(std::string name);
void set_base(double base);
void set_height(double height);

std::string get_name();
double get_base();
double get_height();

double get_area();

}; // end Triangle

#endif
