/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/expense_control.hpp"

using namespace std;

expense_control::expense_control()
{
        for(int i = 0; i < 100; i++)
        {
                this->expenses[i] = expense("", 0);

        } // end for

} // end constructor

void expense_control::setExpense(expense expense, int index)
{
        this->expenses[index] = expense;

} // end setExpense

expense expense_control::getExpense(int index)
{
        return expenses[index];

} // end getExpense

double expense_control::getTotal()
{
        double total = 0;

        for(int i = 0; i < 100; i++)
        {
                total += this->expenses[i].getValue();

        } // end for

        return total;

} // end getTotal

bool expense_control::searchExpenseType(string expense_type)
{
        for(int i = 0; i < 100; i++)
        {
                if(this->expenses[i].getExpenseType() == expense_type)
                {
                        return true;

                } // end if

        } // end for

        return false;

} // end searchExpenseType
