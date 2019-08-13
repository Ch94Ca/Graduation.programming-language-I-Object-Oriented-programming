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
double salary;

public:

Worker();
Worker(std::string name);

void set_salary(double salary);

std::string get_name();
double get_salary();
virtual double get_weekly_salary();

}; // end Worker

#endif
