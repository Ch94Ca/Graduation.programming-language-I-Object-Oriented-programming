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

#include <stdio.h>
#include "headers/print_data.h"
#include "headers/misc.h"

void print_adress(tAdress *adress) // Print adress data
{
        print_div(BLUE);

        colorful_write("Endereco:\n", CYAN);

        print_div(BLUE);

        endl();

        colorful_write("Rua: ", CYAN);
        colorful_write((*adress).street, WHITE);
        endl();

        colorful_write("Numero: ", CYAN);
        colorful_write((*adress).number, WHITE);
        endl();

        colorful_write("Bairro: ", CYAN);
        colorful_write((*adress).neighborhood, WHITE);
        endl();

        colorful_write("Cidade: ", CYAN);
        colorful_write((*adress).city, WHITE);
        endl();

        colorful_write("CEP: ", CYAN);
        colorful_write((*adress).zip_code, WHITE);
        endl();

        endl();

} // end print_adress

void print_data_singleHouse(tHouse *data, int index) // Print a single house data
{
        screen_clean();

        print_div(BLUE);

        colorful_write("Titulo: ", CYAN);
        colorful_write(data[index].title, WHITE);
        endl();

        print_div(BLUE);

        colorful_write("\nTipo de imovel: ", CYAN);
        colorful_write("CASA\n", WHITE);

        colorful_write("\nTipo de anuncio: ", CYAN);

        if(data[index].ad_type == 1)
        {
                colorful_write("VENDA\n", WHITE);

        } // end if

        else if(data[index].ad_type == 2)
        {
                colorful_write("ALUGUEL\n", WHITE);

        } // end else

        colorful_write("\nPavimentos: ", CYAN);
        change_color(WHITE);
        printf("%d\n", data[index].floors);

        colorful_write("Quartos: ", CYAN);
        change_color(WHITE);
        printf("%d\n", data[index].bedrooms);

        colorful_write("Area total: ", CYAN);
        change_color(WHITE);
        printf("%.2lf\n", data[index].terrain_area);

        colorful_write("Area construida: ", CYAN);
        change_color(WHITE);
        printf("%.2lf\n", data[index].building_area);

        endl();

        print_adress(&data[index].adress);

        print_div(BLUE);

        if(data[index].ad_type == 1)
        {
                colorful_write("\nValor do imovel: ", CYAN);

        } // end if

        if(data[index].ad_type == 2)
        {
                colorful_write("\nValor do aluguel: ", CYAN);

        } // end if

        change_color(WHITE);
        printf("R$ %.2lf\n\n", data[index].price);

        print_div(BLUE);

} // end print_data_singleHouse

void print_data_singleApartment(tApartment *data, int index) // Print a single apartment data
{
        screen_clean();

        print_div(BLUE);

        colorful_write("Titulo: ", CYAN);
        colorful_write(data[index].title, WHITE);
        endl();

        print_div(BLUE);

        colorful_write("\nTipo de imovel: ", CYAN);
        colorful_write("APARTAMENTO\n", WHITE);

        colorful_write("\nTipo de anuncio: ", CYAN);

        if(data[index].ad_type == 1)
        {
                colorful_write("VENDA\n", WHITE);

        } // end if
        else if(data[index].ad_type == 2)
        {
                colorful_write("ALUGUEL\n", WHITE);

        } // end else

        colorful_write("\nAndar: ", CYAN);
        change_color(WHITE);
        printf("%d\n", data[index].floor);

        colorful_write("Quartos: ", CYAN);
        change_color(WHITE);
        printf("%d\n", data[index].bedrooms);

        colorful_write("Vagas na garagem: ", CYAN);
        change_color(WHITE);
        printf("%d\n", data[index].parking_spaces);

        colorful_write("Area: ", CYAN);
        change_color(WHITE);
        printf("%.2lf\n", data[index].area);

        colorful_write("Posicao: ", CYAN);
        change_color(WHITE);
        printf("%s\n", data[index].position);

        colorful_write("Taxa de condominio: ", CYAN);
        change_color(WHITE);
        printf("R$ %.2lf\n", data[index].condominium_fee);

        endl();

        print_adress(&data[index].adress);

        print_div(BLUE);

        if(data[index].ad_type == 1)
        {
                colorful_write("\nValor do imovel: ", CYAN);

        } // end if

        if(data[index].ad_type == 2)
        {
                colorful_write("\nValor do aluguel: ", CYAN);

        } // end if

        change_color(WHITE);
        printf("R$ %.2lf\n\n", data[index].price);

        print_div(BLUE);

} // end print_data_singleApartment

void print_data_singleTerrain(tTerrain *data, int index) // Print a single terrain data
{
        screen_clean();

        print_div(BLUE);

        colorful_write("Titulo: ", CYAN);
        colorful_write(data[index].title, WHITE);
        endl();

        print_div(BLUE);

        colorful_write("\nTipo de imovel: ", CYAN);
        colorful_write("TERRENO\n", WHITE);

        colorful_write("\nTipo de anuncio: ", CYAN);

        if(data[index].ad_type == 1)
        {
                colorful_write("VENDA\n", WHITE);

        } // end if
        else if(data[index].ad_type == 2)
        {
                colorful_write("ALUGUEL\n", WHITE);

        } // end else

        colorful_write("Area: ", CYAN);
        change_color(WHITE);
        printf("%.2lf\n", data[index].area);

        endl();

        print_adress(&data[index].adress);

        print_div(BLUE);

        if(data[index].ad_type == 1)
        {
                colorful_write("\nValor do imovel: ", CYAN);

        } // end if

        if(data[index].ad_type == 2)
        {
                colorful_write("\nValor do aluguel: ", CYAN);

        } // end if

        change_color(WHITE);
        printf("R$ %.2lf\n\n", data[index].price);

        print_div(BLUE);

} // end print_data_singleTerrain

void print_stats(tStats *stats)
{
        screen_clean();

        print_div(BLUE);

        colorful_write("Estatisticas: \n", CYAN);

        print_div(BLUE);

        endl();

        colorful_write("Casas cadastradas: ", CYAN);
        change_color(WHITE);
        printf("%d\n\n", (*stats).n_house);

        colorful_write("Apartamentos cadastrados: ", CYAN);
        change_color(WHITE);
        printf("%d\n\n", (*stats).n_apartment);

        colorful_write("Terrenos cadastradas: ", CYAN);
        change_color(WHITE);
        printf("%d\n\n", (*stats).n_terrain);

        print_div(BLUE);

        colorful_write("Tecle", CYAN);
        colorful_write(" ENTER ", WHITE);
        colorful_write("para voltar ao menu.\n", CYAN);

        print_div(BLUE);

        getchar();
        getchar();

} /// end print_stats
