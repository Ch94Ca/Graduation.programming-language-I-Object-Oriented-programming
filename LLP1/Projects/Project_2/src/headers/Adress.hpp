/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef ADRESS_HPP
#define ADRESS_HPP

#include <iostream>
#include <boost/serialization/vector.hpp>

class Adress {

protected:

std::string street;
std::string number;
std::string neighborhood;
std::string city;
std::string zip_code;

// serialize code

friend class boost::serialization::access;

template<class Archive>

void serialize(Archive & ar, const unsigned int version)
{
        ar & street;
        ar & number;
        ar & neighborhood;
        ar & city;
        ar & zip_code;

}   // end serialize

// end of serialize code

public:

Adress();
Adress(std::string street,
       std::string number,
       std::string neighborhood,
       std::string city,
       std::string zip_code);

void set_street(std::string street);
void set_number(std::string number);
void set_neighborhood(std::string neighborhood);
void set_city(std::string city);
void set_zip_code(std::string zip_code);

std::string get_street();
std::string get_number();
std::string get_neighborhood();
std::string get_city();
std::string get_zip_code();

std::string get_adress_string();

}; // end Adress

#endif
