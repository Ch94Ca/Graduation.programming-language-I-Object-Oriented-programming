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

#include <stdio.h>
#include <string.h>
#include "headers/misc.h"
#include "headers/struct.h"
#include "headers/save_data.h"
#include "headers/edit_delete.h"
#include "headers/print_data.h"

void delete_building(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, int building_type, tStats *stats, int delete_index, int *any_change)
{
        switch(building_type)
        {

        case 1:
                delete_house(house_data, stats, delete_index);
                break;
        case 2:
                delete_apartment(apartment_data, stats, delete_index);
                break;
        case 3:
                delete_terrain(terrain_data, stats, delete_index);
                break;

        } // end switchs

        *any_change = 1;

} // end delete_building

void delete_house(tHouse *data, tStats *stats, int delete_index)
{
        int i;

        for (i = delete_index; i < ((*stats).n_house - 1); i++)
        {
                memcpy(&data[i], &data[i+1], sizeof(tHouse));

        } // end for

        // clear the last array position
        memset(&data[((*stats).n_apartment) - 1], 0, sizeof data[((*stats).n_apartment) - 1]);

        (*stats).n_house--;

        delete_message();

} // end delete_house

void delete_apartment(tApartment *data, tStats *stats, int delete_index)
{
        int i;

        for (i = delete_index; i < ((*stats).n_apartment - 1); i++)
        {
                memcpy(&data[i], &data[i+1], sizeof(tApartment));

        } // end for

        // clear the last array position
        memset(&data[((*stats).n_apartment) - 1], 0, sizeof data[((*stats).n_apartment) - 1]);

        (*stats).n_apartment--;

        delete_message();

} // end delete_apartment

void delete_terrain(tTerrain *data, tStats *stats, int delete_index)
{
        int i;

        for (i = delete_index; i < ((*stats).n_terrain - 1); i++)
        {
                memcpy(&data[i], &data[i+1], sizeof(tTerrain));

        } // end for

        // clear the last array position
        memset(&data[((*stats).n_terrain) - 1], 0, sizeof data[((*stats).n_terrain) - 1]);

        (*stats).n_terrain--;

        delete_message();

} // end delete_terrain

void delete_message()
{
        screen_clean();

        print_div(BLUE);

        colorful_write("Imovel", CYAN);
        colorful_write(" EXCLUIDO ", RED);
        colorful_write("com sucesso. Tecle", CYAN);
        colorful_write(" ENTER ", WHITE);
        colorful_write("para continuar\n", CYAN);

        print_div(BLUE);

        getchar();
        getchar();

} // end delete_message

void edit_building(tHouse *house_data, tApartment *apartment_data, tTerrain *terrain_data, int building_type, int *any_change)
{
        switch(building_type)
        {

        case 1:
                edit_house(house_data);
                break;
        case 2:
                edit_apartment(apartment_data);
                break;
        case 3:
                edit_terrain(terrain_data);
                break;

        } // end switchs

        *any_change = 1;

} // end edit_building

