/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef UI_HPP
#define UI_HPP

#include "House.hpp"
#include "Apartment.hpp"
#include "Terrain.hpp"
#include "Building.hpp"
#include "Real_estate_office.hpp"

void error_ui();
void error_nb_ui();
int building_type();
Adress adress_register();
House house_register_ui();
Apartment apartment_register_ui();
Terrain terrain_register_ui();

int search_option_ui();
void building_search_ui(Real_estate_office& office, bool& any_change);
void edit_ui(Real_estate_office& office,
             std::vector<int>& result_buildings,
             bool& any_change,
             long unsigned int& i);

void terminal_cls();
void print_line();
void endl();

#endif
