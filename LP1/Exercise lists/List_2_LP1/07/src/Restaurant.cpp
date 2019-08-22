/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Restaurant.hpp"

void Restaurant::cancel_table_orders(int table_no)
{
        tables[table_no].cancel_orders();

} // cancel_table_orders

void Restaurant::add_to_table(unsigned int table_no, Order order)
{
        for(long unsigned int i = 0; i < tables.size(); i++)
        {
                if(tables[i].get_table_no() == table_no)
                {
                        tables[i].add_to_orders(order);

                        return;

                } // end if

        } // end if

        Table table(table_no);
        table.add_to_orders(order);
        tables.push_back(table);

} // end add_to_table

double Restaurant::get_restaurant_total()
{
        double total = 0;

        for(long unsigned int i = 0; i < tables.size(); i++)
        {
                total += tables[i].get_table_total();

        } // end for

        return total;

} // get_restaurant_total

std::vector<Table> Restaurant::get_tables()
{
        return tables;

} // end get_tables
