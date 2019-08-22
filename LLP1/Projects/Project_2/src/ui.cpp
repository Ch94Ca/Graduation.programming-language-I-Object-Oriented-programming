/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/House.hpp"
#include "headers/Apartment.hpp"
#include "headers/Terrain.hpp"
#include "headers/ui.hpp"

#include <iostream>

using namespace std;

void error_ui()
{
        endl();

        print_line();
        cout << "Opção inválida. Tecle ENTER para continuar" << endl;
        print_line();

        setbuf(stdin, 0);
        getchar();

} // end error_ui

void error_nb_ui()
{
        endl();

        print_line();
        cout << "Opção inválida." << endl;
        print_line();

} // end error_ui

int building_type()
{
        terminal_cls();

        print_line();
        cout << "Tipo de imóvel: " << endl;
        print_line();

        endl();

        cout << "1 - Casa" << endl
             << "2 - Apartamento" << endl
             << "3 - Terreno" << endl << endl;

        print_line();

        endl();

        cout << "Tipo: ";
        int building_type;
        cin >> building_type;

        return building_type;

} // end building_type

Adress adress_register()
{
        Adress adress;

        print_line();
        cout << "- Endereço: " << endl;
        print_line();

        cout << endl << "- Rua: ";
        string street;
        setbuf(stdin, 0);
        getline(cin, street);

        cout << endl << "- Numero: ";
        string number;
        setbuf(stdin, 0);
        getline(cin, number);

        cout << endl << "- Bairro: ";
        string neighborhood;
        setbuf(stdin, 0);
        getline(cin, neighborhood);

        cout << endl << "- Cidade: ";
        string city;
        setbuf(stdin, 0);
        getline(cin, city);

        cout << endl << "- CEP: ";
        string zip_code;
        setbuf(stdin, 0);
        getline(cin, zip_code);

        adress.set_street(street);
        adress.set_number(number);
        adress.set_neighborhood(neighborhood);
        adress.set_city(city);
        adress.set_zip_code(zip_code);

        return adress;

} // end adress_register

House house_register_ui()
{
        terminal_cls();

        print_line();
        cout << "Cadastro: " << endl;
        print_line();

        endl();

        cout << "- Titulo do anuncio: ";
        string ad_title;
        setbuf(stdin, 0);
        getline(cin, ad_title);

        endl();

        cout << "- Tipo de anuncio: [1] VENDA | [2] ALUGUEL: ";
        int ad_type;

        while(1)
        {
                cin >> ad_type;

                if(ad_type < 1 || ad_type > 2)
                {
                        error_nb_ui();
                        cout << endl << "- Tipo de anuncio: [1] VENDA | [2] ALUGUEL: ";
                        continue;

                } // end if

                break;

        } // end while

        endl();

        cout << "- Preço: ";
        double building_price;
        cin >> building_price;

        endl();

        Adress building_adress = adress_register();

        endl();

        print_line();
        cout << "- Informações do imóvel: " << endl;
        print_line();

        cout << endl << "- Pavimentos: ";
        int house_floors;
        cin >> house_floors;

        cout << endl << "- Quartos: ";
        int house_bedrooms;
        cin >> house_bedrooms;

        cout << endl << "- Area total: ";
        double terrain_area;
        cin >> terrain_area;

        cout << endl << "- Area construida: ";
        double building_area;
        cin >> building_area;

        House house(ad_title,
                    ad_type,
                    building_price,
                    building_adress,
                    house_floors,
                    house_bedrooms,
                    terrain_area,
                    building_area
                    );

        return house;

} // end house_register_ui

