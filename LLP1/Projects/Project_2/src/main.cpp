/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Building.hpp"
#include "headers/House.hpp"
#include "headers/Apartment.hpp"
#include "headers/Terrain.hpp"
#include "headers/Real_estate_office.hpp"
#include "headers/ui.hpp"

#include <vector>
#include <fstream>
#include <iconv.h>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

#include <boost/locale/generator.hpp>
#include <boost/locale.hpp>

using namespace std;

#include <codecvt>
#include <array>
#include <string>

#include <iostream>

int main(int argc, char** argv)
{
        vector<House> temp_houses;
        vector<Apartment> temp_apartments;
        vector<Terrain> temp_terrains;
        int temp_buildings = 0;

        temp_houses.reserve(1000);
        temp_apartments.reserve(1000);
        temp_terrains.reserve(1000);

        Real_estate_office office;

        bool any_change = false;

        office.read_data();

        while(true)
        {
                terminal_cls();

                print_line();
                cout << "Imobiliária: " << endl;
                print_line();

                endl();

                cout << "1 - Cadastro" << endl
                     << "2 - Consulta" << endl
                     << "3 - Sair do programa" << endl << endl;

                print_line();

                cout << "Opção: ";

                int menu_option;
                cin >> menu_option;

                switch(menu_option)
                {

                case 1:
                        switch(building_type())
                        {
                        case 1:
                                temp_houses.push_back(house_register_ui());
                                (office.buildings).push_back(&(temp_houses[temp_buildings]));
                                temp_buildings++;
                                any_change = true;
                                break;
                        case 2:
                                temp_apartments.push_back(apartment_register_ui());
                                (office.buildings).push_back(&temp_apartments.back());
                                any_change = true;
                                break;
                        case 3:
                                temp_terrains.push_back(terrain_register_ui());
                                (office.buildings).push_back(&temp_terrains.back());
                                any_change = true;
                                break;
                        default:
                                error_ui();
                                break;

                        } // end switch

                        break;
                case 2:
                        building_search_ui(office, any_change);
                        break;
                case 3:
                        return 0;
                        break;
                default:
                        break;

                } // end switch

                if(any_change)
                {
                        office.save_data();
                        any_change = false;

                } // end if

        } // end while

}  // end main
