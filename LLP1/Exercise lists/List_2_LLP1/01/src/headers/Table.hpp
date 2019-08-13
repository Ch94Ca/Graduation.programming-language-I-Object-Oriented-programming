/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef TABLE_HPP
#define TABLE_HPP

#include <vector>

#include "Order.hpp"

class Table
{

private:

std::vector<Order> orders;
unsigned int table_no;

public:

Table(unsigned int table_no);
Table(unsigned int table_no, Order order);

void add_to_orders(Order order);
void cancel_orders();

void set_table_no(unsigned int table_no);

std::vector<Order> get_orders();
unsigned int get_table_no();
double get_table_total();

}; // end Table

#endif
