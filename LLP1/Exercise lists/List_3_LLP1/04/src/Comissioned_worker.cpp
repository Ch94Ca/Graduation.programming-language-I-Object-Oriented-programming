/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Comissioned_worker.hpp"

Comissioned_worker::Comissioned_worker()
{


} // end constructor

Comissioned_worker::Comissioned_worker(std::string name,
                                       std::string registration,
                                       double base_salary,
                                       double comission,
                                       double weekly_sales)
{
        this->name = name;
        this->registration = registration;
        this->base_salary = base_salary;
        this->comission = comission;
        this->weekly_sales = weekly_sales;

} // end constructor

void Comissioned_worker::set_base_salary(double base_salary)
{
        this->base_salary = base_salary;

} // end set_base_salary

void Comissioned_worker::set_comission(double comission)
{
        this->comission = comission;

} // end set_comission

void Comissioned_worker::set_weekly_sales(double weekly_sales)
{
        this->weekly_sales = weekly_sales;

} // end set_weekly_sales

double Comissioned_worker::get_comission()
{
        return comission;

} // end get_comission

double Comissioned_worker::get_weekly_sales()
{
        return weekly_sales;

} // end get_weekly_sales

double Comissioned_worker::get_salary()
{
        return base_salary + (weekly_sales*comission / 100);

} // end get_salary
