/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef ADRESS_HPP
#define ADRESS_HPP

#include <sstream>

class Adress
{

private:

std::string street;
std::string number;
std::string neighborhood;
std::string city;
std::string zip;

public:

Adress();
Adress(std::string street, std::string number, std::string neighborhood, std::string city, std::string zip);

void set_street(std::string street);
void set_number(std::string number);
void set_neighborhood(std::string neighborhood);
void set_city(std::string city);
void set_zip(std::string zip);

std::string get_street();
std::string get_number();
std::string get_neighborhood();
std::string get_city();
std::string get_zip();
std::string to_string();

}; // end Adress

#endif
