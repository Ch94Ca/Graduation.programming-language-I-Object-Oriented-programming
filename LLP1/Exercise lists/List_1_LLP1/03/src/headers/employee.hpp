/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>

using namespace std;

class employee
{

private:

string first_name;
string last_name;
double salary;

public:

employee();
employee(string first_name, string last_name, double salary);

void salaryIncrease(double percentage);

void setFirstName(string first_name);
void setLastName(string last_name);
void setSalary(double salary);

string getFirstName();
string getLastName();
double getSalary();

}; // end employee

#endif
