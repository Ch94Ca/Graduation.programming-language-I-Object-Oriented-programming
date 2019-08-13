/*
 *   CRUD State Agency System
 *
 *    Module: Read data
 *
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include <stdio.h>
#include <string.h>
#include "headers/read_data.h"

void read_data(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats)
{
        FILE *input_file;

        // Read houses data in houses.dat file

        input_file = fopen("files/stats.dat", "rb");

        if (!input_file)
        {
                puts("Erro ao abrir stats.dat");

        } // End If

        fread(stats, sizeof(tStats), 1, input_file);

        fclose(input_file);

        // Read houses data in houses.dat file

        input_file = fopen("files/houses.dat", "rb");

        if (!input_file)
        {
                puts("Erro ao abrir houses.dat");

        } // End If

        fread(house_data, sizeof(tHouse), (*stats).n_house, input_file);

        fclose(input_file);

        // Read apartments data in apartments.dat file

        input_file = fopen("files/apartments.dat", "rb");

        if (!input_file)
        {
                puts("Erro ao abrir apartments.dat");

        } // End If

        fread(apartment_data, sizeof(tApartment), (*stats).n_apartment, input_file);

        fclose(input_file);

        // Read terrains data in terrains.dat file

        input_file = fopen("files/terrains.dat", "rb");

        if (!input_file)
        {
                puts("Erro ao abrir terrains.dat");

        } // End If

        fread(terrain_data, sizeof(tTerrain), (*stats).n_terrain, input_file);

        fclose(input_file);

} // end read_data
