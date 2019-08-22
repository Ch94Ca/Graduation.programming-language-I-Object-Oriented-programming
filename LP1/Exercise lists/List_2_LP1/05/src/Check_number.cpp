/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Check_number.hpp"
#include "headers/Low_value_exception.hpp"
#include "headers/Little_high_value_exception.hpp"
#include "headers/Very_high_value_exception.hpp"

Check_number::Check_number()
{

} // end constructor

std::string Check_number::check(int number)
{
        if(number <= 0)throw(Low_value_exception());

        if(number > 100 && number < 1000) throw(Little_high_value_exception());

        if(number >= 1000) throw(Very_high_value_exception());

        return "Allowed number";

} // end check_number
