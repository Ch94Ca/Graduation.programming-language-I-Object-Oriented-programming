/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef HOUSE_HPP
#define HOUSE_HPP

#include "Building.hpp"

#include <boost/serialization/vector.hpp>

class House : public Building {

private:

int house_floors;
int house_bedrooms;
double terrain_area;
double building_area;

// serialize code

friend class boost::serialization::access;

template<class Archive>

void serialize(Archive & ar, const unsigned int version)
{
        // serialize base class information
        ar & boost::serialization::base_object<Building>(*this);
        ar & house_floors;
        ar & house_bedrooms;
        ar & terrain_area;
        ar & building_area;

}   // end serialize

// end of serialize code

public:

House();
House(std::string ad_title,
      int ad_type,
      double building_price,
      Adress building_adress,
      int house_floors,
      int house_bedrooms,
      double terrain_area,
      double building_area
      );

void set_house_floors(int house_floors);
void set_house_bedrooms(int house_bedrooms);
void set_terrain_area(double terrain_area);
void set_building_area(double building_area);

int get_house_floors();
int get_house_bedrooms();
int get_terrain_area();
int get_building_area();

std::string get_building_string();

}; // end House

#endif
