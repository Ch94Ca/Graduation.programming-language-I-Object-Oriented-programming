/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef GEOFIG_HPP
#define GEOFIG_HPP

#include <iostream>

class GeoFig
{

protected:

std::string name;

public:

virtual double get_area() = 0;

}; // end GeoFig

#endif
