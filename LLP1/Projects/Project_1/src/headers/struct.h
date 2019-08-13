/*
 *   CRUD State Agency System
 *
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef STRUCT_H
#define STRUCT_H

typedef struct tStats
{
        int n_house;
        int n_apartment;
        int n_terrain;

}tStats;

typedef struct tAdress
{
        char street[100];
        char number[10];
        char neighborhood[50];
        char city[50];
        char zip_code[10];

}tAdress;

typedef struct tHouse
{
        char title[100];
        tAdress adress;
        int ad_ref;
        int ad_type;
        int floors;
        int bedrooms;
        double terrain_area;
        double building_area;
        double price;

}tHouse;

typedef struct tApartment
{
        char title[100];
        tAdress adress;
        int ad_ref;
        int ad_type;
        int floor;
        int bedrooms;
        int parking_spaces;
        double area;
        double condominium_fee;
        double price;
        char position[100];

}tApartment;

typedef struct tTerrain
{
        char title[100];
        tAdress adress;
        int ad_ref;
        int ad_type;
        double area;
        double price;

}tTerrain;

#endif /* struct.h */
