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

private:

double salary;

public:

Monthly_worker();
Monthly_worker(std::string name,
               std::string registration,
               double salary);

void set_salary(double salary);

double get_salary();

}; // end Monthly_worker

#endif
