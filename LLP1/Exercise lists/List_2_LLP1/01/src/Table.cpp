/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Table.hpp"

Table::Table(unsigned int table_no)
{
        this->table_no = table_no;

} // end constructor

Table::Table(unsigned int table_no, Order order)
{
        this->table_no = table_no;
        this->add_to_orders(order);

} // end constructor

void Table::add_to_orders(Order order)
{
        for(long unsigned int i = 0; i < orders.size(); i++)
        {
                if(orders[i].get_number() == order.get_number())
                {
                        orders[i].set_qty(orders[i].get_qty() + order.get_qty());

                        return;

                } // end if

        } // end for

        orders.push_back(order);

} // end add_to_orders

void Table::cancel_orders()
{
        orders.clear();
        orders.shrink_to_fit();

} // end cancel_orders

void Table::set_table_no(unsigned int table_no)
{
        this->table_no = table_no;

} // end set_table_no

std::vector<Order> Table::get_orders()
{
        return orders;

} // end get_orders

unsigned int Table::get_table_no()
{
        return table_no;

} // end get_table_no

double Table::get_table_total()
{
        double total = 0;

        for(long unsigned int i = 0; i < orders.size(); i++) {

                total += (orders[i].get_price() * orders[i].get_qty());

        } // end for

        return total;

} // end get_table_total
