/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Adress.hpp"

Adress::Adress()
{

} // end constructor

Adress::Adress(std::string street, std::string number, std::string neighborhood, std::string city, std::string zip)
{
        this->street = street;
        this->number = number;
        this->neighborhood = neighborhood;
        this->city = city;
        this->zip = zip;

} // end constructor

void Adress::set_street(std::string street)
{
        this->street = street;

} // end set_street

void Adress::set_number(std::string number)
{
        this->number = number;

} // end set_number

void Adress::set_neighborhood(std::string neighborhood)
{
        this->neighborhood = neighborhood;

} // end set_neighborhood

void Adress::set_city(std::string city)
{
        this->city = city;

} // end set_city

void Adress::set_zip(std::string zip)
{
        this->zip = zip;

} // end set_zip

std::string Adress::get_street()
{
        return street;

} // end get_street

std::string Adress::get_number()
{
        return number;

} // end get_number

std::string Adress::get_neighborhood()
{
        return neighborhood;

} // end get_neighborhood

std::string Adress::get_city()
{
        return city;

} // end get_city

std::string Adress::get_zip()
{
        return zip;

} // end get_zip

std::string Adress::to_string()
{
        std::stringstream string;

        string << "Adress: " << "Street " << street << " No. " << number << std::endl <<
                "Neighborhood: " << neighborhood << std::endl << "City: " << city << std::endl <<
                "ZIP: " << zip << std::endl;

        return string.str();

} // end to_string
