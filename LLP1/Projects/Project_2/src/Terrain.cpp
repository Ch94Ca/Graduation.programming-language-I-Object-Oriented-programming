/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Terrain.hpp"

#include <sstream>
#include <boost/locale/generator.hpp>
#include <boost/locale.hpp>

Terrain::Terrain()
{
        this->building_type = 3;

} // end constructor

Terrain::Terrain(std::string ad_title,
                 int ad_type,
                 double building_price,
                 Adress building_adress,
                 int terrain_area
                 )
{
        this->ad_title = ad_title;
        this->ad_type = ad_type;
        this->building_type = 3;
        this->building_price = building_price;
        this->building_adress = building_adress;
        this->terrain_area = terrain_area;

} // end constructor

void Terrain::set_terrain_area(double terrain_area)
{
        this->terrain_area = terrain_area;

} // end set_terrain_area

double Terrain::get_terrain_area()
{
        return terrain_area;

} // end get_terrain_area

std::string Terrain::get_building_string()
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
               << "Area do terreno:  " << terrain_area << std::endl
               << "Preco:            " << boost::locale::as::currency << building_price << std::endl;

        return string.str();

} // end get_building_string
