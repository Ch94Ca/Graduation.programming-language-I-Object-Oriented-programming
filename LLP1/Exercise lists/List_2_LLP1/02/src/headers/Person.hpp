/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>

#include "Adress.hpp"

class Person
{

private:

std::string name;
std::string phone;
int age;
Adress adress;

public:

Person();
Person(std::string name);
Person(std::string name, std::string phone, int age);
Person(std::string name, std::string phone, int age, Adress adress);

void set_name(std::string name);
void set_phone(std::string phone);
void set_age(int Age);
void set_adress(Adress adress);

std::string get_name();
std::string get_phone();
int get_age();
Adress get_adress();
std::string get_string_adress();

}; // end person

#endif
