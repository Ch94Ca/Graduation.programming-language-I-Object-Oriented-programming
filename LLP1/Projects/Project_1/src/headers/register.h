/*
 *   CRUD State Agency System
 *
 *    Module: Register system / interface
 *
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef REGISTER_H
#define REGISTER_H

#include "struct.h"

void register_selection(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change);
void register_adress(tAdress *adress);
void register_house(tHouse *data, tStats *stats);
void register_apartment(tApartment *data, tStats *stats);
void register_terrain(tTerrain *data, tStats *stats);

#endif /* register.h */
