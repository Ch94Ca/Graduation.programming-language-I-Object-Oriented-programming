/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef FLIGHT_HPP
#define FLIGHT_HPP

#include "my_date.hpp"
#include "my_time.hpp"

using namespace std;

class flight
{

private:

int flight_no;
my_date flight_date;
my_time flight_time;
bool seats[100];

public:

flight();
flight(int flight_no, int day, int month, int year, int hour, int minute, int second);

int nextFreeSeat();
bool verifySeat(int seat);
bool takeSeat(int seat);
int avaibleSeats();

void setNo(int flight_no);

int getFlightNo();
my_date getDate();
my_time getTime();

}; // end flight

#endif
