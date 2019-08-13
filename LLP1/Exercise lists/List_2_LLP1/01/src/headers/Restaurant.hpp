/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP

#include <vector>

#include "Table.hpp"

class Restaurant
{

private:

std::vector<Table> tables;

public:

void cancel_table_orders(int table_no);

void add_to_table(unsigned int table_no, Order order);

double get_restaurant_total();

std::vector<Table> get_tables();

}; // end Restaurant

#endif
