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
#include <stdlib.h>
#include <string.h>
#include "headers/misc.h"
#include "headers/print_data.h"
#include "headers/search.h"
#include "headers/edit_delete.h"

int deleted;

void make_a_choice(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, int building_type, tStats *stats, int index, int *return_menu, int *any_change) // Choice after search
{
        print_div(BLUE);

        colorful_write("\nAcao: Excluir imovel(", CYAN);
        colorful_write("1", WHITE);
        colorful_write(")", CYAN);
        colorful_write(" / Editar imovel(", CYAN);
        colorful_write("2", WHITE);
        colorful_write(")", CYAN);
        colorful_write(" / Proximo imovel(", CYAN);
        colorful_write("3", WHITE);
        colorful_write(")", CYAN);
        colorful_write(" / Voltar ao menu(", CYAN);
        colorful_write("4", WHITE);
        colorful_write(") ?\n\n", CYAN);

        print_div(BLUE);

        int choice;

        while(1)
        {
                colorful_write("\nAcao: ", CYAN);
                change_color(WHITE);
                scanf("%d", &choice);

                endl();

                if(choice < 1 || choice > 4)
                {
                        print_div(BLUE);

                        colorful_write("\nOpcao", CYAN);
                        colorful_write(" INVALIDA\n\n", RED);

                        print_div(BLUE);

                        continue;

                } // end if

                break;

        } // end while

        *return_menu = 0;

        switch(choice)
        {

        case 1:
                delete_building(house_data, apartment_data, terrain_data, building_type, stats, index, any_change);
                deleted = 1;
                return;
        case 2:
                edit_building(&house_data[index], &apartment_data[index], &terrain_data[index], building_type, any_change);
                break;
        case 3:
                return;
        case 4:
                *return_menu = 1;
                return;

        } // end switch

        switch (building_type)
        {

        case 1:
                print_data_singleHouse(house_data, index);
                break;
        case 2:
                print_data_singleApartment(apartment_data, index);
                break;
        case 3:
                print_data_singleTerrain(terrain_data, index);
                break;

        } // end switch

        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, index, return_menu, any_change);

} // end make_a_choice

