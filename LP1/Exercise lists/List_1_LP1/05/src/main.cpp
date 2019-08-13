/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include <iostream>
#include <iomanip>
#include "headers/my_time.hpp"

using namespace std;

int main(int argc, char** argv)
{
        my_time time_0, time_1, time_2;

        time_0 = my_time();
        time_1 = my_time(3, 60, 60);
        time_2 = my_time(2, 30, 49);

        cout << endl << "time 0:" << endl;

        cout << setfill('0') << setw(2) << time_0.getHour() << ":";
        cout << setfill('0') << setw(2) << time_0.getMinute() << ":";
        cout << setfill('0') << setw(2) << time_0.getSecond() << endl;

        cout << endl << "time 1:" << endl;

        cout << setfill('0') << setw(2) << time_1.getHour() << ":";
        cout << setfill('0') << setw(2) << time_1.getMinute() << ":";
        cout << setfill('0') << setw(2) << time_1.getSecond() << endl;

        cout << endl << "time 2:" << endl;

        cout << setfill('0') << setw(2) << time_2.getHour() << ":";
        cout << setfill('0') << setw(2) << time_2.getMinute() << ":";
        cout << setfill('0') << setw(2) << time_2.getSecond() << endl;

        cout << endl << "Advance time test:" << endl;

        time_0.advanceTime();
        time_1.advanceTime();
        time_2.advanceTime();

        cout << endl << "time 0:" << endl;

        cout << setfill('0') << setw(2) << time_0.getHour() << ":";
        cout << setfill('0') << setw(2) << time_0.getMinute() << ":";
        cout << setfill('0') << setw(2) << time_0.getSecond() << endl;

        cout << endl << "time 1:" << endl;

        cout << setfill('0') << setw(2) << time_1.getHour() << ":";
        cout << setfill('0') << setw(2) << time_1.getMinute() << ":";
        cout << setfill('0') << setw(2) << time_1.getSecond() << endl;

        cout << endl << "time 2:" << endl;

        cout << setfill('0') << setw(2) << time_2.getHour() << ":";
        cout << setfill('0') << setw(2) << time_2.getMinute() << ":";
        cout << setfill('0') << setw(2) << time_2.getSecond() << endl;

}  // end main
