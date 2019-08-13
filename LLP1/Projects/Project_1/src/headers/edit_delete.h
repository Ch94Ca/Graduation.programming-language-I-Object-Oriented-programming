/*
 *   CRUD State Agency System
 *
 *    Module: Edit / Delete data
 *
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef EDIT_DELETE_H
#define EDIT_DELETE_H

#include "struct.h"

void delete_building(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, int building_type, tStats *stats, int delete_index, int *any_change);
void delete_house(tHouse *data, tStats *stats, int delete_index);
void delete_apartment(tApartment *data, tStats *stats, int delete_index);
void delete_terrain(tTerrain *data, tStats *stats, int delete_index);
void edit_building(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, int building_type, int *any_change);
void edit_house(tHouse *data);
void edit_house_details(tHouse *data);
void edit_apartment(tApartment *data);
void edit_apartment_details(tApartment *data);
void edit_terrain(tTerrain *data);
void edit_terrain_details(tTerrain *data);
void edit_title(char *title);
void edit_type(int *ad_type);
void edit_adress(tAdress *adress);
void edit_price(double *price);
void delete_message();

#endif /* edit_delete.h */