Apartment apartment_register_ui()
{
        terminal_cls();

        print_line();
        cout << "Cadastro: " << endl;
        print_line();

        endl();

        cout << "- Titulo do anuncio: ";
        string ad_title;
        setbuf(stdin, 0);
        getline(cin, ad_title);

        endl();

        cout << "- Tipo de anuncio: [1] VENDA | [2] ALUGUEL: ";
        int ad_type;

        while(1)
        {
                cin >> ad_type;

                if(ad_type < 1 || ad_type > 2)
                {
                        error_nb_ui();
                        cout << endl << "- Tipo de anuncio: [1] VENDA | [2] ALUGUEL: ";
                        continue;

                } // end if

                break;

        } // end while

        endl();

        cout << "- Preço: ";
        double building_price;
        cin >> building_price;

        endl();

        Adress building_adress = adress_register();

        endl();

        print_line();
        cout << "- Informações do imóvel: " << endl;
        print_line();

        cout << endl << "- Andar: ";
        int apartment_floor;
        cin >> apartment_floor;

        cout << endl << "- Quartos: ";
        int apartment_bedrooms;
        cin >> apartment_bedrooms;

        cout << endl << "- Vagas na garagem: ";
        int apartment_parking_spaces;
        cin >> apartment_parking_spaces;

        cout << endl << "- Area total: ";
        double apartment_area;
        cin >> apartment_area;

        cout << endl << "- Taxa de condomínio: R$ ";
        double condominium_fee;
        cin >> condominium_fee;

        cout << endl << "- Posição: ";
        string apartment_position;
        cin >> apartment_position;

        Apartment apartment(ad_title,
                            ad_type,
                            building_price,
                            building_adress,
                            apartment_floor,
                            apartment_bedrooms,
                            apartment_parking_spaces,
                            apartment_area,
                            condominium_fee,
                            apartment_position
                            );

        return apartment;

} // end apartment_register_ui

Terrain terrain_register_ui()
{
        terminal_cls();

        print_line();
        cout << "- Cadastro: " << endl;
        print_line();

        endl();

        cout << "- Titulo do anuncio: ";
        string ad_title;
        setbuf(stdin, 0);
        getline(cin, ad_title);

        endl();

        cout << "- Tipo de anuncio: [1] VENDA | [2] ALUGUEL: ";
        int ad_type;

        while(1)
        {
                cin >> ad_type;

                if(ad_type < 1 || ad_type > 2)
                {
                        error_nb_ui();
                        cout << endl << "- Tipo de anuncio: [1] VENDA | [2] ALUGUEL: ";
                        continue;

                } // end if

                break;

        } // end while

        endl();

        cout << "- Preço: ";
        double building_price;
        cin >> building_price;

        endl();

        Adress building_adress = adress_register();

        endl();

        print_line();
        cout << "- Informações do imóvel: " << endl;
        print_line();

        cout << endl << "- Area total: ";
        double terrain_area;
        cin >> terrain_area;

        Terrain terrain(ad_title,
                        ad_type,
                        building_price,
                        building_adress,
                        terrain_area
                        );

        return terrain;

} // end terrain_register_ui

int search_option_ui()
{
        cout << "Opções: [1] EDITAR | [2] EXCLUIR | [ENTER] PRÓXIMO: ";
        string option;

        setbuf(stdin, 0);
        getline(cin, option);

        int result = 0;

        if(option == "1")
        {
                result = 1;

        } // end if

        else if(option == "2")
        {
                result = 2;

        } // end if

        return result;

} // end search_option_ui

