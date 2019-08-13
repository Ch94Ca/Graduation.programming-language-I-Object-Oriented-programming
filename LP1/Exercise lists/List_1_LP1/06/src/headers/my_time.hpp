/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef MY_TIME_HPP
#define MY_TIME_HPP

using namespace std;

class my_time
{

private:

int hour;
int minute;
int second;

public:

my_time();
my_time(int hour, int minute, int second);

void setTime(int hour, int minute, int second);
void advanceTime();

int setHour(int hour);
int setMinute(int minute);
int setSecond(int second);

int getHour();
int getMinute();
int getSecond();

}; // end my_time

#endif
