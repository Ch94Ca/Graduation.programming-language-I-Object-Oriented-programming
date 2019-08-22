/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Apartment.hpp"

#include <sstream>
#include <boost/locale/generator.hpp>
#include <boost/locale.hpp>

Apartment::Apartment()
{
        this->building_type = 2;

} // end constructor

Apartment::Apartment(std::string ad_title,
                     int ad_type,
                     double building_price,
                     Adress building_adress,
                     int apartment_floor,
                     int apartment_bedrooms,
                     int apartment_parking_spaces,
                     double apartment_area,
                     double condominium_fee,
                     std::string apartment_position)
{
        this->ad_title = ad_title;
        this->ad_type = ad_type;
        this->building_type = 2;
        this->building_adress = building_adress;
        this->apartment_floor = apartment_floor;
        this->apartment_bedrooms = apartment_bedrooms;
        this->apartment_parking_spaces = apartment_parking_spaces;
        this->apartment_area = apartment_area;
        this->condominium_fee = condominium_fee;
        this->building_price = building_price;
        this->apartment_position = apartment_position;

} // end constructor

void Apartment::set_apartment_floor(int apartment_floor)
{
        this->apartment_floor = apartment_floor;

} // end set_apartment_floor

void Apartment::set_apartment_bedrooms(int apartment_bedrooms)
{
        this->apartment_bedrooms = apartment_bedrooms;

} // end set_apartment_bedrooms

void Apartment::set_apartment_parking_spaces(int apartment_parking_spaces)
{
        this->apartment_parking_spaces = apartment_parking_spaces;

} // end set_apartment_parking_spaces

void Apartment::set_apartment_area(double apartment_area)
{
        this->apartment_area = apartment_area;

} //end set_apartment_area

void Apartment::set_condominium_fee(double condominium_fee)
{
        this->condominium_fee = condominium_fee;

} // end set_condominium_fee

void Apartment::set_apartment_position(std::string apartment_position)
{
        this->apartment_position = apartment_position;

} // end set_apartment_position

int Apartment::get_apartment_floor()
{
        return apartment_floor;

} // end get_apartment_floor

int Apartment::get_apartment_bedrooms()
{
        return apartment_bedrooms;

} // get_apartment_bedrooms

int Apartment::get_apartment_parking_spaces()
{
        return apartment_parking_spaces;

} // end get_apartment_parking_spaces

double Apartment::get_apartment_area()
{
        return apartment_area;

} // end get_apartment_area

double Apartment::get_condominium_fee()
{
        return condominium_fee;

} // end get_condominium_fee

std::string Apartment::get_apartment_position()
{
        return apartment_position;

} // end get_apartment_position

std::string Apartment::get_building_string()
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
               << "Andar:               " << apartment_floor << std::endl
               << "Numero de Quartos:   " << apartment_bedrooms << std::endl
               << "Vagas na garagem:    " << apartment_parking_spaces << std::endl
               << "Area total:          " << apartment_area << std::endl
               << "Posicao:             " << apartment_position << std::endl
               << "Taxa de condominio:  " << boost::locale::as::currency << condominium_fee << std::endl
               << "Preco:               " << boost::locale::as::currency << building_price << std::endl;

        return string.str();

} // end get_building_string
