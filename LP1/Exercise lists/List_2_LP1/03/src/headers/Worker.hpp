/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef WORKER_HPP
#define WORKER_HPP

#include <iostream>

class Worker
{

protected:

std::string name;
std::string registration;

public:

void set_name(std::string name);
void set_registration(std::string registration);

std::string get_name();
std::string get_registration();

virtual double get_salary() = 0;

}; // end Worker

#endif
