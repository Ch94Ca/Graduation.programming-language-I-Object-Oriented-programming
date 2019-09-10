/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef PAYROLL_HPP
#define PAYROLL_HPP

#include "Worker.hpp"
#include "Monthly_worker.hpp"
#include "Hourly_worker.hpp"
#include "Comissioned_worker.hpp"

#include <iostream>
#include <vector>

class Payroll
{

private:

std::vector<Worker*> workers;
double expense_limit;

public:

Payroll();

template <class T>
void set_worker(T *worker)
{
        this->workers.push_back(worker);

} // end set_worker

void set_expense_limit(double expense_limit);

std::vector<Worker*> get_workers();
double get_expense_limit();
double get_worker_salary(std::string worker_name);
double get_total_payroll();

}; // end Worker

#endif
