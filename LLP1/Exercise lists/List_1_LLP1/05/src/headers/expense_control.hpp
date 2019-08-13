/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef EXPENSE_CONTROL_HPP
#define EXPENSE_CONTROL_HPP

#include <iostream>
#include "expense.hpp"

using namespace std;

class expense_control
{

private:

expense expenses[100];

public:

expense_control();

void setExpense(expense expense, int index);

expense getExpense(int index);

double getTotal();
bool searchExpenseType(string expense_type);

}; // end expense_control

#endif
