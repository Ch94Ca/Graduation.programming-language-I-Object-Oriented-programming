/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Building.hpp"

#include <sstream>
#include <boost/locale/generator.hpp>
#include <boost/locale.hpp>

Building::~Building()
{

} // end destructor

void Building::set_ad_title(std::string ad_title)
{
        this->ad_title = ad_title;

} // end get_ad_title

void Building::set_ad_type(int ad_type)
{
        this->ad_type = ad_type;

} // end set_da_type

void Building::set_building_type(int building_type)
{
        this->building_type = building_type;

} // end set_building_type

void Building::set_building_price(double building_price)
{
        this->building_price = building_price;

} // end set_building_price

void Building::set_building_adress(Adress building_adress)
{
        this->building_adress = building_adress;

} // end set_building_adress

std::string Building::get_ad_title()
{
        return ad_title;

} // end get_ad_title

int Building::get_ad_type()
{
        return ad_type;

} // end get_ad_type

int Building::get_building_type()
{
        return building_type;

} // end get_building_type

double Building::get_building_price()
{
        return building_price;

} // end get_building_price

Adress Building::get_building_adress()
{
        return building_adress;

} // end get_building_adress

Adress& Building::get_building_adress_ref()
{
        return building_adress;

} // end get_building_adress_reference

std::string Building::get_building_type_string()
{
        if(building_type == 1)
        {
                return "Casa";

        } // end if

        if(building_type == 2)
        {
                return "Apartamento";

        } // end if

        if(building_type == 3)
        {
                return "Terreno";

        } // end if

        return "null";

} // end get_building_type_string

std::string Building::get_ad_type_string()
{
        if(ad_type == 1)
        {
                return "Venda";

        } // end if

        if(ad_type == 2)
        {
                return "Aluguel";

        } // end if

        return "null";

} // end get_ad_type_string

std::string Building::get_building_short_string()
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
               << "Bairro:     " << this->building_adress.get_neighborhood() << std::endl
               << "Cidade:     " << this->building_adress.get_city() << std::endl
               << std::endl
               << "---------------------------------------------------"
               << std::endl
               << "Preco:      " << boost::locale::as::currency << building_price << std::endl;

        return string.str();

} // end get_building_short_string
