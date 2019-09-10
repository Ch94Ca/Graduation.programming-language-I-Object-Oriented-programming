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

Hourly_worker::Hourly_worker(std::string name, std::string registration, double worked_hours, double hour_value)
{
        this->name = name;
        this->registration = registration;
        this->worked_hours = worked_hours;
        this->hour_value = hour_value;

} // end constructor

void Hourly_worker::set_worked_hours(double worked_hours)
{
        this->worked_hours = worked_hours;

} // end set_worked_hours

void Hourly_worker::set_hour_value(double hour_value)
{
        this->hour_value = hour_value;

} // end set_hour_value

double Hourly_worker::get_worked_hours()
{
        return worked_hours;

} // end get_worked_hours

double Hourly_worker::get_hour_value()
{
        return hour_value;

} // end get_hour_value

double Hourly_worker::get_salary()
{
        if(worked_hours > 40)
        {
                worked_hours = 40 + ((worked_hours - 40) * 1.5);

        } // end if

        return (worked_hours * hour_value);

} // end get_weekly_salary
