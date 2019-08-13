/*
 *   CRUD State Agency System
 *
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "headers/struct.h"
#include "headers/read_data.h"
#include "headers/print_data.h"
#include "headers/misc.h"
#include "headers/register.h"
#include "headers/save_data.h"
#include "headers/search.h"

#define MAX 1000

int main(int argc, char** argv)
{
        // Variables to store properties data

        tHouse houses[MAX];
        tApartment apartments[MAX];
        tTerrain terrains[MAX];
        tStats stats;

        int any_change;

        read_data(houses, apartments, terrains, &stats);

        // interface - Menu loop

        while(1)
        {
                any_change = 0;

                screen_clean();

                print_div(BLUE);

                colorful_write("IMOBILIARIA\n", CYAN);

                print_div(BLUE);
                colorful_write("\nMENU:\n\n", CYAN);

                // Option 1 - Register

                colorful_write("1", WHITE);
                colorful_write(" - ", GREEN);
                colorful_write("Cadastro\n\n", CYAN);

                // Option 2 - Search

                colorful_write("2", WHITE);
                colorful_write(" - ", GREEN);
                colorful_write("Consulta\n\n", CYAN);

                /*
                // Option 3 - Edit

                colorful_write("3", WHITE);
                colorful_write(" - ", GREEN);
                colorful_write("Editar Anuncio\n\n", CYAN);

                // Option 4 - Delete

                colorful_write("4", WHITE);
                colorful_write(" - ", GREEN);
                colorful_write("Excluir Anuncio\n\n", CYAN);
                */

                // Option 3 - Stats

                colorful_write("3", WHITE);
                colorful_write(" - ", GREEN);
                colorful_write("Estatisticas\n\n", CYAN);

                // Option 4 - Exit

                colorful_write("4", WHITE);
                colorful_write(" - ", GREEN);
                colorful_write("Sair\n\n", CYAN);

                int option;

                print_div(BLUE);

                colorful_write("\nOpcao: ", CYAN);
                change_color(WHITE);
                scanf("%d", &option);

                switch(option)
                {

                case 1:
                        register_selection(houses, apartments, terrains, &stats, &any_change);
                        break;
                case 2:
                        search_type(houses, apartments, terrains, &stats, &any_change);
                        break;
                case 3:
                        print_stats(&stats);
                        break;
                case 4:
                        return 0;
                default:
                        colorful_write("\nOpcao Invalida\n\n", RED);
                        break;

                } // end switch

                if(any_change == 1)
                {
                        save_data(houses, apartments, terrains, &stats);

                } // end if

        } // end while

} // End Main