void building_search_ui(Real_estate_office &office, bool &any_change)
{
        vector<int> result_buildings;
        vector<int> deleted;
        bool delete_status = false;

        string option_marker[4] = {" ", " ", " ", " "};
        string option_choice;
        bool option_status[4] = {false, false, false, false};
        bool option_break = false;

        while(!option_break)
        {
                terminal_cls();

                print_line();
                cout << "- Opções de busca:" << endl;
                print_line();

                endl();

                cout << "1 - Todos os imóveis  " << "[" << option_marker[0] << "]" << endl
                     << "2 - Casas             " << "[" << option_marker[1] << "]" << endl
                     << "3 - Apartamentos      " << "[" << option_marker[2] << "]" << endl
                     << "4 - Terrenos          " << "[" << option_marker[3] << "]" << endl << endl
                     << "ENTER - Confirmar" << endl << endl;

                print_line();
                cout << "Opção: ";

                setbuf(stdin, 0);
                getline(cin, option_choice);

                if(option_choice.length() == 0) option_choice = "-1";

                switch(stoi(option_choice))
                {
                case 1:
                        option_marker[0] = "X";
                        option_status[0] = true;
                        option_break = true;
                        break;
                case 2:
                        option_marker[1] = "X";
                        option_status[1] = true;
                        break;
                case 3:
                        option_marker[2] = "X";
                        option_status[2] = true;
                        break;
                case 4:
                        option_marker[3] = "X";
                        option_status[3] = true;
                        break;
                case -1:
                        option_break = true;
                        break;
                default:
                        terminal_cls();
                        error_ui();
                        break;

                } // end switch

        } // end while

        string filter_marker[5] = {" ", " ", " ", " ", " "};
        string filter_choice;
        bool filter_status[5] = {false, false, false, false, false};
        bool filter_break = false;

        while(!filter_break)
        {
                terminal_cls();

                print_line();
                cout << "- Filtros de busca:" << endl;
                print_line();

                endl();

                cout << "1 - Busca por titulo           " << "[" << filter_marker[0] << "]" << endl
                     << "2 - Busca por tipo de anuncio  " << "[" << filter_marker[1] << "]" << endl
                     << "3 - Busca por bairro           " << "[" << filter_marker[2] << "]" << endl
                     << "4 - Busca por cidade           " << "[" << filter_marker[3] << "]" << endl
                     << "5 - Busca por preço            " << "[" << filter_marker[4] << "]" << endl
                     << endl
                     << "ENTER - Confirmar" << endl << endl;

                print_line();
                cout << "Opção: ";

                setbuf(stdin, 0);
                getline(cin, filter_choice);

                if(filter_choice.length() == 0) filter_choice = "-1";

                switch(stoi(filter_choice))
                {
                case 1:
                        filter_marker[0] = "X";
                        filter_status[0] = true;
                        option_break = true;
                        break;
                case 2:
                        filter_marker[1] = "X";
                        filter_status[1] = true;
                        break;
                case 3:
                        filter_marker[2] = "X";
                        filter_status[2] = true;
                        break;
                case 4:
                        filter_marker[3] = "X";
                        filter_status[3] = true;
                        break;
                case 5:
                        filter_marker[4] = "X";
                        filter_status[4] = true;
                        break;
                case -1: filter_break = true;
                        break;
                default:
                        terminal_cls();
                        error_ui();
                        break;

                }      // end switch

        } // end while

        if(option_status[0])
        {
                for(long unsigned int i = 0; i < office.buildings.size(); i++)
                {
                        result_buildings.push_back(i);

                } // end for

        } // end if

        if(option_status[1])
        {
                vector<int> temp_results = office.search_by_building_type(office.buildings, 1);
                result_buildings.insert(result_buildings.end(), temp_results.begin(), temp_results.end());

        } // end if

        if(option_status[2])
        {
                vector<int> temp_results = office.search_by_building_type(office.buildings, 2);
                result_buildings.insert(result_buildings.end(), temp_results.begin(), temp_results.end());

        } // end if

        if(option_status[3])
        {
                vector<int> temp_results = office.search_by_building_type(office.buildings, 3);
                result_buildings.insert(result_buildings.end(), temp_results.begin(), temp_results.end());

        } // end if

        if(filter_status[0])
        {
                endl();

                cout << "- Busca por título: ";
                string ad_title;
                setbuf(stdin, 0);
                getline(cin, ad_title);

                result_buildings = office.search_by_ad_title(office.buildings, result_buildings, ad_title);

        } // end if

        if(filter_status[1])
        {
                endl();

                cout << "- Busca por tipo de anuncio: [1] VENDA | [2] ALUGUEL:  ";
                int ad_type;
                cin >> ad_type;

                result_buildings = office.search_by_ad_type(office.buildings, result_buildings, ad_type);

        } // end if

        if(filter_status[2])
        {
                endl();

                cout << "- Busca por bairro: ";
                string neighborhood;
                setbuf(stdin, 0);
                getline(cin, neighborhood);

                result_buildings = office.search_by_neighborhood(office.buildings, result_buildings, neighborhood);

        } // end if

        if(filter_status[3])
        {
                endl();

                cout << "- Busca por cidade: ";
                string city;
                setbuf(stdin, 0);
                getline(cin, city);

                result_buildings = office.search_by_city(office.buildings, result_buildings, city);

        } // end if

        if(filter_status[4])
        {
                endl();

                cout << "- Busca por preço: [1] MAIOR QUE | [2] MENOR QUE:  ";
                int search_type;
                cin >> search_type;

                endl();

                cout << "- Valor: R$ ";
                double price;
                cin >> price;

                result_buildings = office.search_by_price(office.buildings, result_buildings, price, search_type);

        } // end if

        endl();
        int view_mode;

        while(1)
        {
                terminal_cls();

                print_line();
                cout << "Modo de exibição: [1] COMPLETO | [2] RESUMIDO: ";

                cin >> view_mode;

                if(view_mode < 1 || view_mode > 2)
                {
                        error_ui();
                        continue;

                } // end if

                break;

        } // end while

        for(long unsigned int i = 0; i < result_buildings.size(); i++)
        {
                terminal_cls();

                if(view_mode == 1)
                {
                        cout << office.buildings[result_buildings[i]]->get_building_string() << endl << endl;

                } // end if

                else if(view_mode == 2)
                {
                        cout << office.buildings[result_buildings[i]]->get_building_short_string() << endl << endl;

                } // end if

                int option = search_option_ui();

                switch(option)
                {
                case 0:
                        break;
                case 1:
                        edit_ui(office, result_buildings, any_change, i);
                        break;
                case 2:
                        deleted.push_back(result_buildings[i]);
                        delete_status = true;
                        break;
                default:
                        terminal_cls();
                        error_ui();
                        break;

                } // end switch

        } // end for

        if(result_buildings.size() == 0)
        {
                terminal_cls();

                print_line();
                cout << "Nenhum imóvel encontrado. Tecle ENTER para continuar" << endl;
                print_line();

                setbuf(stdin, 0);
                getchar();

        } // end if

        if(delete_status)
        {
                sort(deleted.begin(), deleted.end());
                reverse(deleted.begin(), deleted.end());

                for(long unsigned int i = 0; i < deleted.size(); i++)
                {
                        office.buildings.erase(office.buildings.begin() + deleted[i]);
                        any_change = true;

                } // end for

                delete_status = false;

        } // end if

} // end building_search_ui

