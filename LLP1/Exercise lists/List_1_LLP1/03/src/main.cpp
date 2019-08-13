/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

 #include "headers/employee.hpp"

using namespace std;

int main(int argc, char** argv)
{
        employee employee_0, employee_1, employee_2;

        employee_0 = employee();
        employee_1 = employee("Carlos", "Henrique", 100000);
        employee_2 = employee("Henrique", "Carlos", 90000);

        cout << "Employee 0:" << endl << endl;

        cout << "First name: " << employee_0.getFirstName() << endl;
        cout << "Last name: " << employee_0.getLastName() << endl;
        cout << "Salary: " << employee_0.getSalary() << endl << endl;

        cout << "Employee 1:" << endl << endl;

        cout << "First name: " << employee_1.getFirstName() << endl;
        cout << "Last name: " << employee_1.getLastName() << endl;
        cout << "Salary: " << employee_1.getSalary() << endl;

        employee_1.salaryIncrease(10.0);
        cout << "Salary after 10% increase: " << employee_1.getSalary() << endl << endl;

        cout << "Employee 2:" << endl << endl;

        cout << "First name: " << employee_2.getFirstName() << endl;
        cout << "Last name: " << employee_2.getLastName() << endl;
        cout << "Salary: " << employee_2.getSalary() << endl;

        employee_2.salaryIncrease(17.5);
        cout << "Salary after 17.5% increase: " << employee_2.getSalary() << endl << endl;

}  // end main
