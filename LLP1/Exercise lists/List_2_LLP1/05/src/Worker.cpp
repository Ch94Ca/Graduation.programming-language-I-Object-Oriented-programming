/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Worker.hpp"

Worker::Worker()
{

} // end constructor

Worker::Worker(std::string name)
{
        this->name = name;

} // end constructor

void Worker::set_salary(double salary)
{
        this->salary = salary;

} // end set_salary

std::string Worker::get_name()
{
        return name;

} // end get_name

double Worker::get_salary()
{
        return salary;

} // end get_salary

double Worker::get_weekly_salary()
{
        return salary;

} // end get_weekly_salary
