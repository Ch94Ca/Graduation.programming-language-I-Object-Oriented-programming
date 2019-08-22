/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef TERRAIN_HPP
#define TERRAIN_HPP

#include "Building.hpp"

#include <iostream>
#include <boost/serialization/vector.hpp>

class Terrain : public Building {

private:

double terrain_area;

// serialize code

friend class boost::serialization::access;

template<class Archive>

void serialize(Archive & ar, const unsigned int version)
{
        ar & boost::serialization::base_object<Building>(*this);
        ar & terrain_area;

}   // end serialize

// end of serialize code

public:

Terrain();
Terrain(std::string ad_title,
        int ad_type,
        double building_price,
        Adress building_adress,
        int terrain_area
        );

void set_terrain_area(double terrain_area);

double get_terrain_area();

std::string get_building_string();

}; // end Terrain

#endif
