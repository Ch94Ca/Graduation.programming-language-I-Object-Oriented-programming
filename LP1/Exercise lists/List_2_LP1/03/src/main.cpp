/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Monthly_worker.hpp"
#include "headers/Hourly_worker.hpp"
#include "headers/Comissioned_worker.hpp"
#include "headers/Payroll.hpp"
#include "headers/Worker_not_found_Exception.hpp"
#include "headers/Expense_limit_exceeded_exception.hpp"

using namespace std;

int main(int argc, char** argv)
{

        Payroll payroll;

        payroll.set_expense_limit(100000);

        Monthly_worker monthly_worker("Jane Doe",
                                      "000-000",
                                      25000);

        Hourly_worker hourly_worker("John Doe",
                                    "000-000",
                                    45,
                                    20);

        Comissioned_worker comissioned_worker("Carlos",
                                              "000-000",
                                              25000,
                                              5,
                                              15000);

        payroll.set_worker<Monthly_worker>(&monthly_worker);
        payroll.set_worker<Hourly_worker>(&hourly_worker);
        payroll.set_worker<Comissioned_worker>(&comissioned_worker);

        for(auto &i : payroll.get_workers())
        {
                cout << "Worker: " << i->get_name() << endl;
                cout << "Salary: $ " << payroll.get_worker_salary(i->get_name()) << endl << endl;

        } // end for

        try{
                cout << "Trying to find a worker who doesn't exist (Joao)" << endl;

                payroll.get_worker_salary("Joao");

        }catch(Worker_not_found_Exception &e)
        {
                cout << "Error: " << e.what() << endl;

        } // end try catch

        cout << endl;

        cout << "Total:" << payroll.get_total_payroll() << endl;
        cout << "Expense Limit: " << payroll.get_expense_limit() << endl << endl;

        try{
                cout << "Overflow of expenses, changing limit to $ 50.000" << endl;

                payroll.set_expense_limit(50000);

                cout << "Total: $ " << payroll.get_total_payroll() << endl;

        }catch(Expense_limit_exceeded_exception &e)
        {
                cout << endl << "Error: " << e.what() << endl;

        } // end try catch

}  // end main
