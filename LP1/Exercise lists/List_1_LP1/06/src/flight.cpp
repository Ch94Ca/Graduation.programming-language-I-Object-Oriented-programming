/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/flight.hpp"

using namespace std;

flight::flight()
{
        this->flight_no = -1;
        this->flight_date = my_date(1, 1, 1);
        this->flight_time = my_time(0, 0, 0);

        for(int i = 0; i < 100; i++)
        {
                this->seats[i] = false;

        } // end for

} // end constructor

flight::flight(int flight_no, int day, int month, int year, int hour, int minute, int second)
{
        this->flight_no = flight_no;
        this->flight_date = my_date(day, month, year);
        this->flight_time = my_time(hour, minute, second);

        for(int i = 0; i < 100; i++)
        {
                this->seats[i] = false;

        } // end for

} // end constructor

void flight::setNo(int flight_no)
{
        this->flight_no = flight_no;

} // end setNo

int flight::nextFreeSeat()
{
        for(int i = 0; i < 100; i++)
        {
                if(this->seats[i] == false)
                {
                        return i;

                } // end if

        } // end for

        return -1;

} // end nextFreeSeat

bool flight::verifySeat(int seat)
{
        if(this->seats[seat] == true)
        {
                return true;

        } // end if

        return false;

} // end verifySeat

bool flight::takeSeat(int seat)
{
        if(this->seats[seat] == false)
        {
                this->seats[seat] = true;
                return true;

        } // end if

        return false;

} // end takeSeat

int flight::avaibleSeats()
{
        int avaibleSeats = 0;

        for(int i = 0; i < 100; i++)
        {
                if(this->seats[i] == false)
                {
                        avaibleSeats++;

                } // end if

        } // end for

        return avaibleSeats;

} // end avaibleSeats

int flight::getFlightNo()
{
        return flight_no;

} // getFlightNo

my_date flight::getDate()
{
        return flight_date;

} // end getDate

my_time flight::getTime()
{
        return flight_time;

} // end getTime
