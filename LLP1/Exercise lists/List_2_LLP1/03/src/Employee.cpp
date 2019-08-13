/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Employee.hpp"

Employee::Employee()
{
        this->setFirstName("");
        this->setLastName("");
        this->setSalary(-1);

} // end constructor

Employee::Employee(std::string first_name, std::string last_name, double salary)
{
        this->setFirstName(first_name);
        this->setLastName(last_name);
        this->setSalary(salary);

} // end constructor

void Employee::salaryIncrease(double percentage)
{
        this->salary *= 1 + (percentage / 100);

} // end salaryIncrease

void Employee::setRegistration(std::string registration)
{
        this->registration = registration;

} // end setRegistration

void Employee::setFirstName(std::string first_name)
{
        this->first_name = first_name;

} // end setFirstName

void Employee::setLastName(std::string last_name)
{
        this->last_name = last_name;

} // end setLastName

void Employee::setSalary(double salary)
{
        this->salary = salary;

} // end setSalary

std::string Employee::getRegistration()
{
        return registration;

} // end getRegistration

std::string Employee::getFirstName()
{
        return first_name;

} // end getFirstName

std::string Employee::getLastName()
{
        return last_name;

} // end getLastName

double Employee::getSalary()
{
        return salary;

} // end getSalary
