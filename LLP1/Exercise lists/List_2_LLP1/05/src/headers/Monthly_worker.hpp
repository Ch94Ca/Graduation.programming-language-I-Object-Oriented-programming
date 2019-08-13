/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef MONTHLY_WORKER_HPP
#define MONTHLY_WORKER_HPP

#include <iostream>

#include "Worker.hpp"

class Monthly_worker : public Worker
{

protected:

double hour_value;

public:

Monthly_worker();
Monthly_worker(std::string name, double hour_value);

void set_hour_value(double hour_value);

double get_hour_value();
double get_weekly_salary();

}; // end Monthly_worker

#endif
