/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>

class Employee
{

protected:

std::string registration;
std::string first_name;
std::string last_name;
double salary;

public:

Employee();
Employee(std::string first_name, std::string last_name, double salary);

void salaryIncrease(double percentage);

void setRegistration(std::string registration);
void setFirstName(std::string first_name);
void setLastName(std::string last_name);
void setSalary(double salary);

std::string getRegistration();
std::string getFirstName();
std::string getLastName();
virtual double getSalary();

}; // end Employee

#endif
