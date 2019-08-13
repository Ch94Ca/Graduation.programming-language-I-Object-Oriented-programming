/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/person.hpp"

using namespace std;

person::person()
{
        this->setName("");
        this->setPhone("");
        this->setAge(-1);

} // end constructor

person::person(string name)
{
        this->setName(name);
        this->setPhone("");
        this->setAge(0);

} // end constructor

person::person(string name, string phone, int age)
{
        this->setName(name);
        this->setPhone(phone);
        this->setAge(age);

} // end constructor

void person::setName(string name)
{
        this->name = name;

} // end setName

void person::setPhone(string phone)
{
        this->phone = phone;

} // end setPhone

void person::setAge(int age)
{
        this->age = age;

} // end setAge

string person::getName()
{
        return name;

} // end getName

string person::getPhone()
{
        return phone;

} // end getPhone

int person::getAge()
{
        return age;

} // end getAge
