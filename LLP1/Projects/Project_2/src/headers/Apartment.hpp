/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef APARTMENT_HPP
#define APARTMENT_HPP

#include <iostream>
#include "Building.hpp"

class Apartment : protected Building{

private:

  int floor;
  int bedrooms;
  int parking_spaces;
  double area;
  double condominium_fee;
  std::string position;

public:


}; // end Apartment

#endif
