/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Payroll.hpp"
#include "headers/Worker_not_found_Exception.hpp"
#include "headers/Expense_limit_exceeded_exception.hpp"

Payroll::Payroll()
{


} // end constructor

void Payroll::set_expense_limit(double expense_limit)
{
        this->expense_limit = expense_limit;

} // end set_expense_limit

std::vector<Worker*> Payroll::get_workers()
{
        return workers;

} // end get_workers

double Payroll::get_expense_limit()
{
        return expense_limit;

} // end get_expense_limit


double Payroll::get_worker_salary(std::string worker_name)
{
        for(auto &i : workers)
        {
                if(i->get_name() == worker_name)
                {
                        return i->get_salary();

                } // end if

        } // end for

        throw Worker_not_found_Exception();

} // end get_worker_salary

double Payroll::get_total_payroll()
{
        double total;

        for(auto &i : workers)
        {
                total += i->get_salary();

        } // end for

        if(total > expense_limit)
        {
                throw Expense_limit_exceeded_exception();

        } // end if

        return total;

} // end get_total_payroll
