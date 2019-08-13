/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/my_date.hpp"

using namespace std;

my_date::my_date()
{
        this->day = 1;
        this->month = 1;
        this->year = 1;

} // end constructor

my_date::my_date(int day, int month, int year)
{
        if(this->setYear(year) == 0 || this->setMonth(month) == 0 || this->setDay(day) == 0)
        {
                this->day = 1;
                this->month = 1;
                this->year = 1;

        }// end if

} // end constructor

string my_date::getMonthName()
{
        switch(this->month)
        {

        case 1:
                return "January";
                break;
        case 2:
                return "February";
                break;
        case 3:
                return "March";
                break;
        case 4:
                return "April";
                break;
        case 5:
                return "May";
                break;
        case 6:
                return "June";
                break;
        case 7:
                return "July";
                break;
        case 8:
                return "August";
                break;
        case 9:
                return "September";
                break;
        case 10:
                return "October";
                break;
        case 11:
                return "November";
                break;
        case 12:
                return "December";
                break;

        } // end switch

} // end getMonthName

int my_date::compare(my_date &my_date)
{
        if(this->year == my_date.getYear() && this->month == my_date.getMonth() && this->day == my_date.getDay())
        {
                return 0;

        } // end if

        if(this->year > my_date.getYear()
           || (this->year == my_date.getYear() && this->month > my_date.getMonth())
           || (this->year == my_date.getYear() && this->month == my_date.getMonth() && this->day > my_date.getDay()))
        {
                return 1;

        } // end if

        return -1;

} // end compare

bool my_date::isLeapYear()
{
        if(year % 400 == 0)
        {
                return true;

        } // end if

        if(year % 4 == 0 && year % 100 != 0)
        {
                return true;

        } // end if

        return false;

} // end isLeapYear

int my_date::setDay(int day)
{
        int max_day;

        if(this->month == 2 && this->isLeapYear() == true)
        {
                max_day = 29;

        } // end if
        else if(this->month == 2)
        {
                max_day = 28;

        } // end else

        if(this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7
           || this->month == 8 || this->month == 10 || this->month == 12)
        {
                max_day = 30;

        } // end if
        else if(this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11)
        {
                max_day = 29;

        } // end else

        if(day >= 1 && day <= max_day)
        {
                this->day = day;
                return 1;

        } // end if

        return 0;

} // end setDay

int my_date::setMonth(int month)
{
        if(month >= 1 && month <= 12)
        {
                this->month = month;
                return 1;

        } // end if

        return 0;

} // end setMonth

int my_date::setYear(int year)
{
        if(year >= 0)
        {
                this->year = year;
                return 1;

        } // end if

        return 0;

} // end setYear

int my_date::getDay()
{
        return day;

} // end getDay

int my_date::getMonth()
{
        return month;

} // end getMonth

int my_date::getYear()
{
        return year;

} // end getYear
