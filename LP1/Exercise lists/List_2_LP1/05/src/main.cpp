/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

 #include "headers/Check_number.hpp"
 #include "headers/Low_value_exception.hpp"
 #include "headers/Little_high_value_exception.hpp"
 #include "headers/Very_high_value_exception.hpp"

using namespace std;

int main(int argc, char** argv)
{
        Check_number check;

        try
        {
                cout << "Checking number -1: " << check.check(-1) << endl << endl;

        }catch(const Low_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        }catch(const Little_high_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        }catch(const Very_high_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        } // end try/catch/catch/catch

        try
        {
                cout << "Checking number 101: " << check.check(101) << endl << endl;

        }catch(const Low_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        }catch(const Little_high_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        }catch(const Very_high_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        } // end try/catch/catch/catch

        try
        {
                cout << "Checking number 1000: " << check.check(1000) << endl << endl;

        }catch(const Low_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        }catch(const Little_high_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        }catch(const Very_high_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        } // end try/catch/catch/catch

        try
        {
                cout << "Checking number 1: " << check.check(1) << endl << endl;

        }catch(const Low_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        }catch(const Little_high_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        }catch(const Very_high_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        } // end try/catch/catch/catch

        try
        {
                cout << "Checking number 99: " << check.check(99) << endl << endl;

        }catch(const Low_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        }catch(const Little_high_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        }catch(const Very_high_value_exception &e)
        {
                cerr << "Error: " << e.what() << endl << endl;

        } // end try/catch/catch/catch

}  // end main