void edit_house(tHouse *data)
{
        screen_clean();

        print_div(BLUE);

        colorful_write("O que deseja editar:\n", CYAN);

        print_div(BLUE);

        // Option 1 - Title

        colorful_write("\n1", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Titulo\n\n", CYAN);

        // Option 2 - Ad type

        colorful_write("2", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Tipo de anuncio\n\n", CYAN);

        // Option 3 - Building details

        colorful_write("3", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Informacoes do imovel\n\n", CYAN);

        // Option 4 - Adress

        colorful_write("4", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Endereco\n\n", CYAN);

        // Option 5 - Price

        colorful_write("5", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Valores\n\n", CYAN);

        print_div(BLUE);

        int choice;

        colorful_write("\nTipo: ", CYAN);
        change_color(WHITE);
        scanf("%d", &choice);

        switch(choice)
        {

        case 1:
                edit_title((*data).title);
                break;
        case 2:
                edit_type(&(*data).ad_type);
                break;
        case 3:
                edit_house_details(data);
                break;
        case 4:
                edit_adress(&(*data).adress);
                break;
        case 5:
                edit_price(&(*data).price);
                break;
        default:
                colorful_write("\nOpcao Invalida\n\n", RED);
                break;

        } // end switch

} // end edit_house

void edit_house_details(tHouse *data)
{
        screen_clean();

        print_div(BLUE);

        colorful_write("\nDetalhes do imóvel:\n", CYAN);

        colorful_write("\nPavimentos: ", CYAN);
        change_color(WHITE);
        printf("%d\n", (*data).floors);

        colorful_write("Quartos: ", CYAN);
        change_color(WHITE);
        printf("%d\n", (*data).bedrooms);

        colorful_write("Area total: ", CYAN);
        change_color(WHITE);
        printf("%.2lf\n", (*data).terrain_area);

        colorful_write("Area construida: ", CYAN);
        change_color(WHITE);
        printf("%.2lf\n\n", (*data).building_area);

        print_div(BLUE);

        colorful_write("Novos detalhes do imóvel:\n", CYAN);

        print_div(BLUE);

        colorful_write("\nPavimentos: ", CYAN);
        change_color(WHITE);
        scanf("%d", &(*data).floors);
        endl();

        colorful_write("Quartos: ", CYAN);
        change_color(WHITE);
        scanf("%d", &(*data).bedrooms);
        endl();

        colorful_write("Area total: ", CYAN);
        change_color(WHITE);
        scanf("%lf", &(*data).terrain_area);
        endl();

        colorful_write("Area construida: ", CYAN);
        change_color(WHITE);
        scanf("%lf", &(*data).building_area);
        endl();

} // end edit_house_details

void edit_apartment(tApartment *data)
{
        screen_clean();

        print_div(BLUE);

        colorful_write("O que deseja editar:\n", CYAN);

        print_div(BLUE);

        // Option 1 - Title

        colorful_write("\n1", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Titulo\n\n", CYAN);

        // Option 2 - Ad type

        colorful_write("2", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Tipo de anuncio\n\n", CYAN);

        // Option 3 - Building details

        colorful_write("3", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Informacoes do imovel\n\n", CYAN);

        // Option 4 - Adress

        colorful_write("4", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Endereco\n\n", CYAN);

        // Option 5 - Price

        colorful_write("5", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Valores\n\n", CYAN);

        print_div(BLUE);

        int choice;

        colorful_write("\nTipo: ", CYAN);
        change_color(WHITE);
        scanf("%d", &choice);

        switch(choice)
        {

        case 1:
                edit_title((*data).title);
                break;
        case 2:
                edit_type(&(*data).ad_type);
                break;
        case 3:
                edit_apartment_details(data);
                break;
        case 4:
                edit_adress(&(*data).adress);
                break;
        case 5:
                edit_price(&(*data).price);
                break;
        default:
                colorful_write("\nOpcao Invalida\n\n", RED);
                break;

        } // end switch

} // end edit_apartment

void edit_apartment_details(tApartment *data)
{
        screen_clean();

        print_div(BLUE);

        colorful_write("\nDetalhes do imóvel:\n", CYAN);

        colorful_write("\nAndar: ", CYAN);
        change_color(WHITE);
        printf("%d\n", (*data).floor);

        colorful_write("Quartos: ", CYAN);
        change_color(WHITE);
        printf("%d\n", (*data).bedrooms);

        colorful_write("Vagas na garagem: ", CYAN);
        change_color(WHITE);
        printf("%d\n", (*data).parking_spaces);

        colorful_write("Area: ", CYAN);
        change_color(WHITE);
        printf("%.2lf\n", (*data).area);

        colorful_write("Posicao: ", CYAN);
        change_color(WHITE);
        printf("%s\n\n", (*data).position);

        colorful_write("Taxa de condominio: ", CYAN);
        change_color(WHITE);
        printf("%.2lf\n\n", (*data).condominium_fee);

        print_div(BLUE);

        colorful_write("Novos detalhes do imóvel:\n", CYAN);

        print_div(BLUE);

        colorful_write("\nAndar: ", CYAN);
        change_color(WHITE);
        scanf("%d", &(*data).floor);
        endl();

        colorful_write("Quartos: ", CYAN);
        change_color(WHITE);
        scanf("%d", &(*data).bedrooms);
        endl();

        colorful_write("Vagas na garagem: ", CYAN);
        change_color(WHITE);
        scanf("%d", &(*data).parking_spaces);
        endl();

        colorful_write("Area: ", CYAN);
        change_color(WHITE);
        scanf("%lf", &(*data).area);
        endl();

        colorful_write("Posicao: ", CYAN);
        change_color(WHITE);
        setbuf(stdin, 0);
        fgets((*data).position, 100, stdin);
        (*data).position[strlen((*data).position) - 1] = '\0';
        str_to_upper((*data).position);
        endl();

        colorful_write("Taxa de condominio: ", CYAN);
        change_color(WHITE);
        scanf("%lf", &(*data).condominium_fee);
        endl();

} // end edit_apartment_details

void edit_terrain(tTerrain *data)
{
        screen_clean();

        print_div(BLUE);

        colorful_write("O que deseja editar:\n", CYAN);

        print_div(BLUE);

        // Option 1 - Title

        colorful_write("\n1", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Titulo\n\n", CYAN);

        // Option 2 - Ad type

        colorful_write("2", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Tipo de anuncio\n\n", CYAN);

        // Option 3 - Building details

        colorful_write("3", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Informacoes do imovel\n\n", CYAN);

        // Option 4 - Adress

        colorful_write("4", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Endereco\n\n", CYAN);

        // Option 5 - Price

        colorful_write("5", WHITE);
        colorful_write(" - ", GREEN);
        colorful_write("Valores\n\n", CYAN);

        print_div(BLUE);

        int choice;

        colorful_write("\nTipo: ", CYAN);
        change_color(WHITE);
        scanf("%d", &choice);

        switch(choice)
        {

        case 1:
                edit_title((*data).title);
                break;
        case 2:
                edit_type(&(*data).ad_type);
                break;
        case 3:
                edit_terrain_details(data);
                break;
        case 4:
                edit_adress(&(*data).adress);
                break;
        case 5:
                edit_price(&(*data).price);
                break;
        default:
                colorful_write("\nOpcao Invalida\n\n", RED);
                break;

        } // end switch

} // end edit_terrain

void edit_terrain_details(tTerrain *data)
{
        screen_clean();

        print_div(BLUE);

        colorful_write("\nDetalhes do imóvel:\n", CYAN);

        colorful_write("\nArea: ", CYAN);
        change_color(WHITE);
        printf("%.2lf\n\n", (*data).area);

        print_div(BLUE);

        colorful_write("Novos detalhes do imóvel:\n", CYAN);

        print_div(BLUE);

        colorful_write("\nArea: ", CYAN);
        change_color(WHITE);
        scanf("%lf", &(*data).area);
        endl();

} // end edit_terrain_details

void edit_title(char *title)
{
        screen_clean();

        print_div(BLUE);

        colorful_write("Titulo do anuncio: ", CYAN);
        colorful_write(title, WHITE);
        endl();

        print_div(BLUE);

        colorful_write("\nNovo titulo: ", CYAN);

        change_color(WHITE);

        setbuf(stdin, 0);
        fgets(title, 100, stdin);
        title[strlen(title) - 1] = '\0';
        str_to_upper(title);

} // end edit_title

void edit_adress(tAdress *adress)
{
        screen_clean();

        print_div(BLUE);

        colorful_write("Endereco:\n", CYAN);

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

        print_div(BLUE);

        colorful_write("Novo endereco:\n", CYAN);

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

} // end edit_adress

void edit_type(int *ad_type)
{
        screen_clean();

        print_div(BLUE);

        colorful_write("Tipo de anuncio: ", CYAN);

        if(*ad_type == 1)
        {
                colorful_write("VENDA\n", WHITE);

        } // end if
        else if(*ad_type == 2)
        {
                colorful_write("ALUGUEL\n", WHITE);

        } // end else

        print_div(BLUE);

        colorful_write("\nNovo tipo de cadastro: VENDA(", CYAN);
        colorful_write("1", WHITE);
        colorful_write(")", CYAN);
        colorful_write(" / ALUGUEL(", CYAN);
        colorful_write("2", WHITE);
        colorful_write(")\n\n", CYAN);

        colorful_write("TIPO: ", CYAN);

        change_color(WHITE);

        scanf("%d", ad_type);

} // end edit_type

void edit_price(double *price)
{
        screen_clean();

        print_div(BLUE);

        colorful_write("PRECO DO IMOVEL: ", CYAN);
        change_color(WHITE);
        printf("R$ %.2lf\n", *price);

        print_div(BLUE);

        colorful_write("\nNovo preco do imovel: ", CYAN);
        change_color(WHITE);
        printf("R$ ");
        scanf("%lf", &(*price));

} // end edit_price
