/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef MY_DATE_HPP
#define MY_DATE_HPP

#include <iostream>

using namespace std;

class my_date
{

private:

int day;
int month;
int year;

public:

my_date();
my_date(int day, int month, int year);

bool isLeapYear();
int compare(my_date &my_date);
string getMonthName();
void advanceOneDay();

int setDay(int day);
int setMonth(int month);
int setYear(int year);

int getDay();
int getMonth();
int getYear();

}; // end my_date

#endif
