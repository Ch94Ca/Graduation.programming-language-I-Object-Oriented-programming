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

Monthly_worker::Monthly_worker(std::string name, double hour_value)
{
        this->name = name;
        this->hour_value = hour_value;

} // end constructor

void Monthly_worker::set_hour_value(double hour_value)
{
        this->hour_value = hour_value;

} // end set_hour_value

double Monthly_worker::get_hour_value()
{
        return hour_value;

} // end get_hour_value

double Monthly_worker::get_weekly_salary()
{
        return (hour_value * 40);

} // end get_weekly_salary
