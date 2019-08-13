/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef ORDER_HPP
#define ORDER_HPP

#include <iostream>

class Order
{

private:

std::string description;
int number;
int qty;
double price;

public:

Order();
Order(std:: string description, int number, int qty, double price);

void set_description(std::string description);
void set_number(int number);
void set_qty(int qty);
void set_price(double price);

std::string get_description();
int get_number();
int get_qty();
double get_price();

}; // end Order

#endif
