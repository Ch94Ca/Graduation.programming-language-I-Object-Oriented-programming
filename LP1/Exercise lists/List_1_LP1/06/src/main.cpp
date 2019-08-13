/*
 *   CRUD State Agency System
 *
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include <iomanip>
#include "headers/flight.hpp"

using namespace std;

int main(int argc, char** argv)
{
        flight flight_0, flight_1, flight_2;

        flight_0 = flight(1, 15, 7, 2019, 21, 34, 48);
        flight_1 = flight(2, 16, 7, 2019, 12, 34, 48);
        flight_2 = flight(3, 17, 7, 2019, 3, 34, 48);

        cout << endl << "Flight 0:" << endl << endl;

        cout << "Flight No.: " << flight_0.getFlightNo() << endl;

        cout << "Flight date: ";

        cout << setfill('0') << setw(2) << (flight_0.getDate()).getDay() << "/";
        cout << setfill('0') << setw(2) << (flight_0.getDate()).getMonth() << "/";
        cout << setfill('0') << setw(4) << (flight_0.getDate()).getYear()<< endl;

        cout << "Flight time: ";

        cout << setfill('0') << setw(2) << (flight_0.getTime()).getHour() << ":";
        cout << setfill('0') << setw(2) << (flight_0.getTime()).getMinute() << ":";
        cout << setfill('0') << setw(2) << (flight_0.getTime()).getSecond() << endl;

        cout << "Flight free seats: " << flight_0.avaibleSeats() << endl;

        cout << endl << "Flight 1:" << endl << endl;

        cout << "Flight No.: " << flight_1.getFlightNo() << endl;

        cout << "Flight date: ";

        cout << setfill('0') << setw(2) << (flight_1.getDate()).getDay() << "/";
        cout << setfill('0') << setw(2) << (flight_1.getDate()).getMonth() << "/";
        cout << setfill('0') << setw(4) << (flight_1.getDate()).getYear()<< endl;

        cout << "Flight time: ";

        cout << setfill('0') << setw(2) << (flight_1.getTime()).getHour() << ":";
        cout << setfill('0') << setw(2) << (flight_1.getTime()).getMinute() << ":";
        cout << setfill('0') << setw(2) << (flight_1.getTime()).getSecond() << endl;

        cout << "Flight free seats: " << flight_1.avaibleSeats() << endl;

        cout << endl << "Flight 2:" << endl << endl;

        cout << "Flight No.: " << flight_2.getFlightNo() << endl;

        cout << "Flight date: ";

        cout << setfill('0') << setw(2) << (flight_2.getDate()).getDay() << "/";
        cout << setfill('0') << setw(2) << (flight_2.getDate()).getMonth() << "/";
        cout << setfill('0') << setw(4) << (flight_2.getDate()).getYear()<< endl;

        cout << "Flight time: ";

        cout << setfill('0') << setw(2) << (flight_2.getTime()).getHour() << ":";
        cout << setfill('0') << setw(2) << (flight_2.getTime()).getMinute() << ":";
        cout << setfill('0') << setw(2) << (flight_2.getTime()).getSecond() << endl;

        cout << "Flight free seats: " << flight_1.avaibleSeats() << endl;

        cout << endl << "Seats tests:" << endl << endl;

        cout << "Seats 0, 1, 2 from flight 1 taken" << endl << endl;

        cout << "Flight 1, seat 0 taken: " << flight_1.takeSeat(0) << endl;
        cout << "Flight 1, seat 1 taken: " << flight_1.takeSeat(1) << endl;
        cout << "Flight 1, seat 2 taken: " << flight_1.takeSeat(2) << endl;

        cout << endl << "Seats stats:" << endl << endl;

        cout << "Flight 1, seat 0: " <<flight_1.verifySeat(0) << endl;
        cout << "Flight 1, seat 1: " <<flight_1.verifySeat(1) << endl;
        cout << "Flight 1, seat 2: " <<flight_1.verifySeat(2) << endl;
        cout << "Flight 1, seat 3: " <<flight_1.verifySeat(3) << endl;
        cout << "Flight 1, seat 4: " <<flight_1.verifySeat(4) << endl;
        cout << "Flight 1, seat 5: " <<flight_1.verifySeat(5) << endl << endl;

        cout << "Trying to take flight 1, seat 1(Already taken seat): " << flight_1.takeSeat(1) << endl << endl;

        cout << "Next free seat in flight 1: " << flight_1.nextFreeSeat() << endl << endl;

        cout << "Total free seats in flight 1: " << flight_1.avaibleSeats() << endl << endl;

}  // end main
