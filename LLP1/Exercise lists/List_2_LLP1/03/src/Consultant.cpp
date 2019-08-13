/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Consultant.hpp"

Consultant::Consultant(std::string first_name, std::string last_name, double salary)
{
        this->setFirstName(first_name);
        this->setLastName(last_name);
        this->setSalary(salary);

} // end constructor

double Consultant::getSalary()
{
        return salary * 1.10;

} // end getSalary

double Consultant::getSalary(double percentage)
{
        return salary * ( 1 + (percentage / 100));

} // end getSalary
