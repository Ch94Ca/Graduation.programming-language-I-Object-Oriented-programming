/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Hourly_worker.hpp"
#include "headers/Monthly_worker.hpp"

using namespace std;

int main(int argc, char** argv)
{

  Hourly_worker worker0("Carlos", 100);
  Monthly_worker worker1("Carlos", 100);

  cout << "Worker0 (Hourly worker): " << worker0.get_name() << endl;
  cout << "Hour value: " << worker0.get_hour_value() << endl;
  cout << "Weekly salary (40 hours): " << worker0.get_weekly_salary(40) << endl;
  cout << "Weekly salary (20 hours): " << worker0.get_weekly_salary(20) << endl;
  cout << "Weekly salary (60 hours): " << worker0.get_weekly_salary(60) << endl;

  worker0.set_salary((worker0.get_weekly_salary(60) * 4));

  cout << "Monthly salary: " << worker0.get_salary() << endl << endl;


  cout << "Worker1 (Monthly worker): " << worker1.get_name() << endl;
  cout << "Hour value: " << worker1.get_hour_value() << endl;
  cout << "Weekly salary (40 hours): " << worker1.get_weekly_salary() << endl;

  worker0.set_salary((worker1.get_weekly_salary() * 4));

  cout << "Monthly salary: " << worker0.get_salary() << endl << endl;

}  // end main
