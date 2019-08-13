/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Person.hpp"

Person::Person()
{
        this->set_name("");
        this->set_phone("");
        this->set_age(-1);

} // end constructor

Person::Person(std::string name)
{
        this->set_name(name);
        this->set_phone("");
        this->set_age(0);

} // end constructor

Person::Person(std::string name, std::string phone, int age)
{
        this->set_name(name);
        this->set_phone(phone);
        this->set_age(age);

} // end constructor

Person::Person(std::string name, std::string phone, int age, Adress adress)
{
        this->set_name(name);
        this->set_phone(phone);
        this->set_age(age);
        this->adress = adress;

} // end constructor

void Person::set_name(std::string name)
{
        this->name = name;

} // end set_name

void Person::set_phone(std::string phone)
{
        this->phone = phone;

} // end set_phone

void Person::set_age(int age)
{
        this->age = age;

} // end set_age

void Person::set_adress(Adress adress)
{
        this->adress = adress;

} // end set_adress

std::string Person::get_name()
{
        return name;

} // end get_name

std::string Person::get_phone()
{
        return phone;

} // end get_phone

int Person::get_age()
{
        return age;

} // end get_age

Adress Person::get_adress()
{
        return adress;

} // end get_adress

std::string Person::get_string_adress()
{
        return adress.to_string();

} // end get_std::string_adress