void edit_ui(Real_estate_office &office,
             vector<int> &result_buildings,
             bool &any_change,
             long unsigned int &i)
{

        terminal_cls();

        print_line();
        cout << "Edição de imóvel: " << endl;
        print_line();

        endl();

        cout << "O que deseja editar:" << endl << endl
             << "1 - Dados do anuncio " << endl
             << "2 - Dados do imóvel" << endl
             << "3 - Endereço" << endl;

        endl();

        int edit_option;

        while(1)
        {
                cout << "Opção: ";

                cin >> edit_option;

                if(edit_option < 1 || edit_option > 3)
                {
                        error_ui();
                        continue;

                } // end if

                break;

                terminal_cls();

        } // end while

        if(edit_option == 1)
        {
                string building_title;
                string ad_type;
                string building_price;

                print_line();
                cout << "Titulo do anuncio: " << (office.buildings[result_buildings[i]])->get_ad_title() << endl;
                print_line();
                cout << " Deixe em branco caso não deseje modificar" << endl;

                endl();

                cout << "- Novo titulo: ";
                setbuf(stdin, 0);
                getline(cin, building_title);

                terminal_cls();

                print_line();
                cout << "Tipo de anuncio: " << (office.buildings[result_buildings[i]])->get_ad_type_string() << endl;
                print_line();
                cout << " Deixe em branco caso não deseje modificar" << endl;

                endl();

                cout << "- Novo tipo: [1] VENDA | [2] ALUGUEL: ";
                setbuf(stdin, 0);
                getline(cin, ad_type);

                terminal_cls();

                print_line();
                cout << "Preço do anuncio: " << (office.buildings[result_buildings[i]])->get_building_price() << endl;
                print_line();
                cout << " Deixe em branco caso não deseje modificar" << endl;

                endl();

                cout << "- Novo preço: ";
                setbuf(stdin, 0);
                getline(cin, building_price);

                terminal_cls();

                if(building_title.length() != 0)
                {
                        (office.buildings[result_buildings[i]])->set_ad_title(building_title);
                        any_change = true;

                } // end if

                if(ad_type.length() != 0)
                {
                        (office.buildings[result_buildings[i]])->set_ad_type(stoi(ad_type));
                        any_change = true;

                } // end if

                if(building_price.length() != 0)
                {
                        (office.buildings[result_buildings[i]])->set_building_price(stod(building_price));
                        any_change = true;

                } // end if

        } //end if

        if(edit_option == 2)
        {
                if((office.buildings[result_buildings[i]])->get_building_type() == 1)
                {
                        string house_floors;
                        string house_bedrooms;
                        string terrain_area;
                        string building_area;

                        House* house = dynamic_cast<House*>(office.buildings[result_buildings[i]]);

                        print_line();
                        cout << "Pavimentos: " << house->get_house_floors() << endl;
                        print_line();
                        cout << " Deixe em branco caso não deseje modificar" << endl;

                        endl();

                        cout << "- Novo valor para Pavimentos: ";
                        setbuf(stdin, 0);
                        getline(cin, house_floors);

                        terminal_cls();

                        print_line();
                        cout << "Quartos: " << house->get_house_bedrooms() << endl;
                        print_line();
                        cout << " Deixe em branco caso não deseje modificar" << endl;

                        endl();

                        cout << "- Novo valor para Quartos: ";
                        setbuf(stdin, 0);
                        getline(cin, house_bedrooms);

                        terminal_cls();

                        print_line();
                        cout << "Area total: " << house->get_terrain_area() << endl;
                        print_line();
                        cout << " Deixe em branco caso não deseje modificar" << endl;

                        endl();

                        cout << "- Novo valor para Area total: ";
                        setbuf(stdin, 0);
                        getline(cin, terrain_area);

                        terminal_cls();

                        print_line();
                        cout << "Area construida: " << house->get_building_area() << endl;
                        print_line();
                        cout << " Deixe em branco caso não deseje modificar" << endl;

                        endl();

                        cout << "- Novo valor para Area construida: ";
                        setbuf(stdin, 0);
                        getline(cin, building_area);

                        if(house_floors.length() != 0)
                        {
                                house->set_house_floors(stoi(house_floors));
                                any_change = true;

                        } // end if

                        if(house_bedrooms.length() != 0)
                        {
                                house->set_house_bedrooms(stoi(house_bedrooms));
                                any_change = true;

                        } // end if

                        if(terrain_area.length() != 0)
                        {
                                house->set_terrain_area(stod(terrain_area));
                                any_change = true;

                        } // end if

                        if(building_area.length() != 0)
                        {
                                house->set_building_area(stod(building_area));
                                any_change = true;

                        } // end if

                } // end if

                else if((office.buildings[result_buildings[i]])->get_building_type() == 2)
                {
                        string apartment_floor;
                        string apartment_bedrooms;
                        string apartment_parking_spaces;
                        string apartment_area;
                        string condominium_fee;
                        string apartment_position;

                        Apartment* apartment = dynamic_cast<Apartment*>(office.buildings[result_buildings[i]]);

                        print_line();
                        cout << "Andar: " << apartment->get_apartment_floor() << endl;
                        print_line();
                        cout << " Deixe em branco caso não deseje modificar" << endl;

                        endl();

                        cout << "- Novo valor para Andar: ";
                        setbuf(stdin, 0);
                        getline(cin, apartment_floor);

                        terminal_cls();

                        print_line();
                        cout << "Quartos: " << apartment->get_apartment_bedrooms() << endl;
                        print_line();
                        cout << " Deixe em branco caso não deseje modificar" << endl;

                        endl();

                        cout << "- Novo valor para Quartos: ";
                        setbuf(stdin, 0);
                        getline(cin, apartment_bedrooms);

                        terminal_cls();

                        print_line();
                        cout << "Vagas na garagem: " << apartment->get_apartment_parking_spaces() << endl;
                        print_line();
                        cout << " Deixe em branco caso não deseje modificar" << endl;

                        endl();

                        cout << "- Novo valor para Vagas na garagem: ";
                        setbuf(stdin, 0);
                        getline(cin, apartment_parking_spaces);

                        terminal_cls();

                        print_line();
                        cout << "Area total: " << apartment->get_apartment_area() << endl;
                        print_line();
                        cout << " Deixe em branco caso não deseje modificar" << endl;

                        endl();

                        cout << "- Novo valor para Area total: ";
                        setbuf(stdin, 0);
                        getline(cin, apartment_area);

                        terminal_cls();

                        print_line();
                        cout << "Taxa de condomínio: " << apartment->get_condominium_fee() << endl;
                        print_line();
                        cout << " Deixe em branco caso não deseje modificar" << endl;

                        endl();

                        cout << "- Novo valor para Taxa de condomínio: ";
                        setbuf(stdin, 0);
                        getline(cin, condominium_fee);

                        terminal_cls();

                        print_line();
                        cout << "Posição: " << apartment->get_apartment_position() << endl;
                        print_line();
                        cout << " Deixe em branco caso não deseje modificar" << endl;

                        endl();

                        cout << "- Nova Posição: ";
                        setbuf(stdin, 0);
                        getline(cin, apartment_position);

                        if(apartment_floor.length() != 0)
                        {
                                apartment->set_apartment_floor(stoi(apartment_floor));
                                any_change = true;

                        } // end if
                        if(apartment_bedrooms.length() != 0)
                        {
                                apartment->set_apartment_bedrooms(stoi(apartment_bedrooms));
                                any_change = true;

                        } // end if
                        if(apartment_parking_spaces.length() != 0)
                        {
                                apartment->set_apartment_parking_spaces(stoi(apartment_parking_spaces));
                                any_change = true;

                        } // end if
                        if(apartment_area.length() != 0)
                        {
                                apartment->set_apartment_area(stod(apartment_area));
                                any_change = true;

                        } // end if

                        if(condominium_fee.length() != 0)
                        {
                                apartment->set_condominium_fee(stod(condominium_fee));
                                any_change = true;

                        } // end if
                        if(apartment_position.length() != 0)
                        {
                                apartment->set_apartment_position(apartment_position);
                                any_change = true;

                        } // end if

                } // end else if

                else if((office.buildings[result_buildings[i]])->get_building_type() == 3)
                {
                        string terrain_area;

                        Terrain* terrain = dynamic_cast<Terrain*>(office.buildings[result_buildings[i]]);

                        print_line();
                        cout << "Area do terreno: " << terrain->get_terrain_area() << endl;
                        print_line();
                        cout << " Deixe em branco caso não deseje modificar" << endl;

                        endl();

                        cout << "- Novo valor para Area do terreno: ";
                        setbuf(stdin, 0);
                        getline(cin, terrain_area);

                        endl();

                        if(terrain_area.length() != 0)
                        {
                                terrain->set_terrain_area(stod(terrain_area));
                                any_change = true;

                        } // end if

                } // end if

        } // end if

        if(edit_option == 3)
        {
                string street;
                string number;
                string neighborhood;
                string city;
                string zip_code;

                print_line();
                cout << "Rua: " << ((office.buildings[result_buildings[i]])->get_building_adress_ref()).get_street() << endl;
                print_line();
                cout << " Deixe em branco caso não deseje modificar" << endl;

                endl();

                cout << "- Nova Rua: ";
                setbuf(stdin, 0);
                getline(cin, street);

                terminal_cls();

                print_line();
                cout << "Número: " << ((office.buildings[result_buildings[i]])->get_building_adress_ref()).get_number() << endl;
                print_line();
                cout << " Deixe em branco caso não deseje modificar" << endl;

                endl();

                cout << "- Novo Número: ";
                setbuf(stdin, 0);
                getline(cin, number);

                terminal_cls();

                print_line();
                cout << "Bairro: " << ((office.buildings[result_buildings[i]])->get_building_adress_ref()).get_neighborhood() << endl;
                print_line();
                cout << " Deixe em branco caso não deseje modificar" << endl;

                endl();

                cout << "- Novo Bairro: ";
                setbuf(stdin, 0);
                getline(cin, neighborhood);

                terminal_cls();

                print_line();
                cout << "Cidade: " << ((office.buildings[result_buildings[i]])->get_building_adress_ref()).get_city() << endl;
                print_line();
                cout << " Deixe em branco caso não deseje modificar" << endl;

                endl();

                cout << "- Nova Cidade: ";
                setbuf(stdin, 0);
                getline(cin, city);

                terminal_cls();

                print_line();
                cout << "CEP: " << ((office.buildings[result_buildings[i]])->get_building_adress_ref()).get_zip_code() << endl;
                print_line();
                cout << " Deixe em branco caso não deseje modificar" << endl;

                endl();

                cout << "- Novo CEP: ";
                setbuf(stdin, 0);
                getline(cin, zip_code);

                endl();

                if(street.length() != 0)
                {
                        ((office.buildings[result_buildings[i]])->get_building_adress_ref()).set_street(street);
                        any_change = true;

                } // end if

                if(number.length() != 0)
                {
                        ((office.buildings[result_buildings[i]])->get_building_adress_ref()).set_number(number);
                        any_change = true;

                } // end if

                if(neighborhood.length() != 0)
                {
                        ((office.buildings[result_buildings[i]])->get_building_adress_ref()).set_neighborhood(neighborhood);
                        any_change = true;

                } // end if

                if(city.length() != 0)
                {
                        ((office.buildings[result_buildings[i]])->get_building_adress_ref()).set_city(city);
                        any_change = true;

                } // end if

                if(zip_code.length() != 0)
                {
                        ((office.buildings[result_buildings[i]])->get_building_adress_ref()).set_zip_code(zip_code);
                        any_change = true;

                } // end if

        } // end if

} // nd edit_ui

void terminal_cls() // Clean screen text
{
    #ifdef __linux__
        system ("tput clear");
    #elif _WIN32
        system("cls");
    #endif

} // End terminal_cls

void print_line()
{
        cout << "---------------------------------------------" << endl;

} // end print line

void endl()
{
        cout << endl;

} // end endl
