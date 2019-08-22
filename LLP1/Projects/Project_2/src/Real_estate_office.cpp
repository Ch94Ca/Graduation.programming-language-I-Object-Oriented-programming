/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */


#include "headers/Real_estate_office.hpp"
#include "headers/simplify_string.hpp"

#include <boost/serialization/export.hpp>
#include <boost/algorithm/string.hpp>

#include "headers/Building.hpp"
BOOST_CLASS_EXPORT(Building)
#include "headers/Adress.hpp"
BOOST_CLASS_EXPORT(Adress)
#include "headers/House.hpp"
BOOST_CLASS_EXPORT(House)
#include "headers/Apartment.hpp"
BOOST_CLASS_EXPORT(Apartment)
#include "headers/Terrain.hpp"
BOOST_CLASS_EXPORT(Terrain)

#include <vector>
#include <fstream>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/vector.hpp>

Real_estate_office::Real_estate_office()
{

} // end constructor

std::vector<int> Real_estate_office::search_by_ad_title(std::vector<Building*> &buildings,
                                                        std::vector<int> index,
                                                        std:: string search_title)
{
        std::vector<int> results;
        std::string ad_title;

        simplify_string(&search_title, false);

        for(long unsigned int i = 0; i < index.size(); i++)
        {
                ad_title = buildings[index[i]]->get_ad_title();

                simplify_string(&ad_title, false);

                if(boost::icontains(ad_title, search_title))
                {
                        results.push_back(index[i]);

                } // end if

        } // end for

        return results;

} // end search_by_search_title

std::vector<int> Real_estate_office::search_by_building_type(std::vector<Building*> &buildings,
                                                             int building_type)
{
        std::vector<int> results;

        for(long unsigned int i = 0; i < buildings.size(); i++)
        {
                if(buildings[i]->get_building_type() == building_type)
                {
                        results.push_back(i);

                } // end if

        } // end for

        return results;

} // end search_by_building_type

std::vector<int> Real_estate_office::search_by_ad_type(std::vector<Building*> &buildings,
                                                       std::vector<int> index,
                                                       int ad_type)
{
        std::vector<int> results;

        for(long unsigned int i = 0; i < index.size(); i++)
        {
                if(buildings[index[i]]->get_ad_type() == ad_type)
                {
                        results.push_back(index[i]);

                } // end if

        } // end for

        return results;

} // end search_by_ad_type

std::vector<int> Real_estate_office::search_by_neighborhood(std::vector<Building*> &buildings,
                                                            std::vector<int> index,
                                                            std:: string search_neighborhood)
{
        std::vector<int> results;
        std::string ad_neighborhood;

        simplify_string(&search_neighborhood, false);

        for(long unsigned int i = 0; i < index.size(); i++)
        {
                ad_neighborhood = (buildings[index[i]]->get_building_adress()).get_neighborhood();

                simplify_string(&ad_neighborhood, false);

                if(boost::icontains(ad_neighborhood, search_neighborhood))
                {
                        results.push_back(index[i]);

                } // end if

        } // end for

        return results;

} // end search_by_neighborhood

std::vector<int> Real_estate_office::search_by_city(std::vector<Building*> &buildings,
                                                    std::vector<int> index,
                                                    std:: string search_city)
{
        std::vector<int> results;
        std::string ad_city;

        simplify_string(&search_city, false);

        for(long unsigned int i = 0; i < index.size(); i++)
        {
                ad_city = (buildings[index[i]]->get_building_adress()).get_city();

                simplify_string(&ad_city, false);

                if(boost::icontains(ad_city, search_city))
                {
                        results.push_back(index[i]);

                } // end if

        } // end for

        return results;

} // end search_by_city

std::vector<int> Real_estate_office::search_by_price(std::vector<Building*> &buildings,
                                                     std::vector<int> index,
                                                     int price, int search_type)
{
        std::vector<int> results;

        if(search_type == 1) // search for prices higher than...
        {
                for(long unsigned int i = 0; i < index.size(); i++)
                {
                        if(buildings[index[i]]->get_building_price() > price)
                        {
                                results.push_back(index[i]);

                        } // end if

                } // end for

        } // end if

        if(search_type == 2) // search for prices lower than...
        {
                for(long unsigned int i = 0; i < index.size(); i++)
                {
                        if(buildings[index[i]]->get_building_price() < price)
                        {
                                results.push_back(index[i]);

                        } // end if

                } // end for

        } // end if

        return results;

} // end search_by_price

void Real_estate_office::read_data()
{
        std::ifstream ifs("src/files/data.dat");

        boost::archive::text_iarchive input_file(ifs);

        input_file >> buildings;

        ifs.close();

} // end read_data

void Real_estate_office::save_data()
{
        std::ofstream ofs("src/files/data.dat");

        boost::archive::text_oarchive out_file(ofs);

        out_file << this->buildings;

        ofs.close();

} // end save_data
