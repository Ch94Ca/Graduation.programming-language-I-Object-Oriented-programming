/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef HOURLY_WORKER_HPP
#define HOURLY_WORKER_HPP

#include <iostream>

#include "Worker.hpp"

class Hourly_worker : public Worker
{

private:

double worked_hours;
double hour_value;

public:

Hourly_worker();
Hourly_worker(std::string name,
              std::string registration,
              double worked_hours,
              double hour_value);

void set_worked_hours(double worked_hours);
void set_hour_value(double hour_value);

double get_worked_hours();
double get_hour_value();

double get_salary();

}; // end Hourly_worker

#endif
