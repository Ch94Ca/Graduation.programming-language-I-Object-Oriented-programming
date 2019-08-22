/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Account.hpp"
#include "headers/Special_account.hpp"
#include "headers/Without_balance_exception.hpp"
#include "headers/Negative_withdraw_exception.hpp"
#include "headers/Negative_deposit_exception.hpp"

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

        Account client("Carlos",
                       "0000-000X",
                       20000,
                       0);

        Special_account special_client("Carlos",
                                       "0000-000X",
                                       20000,
                                       0);

        cout << "Client: " << client.get_client_name() << endl;
        cout << "Account Number: " << client.get_account_number() << endl;
        cout << "Monthly Salary: " << client.get_monthly_salary() << endl;
        cout << "Balance: $" << client.get_balance() << endl;
        cout << "Client limit: " << client.get_limit() << endl;

        cout << endl;

        client.set_monthly_salary(25000);

        /*

            define_limit() method is called inside class constructor and
            set_monthly_salary() method. There is no need to call him here.

            the limit will be defined in every salary change

         */

        cout << "Client new salary: $ " << client.get_monthly_salary() << endl;
        cout << "Client new limit: $ " << client.get_limit() << endl << endl;

        try
        {
                cout << "Client deposits $ -20.000" << endl;
                client.deposit(-20000);

        }catch(const Negative_deposit_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        } // end try/catch

        cout << "Balance after deposit: $ " << client.get_balance() << endl << endl;

        try
        {
                cout << "Client deposits $ 20.000" << endl;
                client.deposit(20000);

        }catch(const Negative_deposit_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        } // end try/catch

        cout << "Balance after deposit: $ " << client.get_balance() << endl << endl;

        try
        {
                cout << "Client withdraw $ 40.000" << endl;
                client.withdraw(40000);

        }catch(const Without_balance_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        }catch(const Negative_withdraw_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        } // end try/catch/catch

        cout << "Balance after withdraw: $ " << client.get_balance() << endl << endl;

        try
        {
                cout << "Client withdraw $ -40.000" << endl;
                client.withdraw(-40000);

        }catch(const Without_balance_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        }catch(const Negative_withdraw_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        } // end try/catch/catch

        cout << "Balance after withdraw: $ " << client.get_balance() << endl << endl;

        try
        {
                cout << "Client withdraw $ 10.000" << endl;
                client.withdraw(10000);

        }catch(const Without_balance_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        }catch(const Negative_withdraw_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        } // end try/catch/catch

        cout << "Balance after withdraw: $ " << client.get_balance() << endl << endl;

        cout << "------------------------------------------------------------" << endl << endl;

        cout << "Special Client: " << special_client.get_client_name() << endl;
        cout << "Account Number: " << special_client.get_account_number() << endl;
        cout << "Monthly Salary: " << special_client.get_monthly_salary() << endl;
        cout << "Balance: $" << special_client.get_balance() << endl;
        cout << "Special Client limit: " << special_client.get_limit() << endl;

        cout << endl;

        special_client.set_monthly_salary(25000);

        cout << "Special Client new salary: $ " << special_client.get_monthly_salary() << endl;
        cout << "Special Client new limit: $ " << special_client.get_limit() << endl << endl;

        try
        {
                cout << "Special Client deposits $ -20.000" << endl;
                special_client.deposit(-20000);

        }catch(const Negative_deposit_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        } // end try/catch

        cout << "Balance after deposit: $ " << special_client.get_balance() << endl << endl;

        try
        {
                cout << "Special Client deposits $ 20.000" << endl;
                special_client.deposit(20000);

        }catch(const Negative_deposit_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        } // end try/catch


        cout << "Balance after deposit: $ " << special_client.get_balance() << endl << endl;

        try
        {
                cout << "Special Client withdraw $ 40.000" << endl;
                special_client.withdraw(40000);

        }catch(const Without_balance_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        }catch(const Negative_withdraw_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        } // end try/catch/catch

        cout << "Balance after withdraw: $ " << special_client.get_balance() << endl << endl;

        try
        {
                cout << "Special Client withdraw $ -40.000" << endl;
                special_client.withdraw(-40000);

        }catch(const Without_balance_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        }catch(const Negative_withdraw_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        } // end try/catch/catch

        cout << "Balance after withdraw: $ " << special_client.get_balance() << endl << endl;

        try
        {
                cout << "Special Client withdraw $ 10.000" << endl;
                special_client.withdraw(10000);

        }catch(const Without_balance_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        }catch(const Negative_withdraw_exception &e)
        {
                cerr << "Error: " << e.what() << endl;

        } // end try/catch/catch

        cout << "Balance after withdraw: $ " << special_client.get_balance() << endl;

}  // end main
