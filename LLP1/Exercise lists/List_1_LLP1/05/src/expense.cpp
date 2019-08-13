/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/expense.hpp"

using namespace std;

expense::expense()
{
        this->expense_type = "";
        this->value = -1;

} // end constructor

expense::expense(string expense_type, double value)
{
        this->expense_type = expense_type;
        this->value = value;

} // end constructor

void expense::setExpenseType(string expense_type)
{
        this->expense_type = expense_type;

} // end setExpenseType

void expense::setValue(double value)
{
        this->value = value;

} // end setValue

string expense::getExpenseType()
{
        return expense_type;

} // end getExpenseType

double expense::getValue()
{
        return value;

} // end getValue
