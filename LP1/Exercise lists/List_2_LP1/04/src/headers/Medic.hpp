/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef MEDIC_HPP
#define MEDIC_HPP

#include <iostream>

class Medic
{

protected:

std::string name;
double height;
double weight;

public:

Medic();

Medic(std::string name,
      double height,
      double weight);

void set_name(std::string name);
void set_height(double height);
void set_weight(double weight);

std::string get_name();
double get_height();
double get_weight();

virtual std::string get_specialization_course();
virtual std::string get_procedure();

}; // end Medic

#endif
