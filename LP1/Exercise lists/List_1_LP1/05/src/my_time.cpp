/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/my_time.hpp"

using namespace std;

my_time::my_time()
{
        this->hour = 0;
        this->minute = 0;
        this->second = 0;

} // end constructor

my_time::my_time(int hour, int minute, int second)
{
        if(this->setHour(hour) == 0 || this->setMinute(minute) == 0 || this->setSecond(second) == 0)
        {
                this->hour = 0;
                this->minute = 0;
                this->second = 0;

        }// end if

} // end constructor

void my_time::setTime(int hour, int minute, int second)
{
        if(this->setHour(hour) == 0 || this->setMinute(minute) == 0 || this->setSecond(second) == 0)
        {
                this->hour = 0;
                this->minute = 0;
                this->second = 0;

        }// end if

} // end setTime

void my_time::advanceTime()
{
        second++;

        if(second > 60)
        {
                second = 0;
                minute++;

        } // end if

        if(minute > 60)
        {
                minute = 0;
                hour++;

        } // end if

} // end advanceTime

int my_time::setHour(int hour)
{
        if(hour >= 0)
        {
                this->hour = hour;
                return 1;

        } // end if

        return 0;

} // end setHour

int my_time::setMinute(int minute)
{
        if(minute >= 0 && minute <= 60)
        {
                this->minute = minute;
                return 1;

        } // end if

        return 0;

} // end setMinute

int my_time::setSecond(int second)
{
        if(second >= 0 && second <= 60)
        {
                this->second = second;
                return 1;

        } // end if

        return 0;

} // end setSecond

int my_time::getHour()
{
        return hour;

} // end getHour

int my_time::getMinute()
{
        return minute;

} // end getMinute

int my_time::getSecond()
{
        return second;

} // end getSecond
