/*
 *   CRUD State Agency System
 *
 *    Module: Print data
 *
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef PRINT_DATA_H
#define PRINT_DATA_H

#include "struct.h"

void print_data_singleHouse(tHouse *data, int index);
void print_data_singleApartment(tApartment *data, int index);
void print_data_singleTerrain(tTerrain *data, int index);
void print_stats(tStats *stats);

#endif /* print_data.h */