void search_type(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change) // Select search type
{
        screen_clean();

        print_div(BLUE);

        colorful_write("\nTipos de busca:\n\n", CYAN);

        colorful_write("1", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Mostrar todos os imoveis\n\n", CYAN);

        colorful_write("2", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Titulo\n\n", CYAN);

        colorful_write("3", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Bairro\n\n", CYAN);

        colorful_write("4", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Valor\n\n", CYAN);

        colorful_write("5", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Imoveis para VENDER ou ALUGAR \n\n", CYAN);

        print_div(BLUE);

        int search_type;

        colorful_write("\nTipo: ", CYAN);
        change_color(WHITE);
        scanf("%d", &search_type);

        if(search_type < 0 || search_type > 5 )
        {
                screen_clean();

                colorful_write("Opcao", CYAN);
                colorful_write(" INVALIDA ", RED);
                colorful_write("Tecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);
                getchar();
                getchar();

                return;

        } // end if

        switch(search_type)
        {

        case 1:
                show_all(house_data, apartment_data, terrain_data, stats, any_change);
                return;
        case 2:
                search_by_title(house_data, apartment_data, terrain_data, stats, any_change);
                return;
        case 3:
                search_by_neighborhood(house_data, apartment_data, terrain_data, stats, any_change);
                return;
        case 4:
                search_by_value(house_data, apartment_data, terrain_data, stats, any_change);
                return;
        case 5:
                search_by_ad_type(house_data, apartment_data, terrain_data, stats, any_change);
                return;

        } // end switch

} // end search_type

/*
   void search_by_index(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats) // Search by index
   {
        screen_clean();

        int building_type;

        select_building_type(&building_type);

        if(building_type < 1 || building_type > 4 )
        {
                screen_clean();

                colorful_write("Opcao", CYAN);
                colorful_write(" INVALIDA ", RED);
                colorful_write("Tecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);
                getchar();
                getchar();

                return;

        } // end if

        int index;

        colorful_write("\nIndice: ", CYAN);
        change_color(WHITE);
        scanf("%d", &index);

        if((building_type == 1 && index >= (*stats).n_house)
 || (building_type == 2 && index >= (*stats).n_apartment)
 || (building_type == 3 && index >= (*stats).n_terrain))
        {
                screen_clean();

                colorful_write("Imovel", CYAN);
                colorful_write(" NAO CADASTRADO ", RED);
                colorful_write("Tecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);
                getchar();
                getchar();

                return;

        }     // end if

        endl();

        switch(building_type)
        {

        case 1:
                print_data_singleHouse(house_data, index);
                break;
        case 2:
                print_data_singleApartment(apartment_data, index);
                break;
        case 3:
                print_data_singleTerrain(terrain_data, index);
                break;

        } // end switch

        endl();

        int return_menu = 0;

        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, index, &return_menu);

   } // end search_by_index
 */

void show_all(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change)
{
        screen_clean();

        int return_menu = 0;

        int search_building_type;

        select_building_type(&search_building_type);

        if(search_building_type < 1 || search_building_type > 4 )
        {
                screen_clean();

                colorful_write("Opcao", CYAN);
                colorful_write(" INVALIDA ", RED);
                colorful_write("Tecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);
                getchar();
                getchar();

                return;

        } // end if

        if(search_building_type == 1)
        {
                print_div(BLUE);

                colorful_write("Casas cadastradas: ", CYAN);
                change_color(WHITE);
                printf("%d\n", (*stats).n_house);
                colorful_write("\nTecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);

                print_div(BLUE);

        } // end if

        if(search_building_type == 2)
        {
                print_div(BLUE);

                colorful_write("Apartamentos cadastrados: ", CYAN);
                change_color(WHITE);
                printf("%d\n", (*stats).n_apartment);
                colorful_write("\nTecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);

                print_div(BLUE);

        } // end if

        if(search_building_type == 3)
        {
                print_div(BLUE);

                colorful_write("Terrenos cadastrados: ", CYAN);
                change_color(WHITE);
                printf("%d\n", (*stats).n_terrain);
                colorful_write("\nTecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);

                print_div(BLUE);

        } // end if

        if(search_building_type == 4)
        {
                print_div(BLUE);

                colorful_write("Casas cadastradas: ", CYAN);
                change_color(WHITE);
                printf("%d\n", (*stats).n_house);
                colorful_write("Apartamentos cadastrados: ", CYAN);
                change_color(WHITE);
                printf("%d\n", (*stats).n_apartment);
                colorful_write("Terrenos cadastrados: ", CYAN);
                change_color(WHITE);
                printf("%d\n", (*stats).n_terrain);
                colorful_write("\nTecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);

                print_div(BLUE);

        } // end if

        getchar();
        getchar();

        if(search_building_type == 1 || search_building_type == 4)
        {
                int i;

                int building_type = 1;

                for(i = 0; i < (*stats).n_house; i++)
                {
                        print_data_singleHouse(house_data, i);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, i, &return_menu, any_change);

                        if(deleted == 1)
                        {
                                i--;
                                deleted = 0;

                        }// end if

                        if(return_menu == 1) return;

                } // end for

        } // end if

        if(search_building_type == 2 || search_building_type == 4)
        {
                int i;

                int building_type = 2;

                for(i = 0; i < (*stats).n_apartment; i++)
                {
                        print_data_singleApartment(apartment_data, i);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, i, &return_menu, any_change);

                        if(deleted == 1)
                        {
                                i--;
                                deleted = 0;

                        }// end if

                        if(return_menu == 1) return;

                } // end for


        } // end if

        if(search_building_type == 3 || search_building_type == 4)
        {
                int i;

                int building_type = 3;

                for(i = 0; i < (*stats).n_terrain; i++)
                {
                        print_data_singleTerrain(terrain_data, i);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, i, &return_menu, any_change);

                        if(deleted == 1)
                        {
                                i--;
                                deleted = 0;

                        }// end if

                        if(return_menu == 1) return;

                } // end for

        } // end if

} // end show_all

void search_by_title(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change)
{
        screen_clean();

        int search_building_type;

        select_building_type(&search_building_type);

        if(search_building_type < 1 || search_building_type > 4 )
        {
                screen_clean();

                colorful_write("Opcao", CYAN);
                colorful_write(" INVALIDA ", RED);
                colorful_write("Tecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);
                getchar();
                getchar();

                return;

        } // end if

        int *houses_index, *apartments_index, *terrains_index;
        int houses_found = 0, apartments_found = 0, terrains_found = 0;

        print_div(BLUE);

        colorful_write("\nBusca por titulo: ", CYAN);
        change_color(WHITE);

        char search_word[100];

        setbuf(stdin, 0);
        fgets(search_word, 100, stdin);
        search_word[strlen(search_word) - 1] = '\0';
        str_to_upper(search_word);
        endl();

        // search houses by title
        if(search_building_type == 1 || search_building_type == 4)
        {
                houses_index = (int *) malloc(((*stats).n_house) * sizeof(int));

                int i, j;

                for(i = 0, j = 0; i < (*stats).n_house; i++)
                {
                        if(strstr(house_data[i].title, search_word))
                        {
                                houses_index[j] = i;
                                houses_found++;
                                j++;

                        } // end if

                } // end for

        } // end if

        // search apartments by title
        if(search_building_type == 2 || search_building_type == 4)
        {
                apartments_index = (int *) malloc(((*stats).n_apartment) * sizeof(int));

                int i, j;

                for(i = 0, j = 0; i < (*stats).n_apartment; i++)
                {
                        if(strstr(apartment_data[i].title, search_word))
                        {
                                apartments_index[j] = i;
                                apartments_found++;
                                j++;

                        } // end if

                } // end for

        } // end if

        // search terrains by title
        if(search_building_type == 3 || search_building_type == 4)
        {
                terrains_index = (int *) malloc(((*stats).n_terrain) * sizeof(int));

                int i, j;

                for(i = 0, j = 0; i < (*stats).n_terrain; i++)
                {
                        if(strstr(terrain_data[i].title, search_word))
                        {
                                terrains_index[j] = i;
                                terrains_found++;
                                j++;

                        } // end if

                } // end for

        } // end if

        print_div(BLUE);

        colorful_write("Imoveis encontrados com o palavra '", CYAN);
        colorful_write(search_word, WHITE);
        colorful_write("' no titulo: ", CYAN);
        change_color(WHITE);
        printf("%d\n", houses_found + apartments_found + terrains_found);
        colorful_write("\nTecle", CYAN);
        colorful_write(" ENTER ", WHITE);
        colorful_write("para continuar\n", CYAN);

        print_div(BLUE);

        getchar();

        int return_menu = 0;

        if(search_building_type == 1 || search_building_type == 4)
        {
                int i;

                int building_type = 1;

                for(i = 0; i < houses_found; i++)
                {
                        print_data_singleHouse(house_data, houses_index[i]);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, houses_index[i], &return_menu, any_change);

                        if(deleted == 1)
                        {
                                int j;

                                for(j = i; j < houses_found; j++)
                                {
                                        houses_index[j]--;

                                } // end for

                                deleted = 0;

                        } // end if

                        if(return_menu == 1) return;

                } // end for

                free(houses_index);

        } // end if

        if(search_building_type == 2 || search_building_type == 4)
        {
                int i;

                int building_type = 2;

                for(i = 0; i < apartments_found; i++)
                {
                        print_data_singleApartment(apartment_data, apartments_index[i]);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, apartments_index[i], &return_menu, any_change);

                        if(deleted == 1)
                        {
                                int j;

                                for(j = i; j < apartments_found; j++)
                                {
                                        apartments_index[j]--;

                                } // end for

                                deleted = 0;

                        } // end if

                        if(return_menu == 1) return;

                } // end for

                free(apartments_index);

        } // end if

        if(search_building_type == 3 || search_building_type == 4)
        {
                int i;

                int building_type = 3;

                for(i = 0; i < terrains_found; i++)
                {
                        print_data_singleTerrain(terrain_data, terrains_index[i]);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, terrains_index[i], &return_menu, any_change);

                        if(deleted == 1)
                        {
                                int j;

                                for(j = i; j < terrains_found; j++)
                                {
                                        terrains_index[j]--;

                                } // end for

                                deleted = 0;

                        } // end if

                        if(return_menu == 1) return;

                } // end for

                free(terrains_index);

        } // end if

} // end search_by_title

void search_by_neighborhood(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change)
{
        screen_clean();

        int search_building_type;

        select_building_type(&search_building_type);

        if(search_building_type < 1 || search_building_type > 4 )
        {
                screen_clean();

                colorful_write("Opcao", CYAN);
                colorful_write(" INVALIDA ", RED);
                colorful_write("Tecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);
                getchar();
                getchar();

                return;

        } // end if

        int *houses_index, *apartments_index, *terrains_index;
        int houses_found = 0, apartments_found = 0, terrains_found = 0;

        print_div(BLUE);

        colorful_write("\nBusca por bairro: ", CYAN);
        change_color(WHITE);

        char search_word[100];

        setbuf(stdin, 0);
        fgets(search_word, 100, stdin);
        search_word[strlen(search_word) - 1] = '\0';
        str_to_upper(search_word);
        endl();

        // search houses by neighborhood
        if(search_building_type == 1 || search_building_type == 4)
        {
                houses_index = (int *) malloc(((*stats).n_house) * sizeof(int));

                int i, j;

                for(i = 0, j = 0; i < (*stats).n_house; i++)
                {
                        if(strstr(house_data[i].adress.neighborhood, search_word))
                        {
                                houses_index[j] = i;
                                houses_found++;
                                j++;

                        } // end if

                } // end for

        } // end if

        // search apartments by neighborhood
        if(search_building_type == 2 || search_building_type == 4)
        {
                apartments_index = (int *) malloc(((*stats).n_apartment) * sizeof(int));

                int i, j;

                for(i = 0, j = 0; i < (*stats).n_apartment; i++)
                {
                        if(strstr(apartment_data[i].adress.neighborhood, search_word))
                        {
                                apartments_index[j] = i;
                                apartments_found++;
                                j++;

                        } // end if

                } // end for

        } // end if

        // search terrains by neighborhood
        if(search_building_type == 3 || search_building_type == 4)
        {
                terrains_index = (int *) malloc(((*stats).n_terrain) * sizeof(int));

                int i, j;

                for(i = 0, j = 0; i < (*stats).n_terrain; i++)
                {
                        if(strstr(terrain_data[i].adress.neighborhood, search_word))
                        {
                                terrains_index[j] = i;
                                terrains_found++;
                                j++;

                        } // end if

                } // end for

        } // end if

        print_div(BLUE);

        colorful_write("Imoveis encontrados no bairro '", CYAN);
        colorful_write(search_word, WHITE);
        colorful_write("': ", CYAN);
        change_color(WHITE);
        printf("%d\n", houses_found + apartments_found + terrains_found);
        colorful_write("\nTecle", CYAN);
        colorful_write(" ENTER ", WHITE);
        colorful_write("para continuar\n", CYAN);

        print_div(BLUE);

        getchar();

        int return_menu = 0;

        if(search_building_type == 1 || search_building_type == 4)
        {
                int i;

                int building_type = 1;

                for(i = 0; i < houses_found; i++)
                {
                        print_data_singleHouse(house_data, houses_index[i]);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, houses_index[i], &return_menu, any_change);

                        if(deleted == 1)
                        {
                                int j;

                                for(j = i; j < houses_found; j++)
                                {
                                        houses_index[j]--;

                                } // end for

                                deleted = 0;

                        } // end if

                        if(return_menu == 1) return;

                } // end for

                free(houses_index);

        } // end if

        if(search_building_type == 2 || search_building_type == 4)
        {
                int i;

                int building_type = 2;

                for(i = 0; i < apartments_found; i++)
                {
                        print_data_singleApartment(apartment_data, apartments_index[i]);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, apartments_index[i], &return_menu, any_change);

                        if(deleted == 1)
                        {
                                int j;

                                for(j = i; j < apartments_found; j++)
                                {
                                        apartments_index[j]--;

                                } // end for

                                deleted = 0;

                        } // end if

                        if(return_menu == 1) return;

                } // end for

                free(apartments_index);

        } // end if

        if(search_building_type == 3 || search_building_type == 4)
        {
                int i;

                int building_type = 3;

                for(i = 0; i < terrains_found; i++)
                {
                        print_data_singleTerrain(terrain_data, terrains_index[i]);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, terrains_index[i], &return_menu, any_change);

                        if(deleted == 1)
                        {
                                int j;

                                for(j = i; j < terrains_found; j++)
                                {
                                        terrains_index[j]--;

                                } // end for

                                deleted = 0;

                        } // end if

                        if(return_menu == 1) return;

                } // end for

                free(terrains_index);

        } // end if

} // end search_by_neighborhood

void search_by_value(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change)
{
        screen_clean();

        int search_building_type;

        select_building_type(&search_building_type);

        if(search_building_type < 1 || search_building_type > 4 )
        {
                screen_clean();

                colorful_write("Opcao", CYAN);
                colorful_write(" INVALIDA ", RED);
                colorful_write("Tecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);
                getchar();
                getchar();

                return;

        } // end if

        int *houses_index, *apartments_index, *terrains_index;
        int houses_found = 0, apartments_found = 0, terrains_found = 0;

        print_div(BLUE);

        colorful_write("Tipo de anuncio: Venda(", CYAN);
        colorful_write("1", WHITE);
        colorful_write(") / Aluguel(", CYAN);
        colorful_write("2", WHITE);
        colorful_write(")\n", CYAN);

        print_div(BLUE);

        colorful_write("\nTipo: ", CYAN);
        change_color(WHITE);
        int search_ad_type;
        scanf("%d", &search_ad_type);
        endl();

        print_div(BLUE);

        if(search_ad_type < 1 || search_ad_type > 2 )
        {
                screen_clean();

                colorful_write("Opcao", CYAN);
                colorful_write(" INVALIDA ", RED);
                colorful_write("Tecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);
                getchar();
                getchar();

                return;

        } // end if

        colorful_write("Tipo de busca por valor: Acima de(", CYAN);
        colorful_write("1", WHITE);
        colorful_write(") / Abaixo de(", CYAN);
        colorful_write("2", WHITE);
        colorful_write(")\n", CYAN);

        print_div(BLUE);

        colorful_write("\nTipo: ", CYAN);
        change_color(WHITE);
        int value_search_type;
        scanf("%d", &value_search_type);
        endl();

        print_div(BLUE);

        if(value_search_type < 1 || value_search_type > 2 )
        {
                screen_clean();

                colorful_write("Opcao", CYAN);
                colorful_write(" INVALIDA ", RED);
                colorful_write("Tecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);
                getchar();
                getchar();

                return;

        } // end if

        colorful_write("Valor desejado:\n", CYAN);

        print_div(BLUE);

        colorful_write("\nValor: ", CYAN);
        colorful_write("R$ ", WHITE);
        change_color(WHITE);
        double value_search;
        scanf("%lf", &value_search);

        print_div(BLUE);

        endl();

        if(value_search_type == 1)
        {
                // search houses by price
                if(search_building_type == 1 || search_building_type == 4)
                {
                        houses_index = (int *) malloc(((*stats).n_house) * sizeof(int));

                        int i, j;

                        for(i = 0, j = 0; i < (*stats).n_house; i++)
                        {
                                if(house_data[i].ad_type == search_ad_type)
                                {
                                        if(house_data[i].price > value_search)
                                        {
                                                houses_index[j] = i;
                                                houses_found++;
                                                j++;

                                        } // end if

                                } // end if

                        } // end for

                } // end if

                // search apartments by price
                if(search_building_type == 2 || search_building_type == 4)
                {
                        apartments_index = (int *) malloc(((*stats).n_apartment) * sizeof(int));

                        int i, j;

                        for(i = 0, j = 0; i < (*stats).n_apartment; i++)
                        {
                                if(apartment_data[i].ad_type == search_ad_type)
                                {
                                        if(apartment_data[i].price > value_search)
                                        {
                                                apartments_index[j] = i;
                                                apartments_found++;
                                                j++;

                                        } // end if

                                } // end if

                        } // end for

                } // end if

                // search terrains by price
                if(search_building_type == 3 || search_building_type == 4)
                {
                        terrains_index = (int *) malloc(((*stats).n_terrain) * sizeof(int));

                        int i, j;

                        for(i = 0, j = 0; i < (*stats).n_terrain; i++)
                        {
                                if(terrain_data[i].ad_type == search_ad_type)
                                {
                                        if(terrain_data[i].price > value_search)
                                        {
                                                terrains_index[j] = i;
                                                terrains_found++;
                                                j++;

                                        } // end if

                                } // end if

                        } // end for

                } // end if

        } // end if

        if(value_search_type == 2)
        {
                // search houses by price
                if(search_building_type == 1 || search_building_type == 4)
                {
                        houses_index = (int *) malloc(((*stats).n_house) * sizeof(int));

                        int i, j;

                        for(i = 0, j = 0; i < (*stats).n_house; i++)
                        {
                                if(house_data[i].ad_type == search_ad_type)
                                {
                                        if(house_data[i].price < value_search)
                                        {
                                                houses_index[j] = i;
                                                houses_found++;
                                                j++;

                                        } // end if

                                } // end if

                        } // end for

                } // end if

                // search apartments by price
                if(search_building_type == 2 || search_building_type == 4)
                {
                        apartments_index = (int *) malloc(((*stats).n_apartment) * sizeof(int));

                        int i, j;

                        for(i = 0, j = 0; i < (*stats).n_apartment; i++)
                        {
                                if(apartment_data[i].ad_type == search_ad_type)
                                {
                                        if(apartment_data[i].price < value_search)
                                        {
                                                apartments_index[j] = i;
                                                apartments_found++;
                                                j++;

                                        } // end if

                                } // end if

                        } // end for

                } // end if

                // search terrains by price
                if(search_building_type == 3 || search_building_type == 4)
                {
                        terrains_index = (int *) malloc(((*stats).n_terrain) * sizeof(int));

                        int i, j;

                        for(i = 0, j = 0; i < (*stats).n_terrain; i++)
                        {
                                if(terrain_data[i].ad_type == search_ad_type)
                                {
                                        if(terrain_data[i].price < value_search)
                                        {
                                                terrains_index[j] = i;
                                                terrains_found++;
                                                j++;

                                        } // end if

                                } // end if

                        } // end for

                } // end if

        } // end if

        print_div(BLUE);

        colorful_write("Imoveis para", CYAN);

        if(search_ad_type == 1)
        {
                colorful_write(" VENDER ", WHITE);

        } // end if

        if(search_ad_type == 2)
        {
                colorful_write(" ALUGAR ", WHITE);

        } // end if

        if(value_search_type == 1)
        {
                colorful_write("ACIMA ", WHITE);

        } // end if

        if(value_search_type == 2)
        {
                colorful_write("ABAIXO ", WHITE);

        } // end if

        colorful_write("de: ", CYAN);
        change_color(WHITE);
        printf("R$ %.2lf", value_search);
        colorful_write(" Encontrados: ", CYAN);
        change_color(WHITE);
        printf("%d\n", houses_found + apartments_found + terrains_found);
        colorful_write("\nTecle", CYAN);
        colorful_write(" ENTER ", WHITE);
        colorful_write("para continuar\n", CYAN);

        print_div(BLUE);

        getchar();
        getchar();

        int return_menu = 0;

        if(search_building_type == 1 || search_building_type == 4)
        {
                int i;

                int building_type = 1;

                for(i = 0; i < houses_found; i++)
                {
                        print_data_singleHouse(house_data, houses_index[i]);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, houses_index[i], &return_menu, any_change);

                        if(deleted == 1)
                        {
                                int j;

                                for(j = i; j < houses_found; j++)
                                {
                                        houses_index[j]--;

                                } // end for

                                deleted = 0;

                        } // end if

                        if(return_menu == 1) return;

                } // end for

                free(houses_index);

        } // end if

        if(search_building_type == 2 || search_building_type == 4)
        {
                int i;

                int building_type = 2;

                for(i = 0; i < apartments_found; i++)
                {
                        print_data_singleApartment(apartment_data, apartments_index[i]);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, apartments_index[i], &return_menu, any_change);

                        if(deleted == 1)
                        {
                                int j;

                                for(j = i; j < apartments_found; j++)
                                {
                                        apartments_index[j]--;

                                } // end for

                                deleted = 0;

                        } // end if

                        if(return_menu == 1) return;

                } // end for

                free(apartments_index);

        } // end if

        if(search_building_type == 3 || search_building_type == 4)
        {
                int i;

                int building_type = 3;

                for(i = 0; i < terrains_found; i++)
                {
                        print_data_singleTerrain(terrain_data, terrains_index[i]);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, terrains_index[i], &return_menu, any_change);

                        if(deleted == 1)
                        {
                                int j;

                                for(j = i; j < terrains_found; j++)
                                {
                                        terrains_index[j]--;

                                } // end for

                                deleted = 0;

                        } // end if

                        if(return_menu == 1) return;

                } // end for

                free(terrains_index);

        } // end if

} // end search_by_value

void search_by_ad_type(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change)
{
        screen_clean();

        int search_building_type;

        select_building_type(&search_building_type);

        if(search_building_type < 1 || search_building_type > 4 )
        {
                screen_clean();

                colorful_write("Opcao", CYAN);
                colorful_write(" INVALIDA ", RED);
                colorful_write("Tecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);
                getchar();
                getchar();

                return;

        } // end if

        int *houses_index, *apartments_index, *terrains_index;
        int houses_found = 0, apartments_found = 0, terrains_found = 0;

        print_div(BLUE);

        colorful_write("Tipo de anuncio: Venda(", CYAN);
        colorful_write("1", WHITE);
        colorful_write(") / Aluguel(", CYAN);
        colorful_write("2", WHITE);
        colorful_write(")\n", CYAN);

        print_div(BLUE);

        colorful_write("\nTipo: ", CYAN);
        change_color(WHITE);
        int search_ad_type;
        scanf("%d", &search_ad_type);

        print_div(BLUE);

        endl();

        if(search_ad_type < 1 || search_ad_type > 2 )
        {
                screen_clean();

                colorful_write("Opcao", CYAN);
                colorful_write(" INVALIDA ", RED);
                colorful_write("Tecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);
                getchar();
                getchar();

                return;

        } // end if

        // search houses by ad type
        if(search_building_type == 1 || search_building_type == 4)
        {
                houses_index = (int *) malloc(((*stats).n_house) * sizeof(int));

                int i, j;

                for(i = 0, j = 0; i < (*stats).n_house; i++)
                {
                        if(house_data[i].ad_type == search_ad_type)
                        {
                                houses_index[j] = i;
                                houses_found++;
                                j++;

                        } // end if

                } // end for

        } // end if

        // search apartments by ad type
        if(search_building_type == 2 || search_building_type == 4)
        {
                apartments_index = (int *) malloc(((*stats).n_apartment) * sizeof(int));

                int i, j;

                for(i = 0, j = 0; i < (*stats).n_apartment; i++)
                {
                        if(apartment_data[i].ad_type == search_ad_type)
                        {
                                apartments_index[j] = i;
                                apartments_found++;
                                j++;

                        } // end if

                } // end for

        } // end if

        // search terrains by ad type
        if(search_building_type == 3 || search_building_type == 4)
        {
                terrains_index = (int *) malloc(((*stats).n_terrain) * sizeof(int));

                int i, j;

                for(i = 0, j = 0; i < (*stats).n_terrain; i++)
                {
                        if(terrain_data[i].ad_type == search_ad_type)
                        {
                                terrains_index[j] = i;
                                terrains_found++;
                                j++;

                        } // end if

                } // end for

        } // end if

        print_div(BLUE);

        colorful_write("Imoveis para", CYAN);

        if(search_ad_type == 1)
        {

                colorful_write(" VENDER ", WHITE);

        } // end if

        if(search_ad_type == 2)
        {

                colorful_write(" ALUGAR ", WHITE);

        } // end if

        colorful_write("encontrados: ", CYAN);
        change_color(WHITE);
        printf("%d\n", houses_found + apartments_found + terrains_found);
        colorful_write("\nTecle", CYAN);
        colorful_write(" ENTER ", WHITE);
        colorful_write("para continuar\n", CYAN);

        print_div(BLUE);

        getchar();
        getchar();

        int return_menu = 0;

        if(search_building_type == 1 || search_building_type == 4)
        {
                int i;

                int building_type = 1;

                for(i = 0; i < houses_found; i++)
                {
                        print_data_singleHouse(house_data, houses_index[i]);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, houses_index[i], &return_menu, any_change);

                        if(deleted == 1)
                        {
                                int j;

                                for(j = i; j < houses_found; j++)
                                {
                                        houses_index[j]--;

                                } // end for

                                deleted = 0;

                        } // end if

                        if(return_menu == 1) return;

                } // end for

                free(houses_index);

        } // end if

        if(search_building_type == 2 || search_building_type == 4)
        {
                int i;

                int building_type = 2;

                for(i = 0; i < apartments_found; i++)
                {
                        print_data_singleApartment(apartment_data, apartments_index[i]);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, apartments_index[i], &return_menu, any_change);

                        if(deleted == 1)
                        {
                                int j;

                                for(j = i; j < apartments_found; j++)
                                {
                                        apartments_index[j]--;

                                } // end for

                                deleted = 0;

                        } // end if

                        if(return_menu == 1) return;

                } // end for

                free(apartments_index);

        } // end if

        if(search_building_type == 3 || search_building_type == 4)
        {
                int i;

                int building_type = 3;

                for(i = 0; i < terrains_found; i++)
                {
                        print_data_singleTerrain(terrain_data, terrains_index[i]);
                        make_a_choice(house_data, apartment_data, terrain_data, building_type, stats, terrains_index[i], &return_menu, any_change);

                        if(deleted == 1)
                        {
                                int j;

                                for(j = i; j < terrains_found; j++)
                                {
                                        terrains_index[j]--;

                                } // end for

                                deleted = 0;

                        } // end if

                        if(return_menu == 1) return;

                } // end for

                free(terrains_index);

        } // end if

} // end search_by_ad_type

void select_building_type(int *building_type)
{
        print_div(BLUE);

        colorful_write("\nTipo de imovel: CASA(", CYAN);
        colorful_write("1", WHITE);
        colorful_write(")", CYAN);
        colorful_write(" / APARTAMENTO(", CYAN);
        colorful_write("2", WHITE);
        colorful_write(")", CYAN);
        colorful_write(" / TERRENO(", CYAN);
        colorful_write("3", WHITE);
        colorful_write(")", CYAN);
        colorful_write(" / TODOS(", CYAN);
        colorful_write("4", WHITE);
        colorful_write(") ?\n\n", CYAN);

        print_div(BLUE);

        colorful_write("\nTipo: ", CYAN);
        change_color(WHITE);
        scanf("%d", &(*building_type));
        endl();

} // end select_building_type
