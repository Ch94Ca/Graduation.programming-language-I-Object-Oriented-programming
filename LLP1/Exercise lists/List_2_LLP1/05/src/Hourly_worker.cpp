/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Hourly_worker.hpp"

Hourly_worker::Hourly_worker()
{


} // end constructor

Hourly_worker::Hourly_worker(std::string name, double hour_value)
{
        this->name = name;
        this->hour_value = hour_value;

} // end constructor

void Hourly_worker::set_hour_value(double hour_value)
{
        this->hour_value = hour_value;

} // end set_hour_value

double Hourly_worker::get_hour_value()
{
        return hour_value;

} // end get_hour_value

double Hourly_worker::get_weekly_salary(double hours)
{
        if(hours > 40)
        {
                hours = 40 + ((hours - 40) * 1.5);

        } // end if

        return (hours * hour_value);

} // end get_weekly_salary
