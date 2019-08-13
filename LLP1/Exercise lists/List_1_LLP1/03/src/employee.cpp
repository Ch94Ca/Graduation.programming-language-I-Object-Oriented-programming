/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/employee.hpp"

using namespace std;

employee::employee()
{
        this->setFirstName("");
        this->setLastName("");
        this->setSalary(-1);

} // end constructor

employee::employee(string first_name, string last_name, double salary)
{
        this->setFirstName(first_name);
        this->setLastName(last_name);
        this->setSalary(salary);

} // end constructor

void employee::salaryIncrease(double percentage)
{
        this->salary *= 1 + (percentage / 100);

} // end salaryIncrease

void employee::setFirstName(string first_name)
{
        this->first_name = first_name;

} // end setFirstName

void employee::setLastName(string last_name)
{
        this->last_name = last_name;

} // end setLastName

void employee::setSalary(double salary)
{
        this->salary = salary;

} // end setSalary

string employee::getFirstName()
{
        return first_name;

} // end getFirstName

string employee::getLastName()
{
        return last_name;

} // end getLastName

double employee::getSalary()
{
        return salary;

} // end getSalary
