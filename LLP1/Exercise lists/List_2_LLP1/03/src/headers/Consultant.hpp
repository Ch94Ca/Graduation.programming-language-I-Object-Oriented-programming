/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef CONSULTANT_HPP
#define CONSULTANT_HPP

#include "Employee.hpp"

class Consultant : public Employee
{

public:

Consultant(std::string first_name, std::string last_name, double salary);

double getSalary();
double getSalary(double percentage);

}; // end Consultant

#endif
