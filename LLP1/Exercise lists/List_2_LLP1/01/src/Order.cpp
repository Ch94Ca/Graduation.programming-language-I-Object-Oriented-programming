/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Order.hpp"

Order::Order()
{
        description = "";
        number = -1;
        qty = 0;
        price = 0;

} // end constructor

Order::Order(std:: string description, int number, int qty, double price)
{
        this->description = description;
        this->number = number;

        this->set_qty(qty);
        this->set_price(price);

} // end constructor

void Order::set_description(std::string description)
{
        this->description = description;

} // end set_description

void Order::set_number(int number)
{
        this->number = number;

} // end set_number

void Order::set_qty(int qty)
{
        if(qty < 0) this->qty = 0;
        else this->qty = qty;

} // end set_qty

void Order::set_price(double price)
{
        if(price < 0) this->price = 0;
        else this->price = price;

} // end set_price

std::string Order::get_description()
{
        return description;

} // end get_description

int Order::get_number()
{
        return number;

} // end get_number

int Order::get_qty()
{
        return qty;

} // end get_qty

double Order::get_price()
{
        return price;

} // end get_price
