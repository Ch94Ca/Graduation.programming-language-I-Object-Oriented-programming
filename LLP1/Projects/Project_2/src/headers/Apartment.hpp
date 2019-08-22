/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef APARTMENT_HPP
#define APARTMENT_HPP

#include "Building.hpp"

#include <iostream>

class Apartment : public Building {

private:

// serialize code

friend class boost::serialization::access;

template<class Archive>

void serialize(Archive & ar, const unsigned int version)
{
        // serialize base class information
        ar & boost::serialization::base_object<Building>(*this);
        ar & apartment_floor;
        ar & apartment_bedrooms;
        ar & apartment_parking_spaces;
        ar & apartment_area;
        ar & condominium_fee;
        ar & apartment_position;

}     // end serialize


// end of serialize code

int apartment_floor;
int apartment_bedrooms;
int apartment_parking_spaces;
double apartment_area;
double condominium_fee;
std::string apartment_position;

public:

Apartment();
Apartment(std::string ad_title,
          int ad_type,
          double building_price,
          Adress building_adress,
          int apartment_floor,
          int apartment_bedrooms,
          int apartment_parking_spaces,
          double apartment_area,
          double condominium_fee,
          std::string apartment_position);

void set_apartment_floor(int apartment_floor);
void set_apartment_bedrooms(int apartment_bedrooms);
void set_apartment_parking_spaces(int apartment_parking_spaces);
void set_apartment_area(double apartment_area);
void set_condominium_fee(double condominium_fee);
void set_apartment_position(std::string apartment_position);

int get_apartment_floor();
int get_apartment_bedrooms();
int get_apartment_parking_spaces();
double get_apartment_area();
double get_condominium_fee();
std::string get_apartment_position();

std::string get_building_string();

}; // end Apartment

#endif
