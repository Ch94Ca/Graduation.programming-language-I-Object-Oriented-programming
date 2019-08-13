/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef EXPENSE_HPP
#define EXPENSE_HPP

#include <iostream>

using namespace std;

class expense
{

private:

string expense_type;
double value;

public:

expense();
expense(string expense_type, double value);

void setExpenseType(string expense_type);
void setValue(double value);

string getExpenseType();
double getValue();

}; // end expense

#endif
