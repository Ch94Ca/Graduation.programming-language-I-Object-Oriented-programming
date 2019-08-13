/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

 #include "headers/Employee.hpp"
 #include "headers/Consultant.hpp"

using namespace std;

int main(int argc, char** argv)
{
        Employee employee_0("Carlos", "Henrique", 100000);

        cout << "Employee 1:" << endl << endl;

        cout << "First name: " << employee_0.getFirstName() << endl;
        cout << "Last name: " << employee_0.getLastName() << endl;
        cout << "Salary: " << employee_0.getSalary() << endl;

        employee_0.salaryIncrease(10.0);
        cout << "Salary after 10% increase: " << employee_0.getSalary() << endl << endl;

        Consultant consultant0("Carlos", "Henrique", 100000);

        cout << "Consultant 1:" << endl << endl;

        cout << "First name: " << consultant0.getFirstName() << endl;
        cout << "Last name: " << consultant0.getLastName() << endl;
        cout << "Salary: " << consultant0.getSalary() << endl;

        cout << "Salary after 20% increase: " << consultant0.getSalary(20) << endl << endl;



}  // end main
