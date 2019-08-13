/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef BUILDING_HPP
#define BUILDING_HPP

#include <iostream>
#include "Adress.hpp"

class Building{

private:

std::string title;
Adress adress;
int building_type;
int ad_type;
double price;

public:

void setAdress(std::string street, std::string number, std::string neighborhood, std::string city, std::string zip_code);
void setBuildingType(int building_type);
void setAdType(int ad_type);
void setPrice(double price);

Adress getAdress();
int getBuildingType();
int getAdType();
double getPrice();

}; // end Building

#endif
