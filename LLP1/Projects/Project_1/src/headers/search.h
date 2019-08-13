/*
 *   CRUD State Agency System
 *
 *    Module: Local search system / interface
 *
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef SEARCH_H
#define SEARCH_H

#include "struct.h"

void make_a_choice(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, int building_type, tStats *stats, int index, int *return_menu, int *any_change);
void search_type(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change);
void select_building_type(int *building_type);
void show_all(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change);
void search_by_title(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change);
void search_by_neighborhood(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change);
void search_by_value(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change);
void search_by_ad_type(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change);

//void search_by_index(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats);

#endif /* search.h */
