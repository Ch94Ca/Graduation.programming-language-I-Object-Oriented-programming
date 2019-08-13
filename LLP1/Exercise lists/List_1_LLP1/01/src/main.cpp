/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include <iomanip>
#include "headers/my_date.hpp"

using namespace std;

int main(int argc, char** argv)
{
        my_date date_0, date_1, date_2, date_3, date_4;

        date_0 = my_date(31, 12, 2019);
        date_1 = my_date(1, 7, 2019);
        date_2 = my_date(16, 7, 2019);
        date_3 = my_date(29, 2, 2019);
        date_4 = my_date(29, 2, 2020);

        cout << endl << "date 0:" << endl;

        cout << setfill('0') << setw(2) << date_0.getDay() << "/";
        cout << setfill('0') << setw(2) << date_0.getMonth() << "/";
        cout << setfill('0') << setw(4) << date_0.getYear() << endl;

        cout << date_0.getMonthName() << endl;

        date_0.advanceOneDay();

        cout << endl << "date 0 after advance one day:" << endl;

        cout << setfill('0') << setw(2) << date_0.getDay() << "/";
        cout << setfill('0') << setw(2) << date_0.getMonth() << "/";
        cout << setfill('0') << setw(4) << date_0.getYear() << endl;

        cout << date_0.getMonthName() << endl;

        cout << endl << "date 1:" << endl;

        cout << setfill('0') << setw(2) << date_1.getDay() << "/";
        cout << setfill('0') << setw(2) << date_1.getMonth() << "/";
        cout << setfill('0') << setw(4) << date_1.getYear() << endl;

        cout << date_1.getMonthName() << endl;

        cout << endl << "date 2:" << endl;

        cout << setfill('0') << setw(2) << date_2.getDay() << "/";
        cout << setfill('0') << setw(2) << date_2.getMonth() << "/";
        cout << setfill('0') << setw(4) << date_2.getYear() << endl;

        cout << date_2.getMonthName() << endl;

        cout << endl << "date 3:" << endl;

        cout << setfill('0') << setw(2) << date_3.getDay() << "/";
        cout << setfill('0') << setw(2) << date_3.getMonth() << "/";
        cout << setfill('0') << setw(4) << date_3.getYear() << endl;

        cout << date_3.getMonthName() << endl;

        cout << endl << "date 4:" << endl;

        cout << setfill('0') << setw(2) << date_4.getDay() << "/";
        cout << setfill('0') << setw(2) << date_4.getMonth() << "/";
        cout << setfill('0') << setw(4) << date_4.getYear() << endl;

        cout << date_4.getMonthName() << endl;

        cout << endl << "leap year tests: " << endl << endl;

        cout << "date 0: " << date_0.isLeapYear() << endl;
        cout << "date 1: " << date_1.isLeapYear() << endl;
        cout << "date 2: " << date_2.isLeapYear() << endl;
        cout << "date 3: " << date_3.isLeapYear() << endl;
        cout << "date 4: " << date_4.isLeapYear() << endl;

        cout << endl << "compare tests: " << endl << endl;

        cout << "date 0 compared to date 1: " << date_0.compare(date_1) << endl;
        cout << "date 1 compared to date 1: " << date_1.compare(date_1) << endl;
        cout << "date 1 compared to date 2: " << date_1.compare(date_2) << endl;
        cout << "date 2 compared to date 1: " << date_2.compare(date_1) << endl;
        cout << "date 2 compared to date 3: " << date_2.compare(date_3) << endl;
        cout << "date 3 compared to date 2: " << date_3.compare(date_2) << endl;
        cout << "date 3 compared to date 4: " << date_3.compare(date_4) << endl;
        cout << "date 4 compared to date 3: " << date_4.compare(date_3) << endl;

}  // end main
