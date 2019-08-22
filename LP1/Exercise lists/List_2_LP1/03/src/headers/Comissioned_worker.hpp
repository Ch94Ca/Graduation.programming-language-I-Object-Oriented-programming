/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef COMISSIONED_WORKER_HPP
#define COMISSIONED_WORKER_HPP

#include <iostream>

#include "Worker.hpp"

class Comissioned_worker : public Worker
{

private:

double base_salary;
double comission;
double weekly_sales;

public:

Comissioned_worker();
Comissioned_worker(std::string name,
                  std::string registration,
                  double base_salary,
                  double comission,
                  double weekly_sales);

void set_base_salary(double base_salary);
void set_comission(double comission);
void set_weekly_sales(double weekly_sales);

double get_comission();
double get_weekly_sales();

double get_salary();

}; // end Comissioned_worker

#endif
