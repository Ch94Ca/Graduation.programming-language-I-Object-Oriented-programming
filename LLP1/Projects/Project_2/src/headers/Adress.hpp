/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef ADRESS_HPP
#define ADRESS_HPP

#include <iostream>

class Adress{

private:

std::string street;
std::string number;
std::string neighborhood;
std::string city;
std::string zip_code;

public:

Adress();
Adress(std::string street, std::string number, std::string neighborhood, std::string city, std::string zip_code);

void setStreet(std::string street);
void setNumber(std::string number);
void setNeighborhood(std::string neighborhood);
void setCity(std::string city);
void setZip(std::string zip_code);

std::string getStreet();
std::string getNumber();
std::string getNeighborhood();
std::string getCity();
std::string getZip();

}; // end Adress

#endif
