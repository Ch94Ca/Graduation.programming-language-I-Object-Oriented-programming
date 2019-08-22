/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef REAL_ESTATE_OFFICE_HPP
#define REAL_ESTATE_OFFICE_HPP

#include "Building.hpp"

#include <iostream>
#include <vector>
#include <boost/serialization/vector.hpp>

class Real_estate_office {

public:

// serialize code

friend class boost::serialization::access;

template<class Archive>

void serialize(Archive & ar, const unsigned int version)
{
        ar & buildings;

}     // end serialize

// end of serialize code

std::vector<Building*> buildings;

Real_estate_office();

std::vector<int> search_by_ad_title(std::vector<Building*> &buildings,
                                                        std::vector<int> index,
                                                        std:: string search_title);

std::vector<int> search_by_building_type(std::vector<Building*> &buildings,
                                         int building_type);

std::vector<int> search_by_ad_type(std::vector<Building*> &buildings,
                                   std::vector<int> index,
                                   int ad_type);

std::vector<int> search_by_neighborhood(std::vector<Building*> &buildings,
                                        std::vector<int> index,
                                        std:: string search_neighborhood);

std::vector<int> search_by_city(std::vector<Building*> &buildings,
                                std::vector<int> index,
                                std:: string search_city);

std::vector<int> search_by_price(std::vector<Building*> &buildings,
                                 std::vector<int> index,
                                 int price, int search_type);

void read_data();

void save_data();

}; // end Real_estate_office

#endif
