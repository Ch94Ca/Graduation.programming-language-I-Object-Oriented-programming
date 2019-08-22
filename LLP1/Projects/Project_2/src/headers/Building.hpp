/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef BUILDING_HPP
#define BUILDING_HPP


#include "Adress.hpp"

#include <iostream>
#include <boost/serialization/vector.hpp>

class Building {

protected:

// serialize code

friend class boost::serialization::access;

template<class Archive>

void serialize(Archive & ar, const unsigned int version)
{
        ar & ad_title;
        ar & ad_type;
        ar & building_type;
        ar & building_price;
        ar & building_adress;

}     // end serialize

// end of serialize code

std::string ad_title;
int ad_type;
int building_type;
double building_price;
Adress building_adress;

public:

virtual ~Building();

void set_ad_title(std::string ad_title);
void set_ad_type(int ad_type);
void set_building_type(int building_type);
void set_building_price(double building_price);
void set_building_adress(Adress building_adress);

std::string get_ad_title();
int get_ad_type();
int get_building_type();
double get_building_price();
Adress get_building_adress();
Adress& get_building_adress_ref();

std::string get_building_type_string();
std::string get_ad_type_string();

std::string get_building_short_string();
virtual std::string get_building_string() = 0;


}; // end Building

#endif
