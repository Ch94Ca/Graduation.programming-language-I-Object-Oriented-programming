/*
 *   CRUD State Agency System
 *
 *    Module: Registar system / interface
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
#include "headers/register.h"

void register_selection(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, tStats *stats, int *any_change)
{
        screen_clean();

        print_div(BLUE);

        colorful_write("\nTipo de imovel: CASA(", CYAN);
        colorful_write("1", WHITE);
        colorful_write(")", CYAN);
        colorful_write(" / APARTAMENTO(", CYAN);
        colorful_write("2", WHITE);
        colorful_write(")", CYAN);
        colorful_write(" / TERRENO(", CYAN);
        colorful_write("3", WHITE);
        colorful_write(") ?\n\n", CYAN);

        print_div(BLUE);

        int property_type;

        colorful_write("\nTIPO: ", CYAN);

        change_color(WHITE);

        scanf("%d", &property_type);

        print_div(BLUE);

        switch (property_type)
        {

        case 1:
                register_house(house_data, stats);
                *any_change = 1;
                break;
        case 2:
                register_apartment(apartment_data, stats);
                *any_change = 1;
                break;
        case 3:
                register_terrain(terrain_data, stats);
                *any_change = 1;
                break;
        default:
                screen_clean();
                colorful_write("Opcao", CYAN);
                colorful_write(" INVALIDA ", RED);
                colorful_write("Tecle", CYAN);
                colorful_write(" ENTER ", WHITE);
                colorful_write("para continuar\n", CYAN);
                getchar();
                getchar();
                return;

        } // end switch

} // end register selection

void register_adress(tAdress *adress) // Register adress data
{
        print_div(BLUE);

        colorful_write("Endereco\n", CYAN);

        print_div(BLUE);

        colorful_write("\nRua: ", CYAN);

        change_color(WHITE);

        setbuf(stdin, 0);
        fgets((*adress).street, 100, stdin);
        (*adress).street[strlen((*adress).street) - 1] = '\0';
        str_to_upper((*adress).street);

        colorful_write("\nNumero: ", CYAN);

        change_color(WHITE);

        setbuf(stdin, 0);
        fgets((*adress).number, 10, stdin);
        (*adress).number[strlen((*adress).number) - 1] = '\0';

        colorful_write("\nBairro: ", CYAN);

        change_color(WHITE);

        setbuf(stdin, 0);
        fgets((*adress).neighborhood, 50, stdin);
        (*adress).neighborhood[strlen((*adress).neighborhood) - 1] = '\0';
        str_to_upper((*adress).neighborhood);

        colorful_write("\nCidade: ", CYAN);

        change_color(WHITE);

        setbuf(stdin, 0);
        fgets((*adress).city, 50, stdin);
        (*adress).city[strlen((*adress).city) - 1] = '\0';
        str_to_upper((*adress).city);

        colorful_write("\nCEP: ", CYAN);

        change_color(WHITE);

        setbuf(stdin, 0);
        fgets((*adress).zip_code, 50, stdin);
        (*adress).zip_code[strlen((*adress).zip_code) - 1] = '\0';

} // end register_adress

void register_house(tHouse *data, tStats *stats) // Register a house
{
        screen_clean();

        print_div(BLUE);

        colorful_write("Cadastro de Casas\n", CYAN);

        print_div(BLUE);

        colorful_write("\nTipo de cadastro: VENDA(", CYAN);
        colorful_write("1", WHITE);
        colorful_write(")", CYAN);
        colorful_write(" / ALUGUEL(", CYAN);
        colorful_write("2", WHITE);
        colorful_write(")\n\n", CYAN);

        colorful_write("TIPO: ", CYAN);

        change_color(WHITE);

        int ad_type;

        scanf("%d", &ad_type);

        if(ad_type == 1 || ad_type == 2)
        {
                data[(*stats).n_house].ad_type = ad_type;

        } // end if
        else
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

        } // end else

        endl();
        print_div(BLUE);

        colorful_write("\nTitulo do anuncio: ", CYAN);

        change_color(WHITE);

        setbuf(stdin, 0);
        fgets(data[(*stats).n_house].title, 100, stdin);
        data[(*stats).n_house].title[strlen(data[(*stats).n_house].title) - 1] = '\0';
        str_to_upper(data[(*stats).n_house].title);

        endl();

        register_adress(&data[(*stats).n_house].adress);

        endl();

        print_div(BLUE);

        colorful_write("Informacoes do imóvel:\n", CYAN);

        print_div(BLUE);

        colorful_write("\nPavimentos: ", CYAN);

        change_color(WHITE);

        scanf("%d", &data[(*stats).n_house].floors);

        colorful_write("\nQuartos: ", CYAN);

        change_color(WHITE);

        scanf("%d", &data[(*stats).n_house].bedrooms);

        colorful_write("\nArea total: ", CYAN);

        change_color(WHITE);

        scanf("%lf", &data[(*stats).n_house].terrain_area);

        colorful_write("\nArea Construida: ", CYAN);

        change_color(WHITE);

        scanf("%lf", &data[(*stats).n_house].building_area);

        if(ad_type == 1)
        {
                colorful_write("\nValor do imovel:", CYAN);

        } // end if

        if(ad_type == 2)
        {
                colorful_write("\nValor do aluguel:", CYAN);

        } // end if

        colorful_write(" R$ ", WHITE);

        scanf("%lf", &data[(*stats).n_house].price);

        endl();

        ((*stats).n_house)++;

} // end register_houses

void register_apartment(tApartment *data, tStats *stats) // Register an apartment
{
        screen_clean();

        print_div(BLUE);

        colorful_write("Cadastro de Apartamentos\n", CYAN);

        print_div(BLUE);

        colorful_write("\nTipo de cadastro: VENDA(", CYAN);
        colorful_write("1", WHITE);
        colorful_write(")", CYAN);
        colorful_write(" / ALUGUEL(", CYAN);
        colorful_write("2", WHITE);
        colorful_write(")\n\n", CYAN);

        colorful_write("TIPO: ", CYAN);

        change_color(WHITE);

        int ad_type;

        scanf("%d", &ad_type);

        if(ad_type == 1 || ad_type == 2)
        {
                data[(*stats).n_apartment].ad_type = ad_type;

        } // end if
        
        else
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

        } // end else

        endl();
        print_div(BLUE);

        colorful_write("\nTitulo do anuncio: ", CYAN);

        change_color(WHITE);

        setbuf(stdin, 0);
        fgets(data[(*stats).n_apartment].title, 100, stdin);
        data[(*stats).n_apartment].title[strlen(data[(*stats).n_apartment].title) - 1] = '\0';
        str_to_upper(data[(*stats).n_apartment].title);

        endl();

        register_adress(&data[(*stats).n_apartment].adress);

        endl();

        print_div(BLUE);

        colorful_write("Informacoes do imóvel:\n", CYAN);

        print_div(BLUE);

        colorful_write("\nAndar: ", CYAN);

        change_color(WHITE);

        scanf("%d", &data[(*stats).n_apartment].floor);

        colorful_write("\nQuartos: ", CYAN);

        change_color(WHITE);

        scanf("%d", &data[(*stats).n_apartment].bedrooms);

        colorful_write("\nArea: ", CYAN);

        change_color(WHITE);

        scanf("%lf", &data[(*stats).n_apartment].area);

        colorful_write("\nVagas na garagem: ", CYAN);

        change_color(WHITE);

        scanf("%d", &data[(*stats).n_apartment].parking_spaces);

        colorful_write("\nPosicao: ", CYAN);

        change_color(WHITE);

        setbuf(stdin, 0);
        fgets(data[(*stats).n_apartment].position, 100, stdin);
        data[(*stats).n_apartment].position[strlen(data[(*stats).n_apartment].position) - 1] = '\0';
        str_to_upper(data[(*stats).n_apartment].position);

        colorful_write("\nTaxa de condominio:", CYAN);

        colorful_write(" R$ ", WHITE);

        scanf("%lf", &data[(*stats).n_apartment].condominium_fee);

        if(ad_type == 1)
        {
                colorful_write("\nValor do imovel:", CYAN);

        } // end if

        if(ad_type == 2)
        {
                colorful_write("\nValor do aluguel:", CYAN);

        } // end if

        colorful_write(" R$ ", WHITE);

        scanf("%lf", &data[(*stats).n_apartment].price);

        endl();

        ((*stats).n_apartment)++;

} // end register_apartment

void register_terrain(tTerrain *data, tStats *stats) // Register a terrain
{
        screen_clean();

        print_div(BLUE);

        colorful_write("Cadastro de Terrenos\n", CYAN);

        print_div(BLUE);

        colorful_write("\nTipo de cadastro: VENDA(", CYAN);
        colorful_write("1", WHITE);
        colorful_write(")", CYAN);
        colorful_write(" / ALUGUEL(", CYAN);
        colorful_write("2", WHITE);
        colorful_write(")\n\n", CYAN);

        colorful_write("TIPO: ", CYAN);

        change_color(WHITE);

        int ad_type;

        scanf("%d", &ad_type);

        if(ad_type == 1 || ad_type == 2)
        {
                data[(*stats).n_terrain].ad_type = ad_type;

        } // end if
        else
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

        } // end else

        endl();
        print_div(BLUE);

        colorful_write("\nTitulo do anuncio: ", CYAN);

        change_color(WHITE);

        setbuf(stdin, 0);
        fgets(data[(*stats).n_terrain].title, 100, stdin);
        data[(*stats).n_terrain].title[strlen(data[(*stats).n_terrain].title) - 1] = '\0';
        str_to_upper(data[(*stats).n_terrain].title);

        endl();

        register_adress(&data[(*stats).n_terrain].adress);

        endl();

        print_div(BLUE);

        colorful_write("Informacoes do imóvel:\n", CYAN);

        print_div(BLUE);

        colorful_write("\nArea: ", CYAN);

        change_color(WHITE);

        scanf("%lf", &data[(*stats).n_terrain].area);

        if(ad_type == 1)
        {
                colorful_write("\nValor do imovel:", CYAN);

        } // end if

        if(ad_type == 2)
        {
                colorful_write("\nValor do aluguel:", CYAN);

        } // end if

        colorful_write(" R$ ", WHITE);

        scanf("%lf", &data[(*stats).n_terrain].price);

        endl();

        ((*stats).n_terrain)++;

} // end register terrain
