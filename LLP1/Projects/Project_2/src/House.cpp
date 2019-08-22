/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/House.hpp"

#include <sstream>
#include <boost/locale/generator.hpp>
#include <boost/locale.hpp>

House::House()
{
        this->building_type = 1;

} // end constructor

House::House(std::string ad_title,
             int ad_type,
             double building_price,
             Adress building_adress,
             int house_floors,
             int house_bedrooms,
             double terrain_area,
             double building_area)
{
        this->ad_title = ad_title;
        this->ad_type = ad_type;
        this->building_type = 1;
        this->building_price = building_price;
        this->building_adress = building_adress;
        this->house_floors = house_floors;
        this->house_bedrooms = house_bedrooms;
        this->terrain_area = terrain_area;
        this->building_area = building_area;


} // end constructor

void House::set_house_floors(int house_floors)
{
        this->house_floors = house_floors;

} // end set_house_floors

void House::set_house_bedrooms(int house_bedrooms)
{
        this->house_bedrooms = house_bedrooms;

} // end set_house_bedrooms

void House::set_terrain_area(double terrain_area)
{
        this->terrain_area = terrain_area;

} // end set_terrain_area

void House::set_building_area(double building_area)
{
        this->building_area = building_area;

} // end set_building_area

int House::get_house_floors()
{
        return house_floors;

} // end get_house_floors

int House::get_house_bedrooms()
{
        return house_bedrooms;

} // end get_house_bedrooms

int House::get_terrain_area()
{
        return terrain_area;

} // end get_terrain_area

int House::get_building_area()
{
        return building_area;

} // end get_building_area

std::string House::get_building_string()
{
        boost::locale::generator gen;
        std::locale loc = gen("");
        std::locale::global(loc);
        std::cout.imbue(loc);

        std::stringstream string;

        string << "Titulo: " << ad_title << std::endl
               << "---------------------------------------------------"
               << std::endl
               << "Tipo de imovel:    " << this->get_building_type_string() << std::endl
               << "Tipo de anuncio:   " << this->get_ad_type_string() << std::endl
               << std::endl
               << "---------------------------------------------------"
               << std::endl
               << "Endereco:" << std::endl
               << "---------------------------------------------------"
               << std::endl
               << this->building_adress.get_adress_string()
               << std::endl
               << "---------------------------------------------------"
               << std::endl
               << "Informacoes do imovel: " << std::endl
               << "---------------------------------------------------"
               << std::endl
               << "Numero de Quartos:  " << house_bedrooms << std::endl
               << "Pavimentos:         " << house_floors << std::endl
               << "Area total:         " << terrain_area << std::endl
               << "Area construida:    " << building_area << std::endl
               << "Preco:              " << boost::locale::as::currency << building_price << std::endl;

        return string.str();

} // end get_building_string
