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

#include <stdio.h>
#include "headers/misc.h"
#include "headers/save_data.h"

void save_data(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats)
{
        FILE *output_file;

        // Save houses data in house.dat file

        output_file = fopen ("files/stats.dat", "wb");

        if (!output_file)
        {
                puts("Erro ao abrir stats.dat");

        } // End If

        fwrite(stats, sizeof(tStats), 1, output_file);

        fclose(output_file);

        // Save houses data in house.dat file

        output_file = fopen ("files/houses.dat", "wb");

        if (!output_file)
        {
                puts("Erro ao abrir houses.dat");

        } // End If

        fwrite(house_data, sizeof(tHouse), (*stats).n_house, output_file);

        fclose(output_file);

        // Save apartments data in apartments.dat file

        output_file = fopen ("files/apartments.dat", "wb");

        if (!output_file)
        {
                puts("Erro ao abrir apartments.dat");

        } // End If

        fwrite(apartment_data, sizeof(tApartment), (*stats).n_apartment, output_file);

        fclose(output_file);

        // Save terrains data in terrains.dat file

        output_file = fopen ("files/terrains.dat", "wb");

        if (!output_file)
        {
                puts("Erro ao abrir terrains.dat");

        } // End If

        fwrite(terrain_data, sizeof(tTerrain), (*stats).n_terrain, output_file);

        fclose(output_file);

} // end save_data
