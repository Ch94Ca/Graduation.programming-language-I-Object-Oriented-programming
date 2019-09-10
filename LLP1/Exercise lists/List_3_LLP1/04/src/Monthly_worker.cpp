/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Monthly_worker.hpp"

Monthly_worker::Monthly_worker()
{

} // end constructor

Monthly_worker::Monthly_worker(std::string name, std::string registration, double salary)
{
        this->name = name;
        this->registration = registration;
        this->salary = salary;

} // end constructor

void Monthly_worker::set_salary(double salary)
{
        this->salary = salary;

} // end set_salary

double Monthly_worker::get_salary()
{
        return salary;

} // end get_salary
