/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */
 
#include "headers/Restaurant.hpp"

using namespace std;

int main(int argc, char** argv)
{
        cout << endl << "--------------------------------------------------" << endl;
        cout << "'Restaurant' class test: " << endl;
        cout << "--------------------------------------------------" << endl << endl;

        Restaurant restaurant;

        Order order0("Lunch", 1, 2, 15); // item no., qty, price
        Order order1("Dinner", 2, 1, 6);
        Order order2("Dinner", 2, 3, 6);

        restaurant.add_to_table(0, order0);
        restaurant.add_to_table(1, order1);
        restaurant.add_to_table(2, order2);

        for(long unsigned int i = 0; i < (restaurant.get_tables()).size(); i++)
        {
                cout << "Table No.: " << (restaurant.get_tables())[i].get_table_no() << endl << endl;
                cout << "Orders: " << endl << endl;

                for(long unsigned int j = 0; j < (((restaurant.get_tables())[i].get_orders()).size()); j++)
                {
                        cout << "Order No.: " << (((restaurant.get_tables())[i].get_orders())[j].get_number()) << endl;
                        cout << "Description: " << (((restaurant.get_tables())[i].get_orders())[j].get_description()) << endl;
                        cout << "Qty: " << (((restaurant.get_tables())[i].get_orders())[j].get_qty()) << endl;
                        cout << "Price: " << (((restaurant.get_tables())[i].get_orders())[j].get_price()) << endl << endl;

                } // end for

                cout << "Table Total: " << ((restaurant.get_tables())[i].get_table_total()) << endl;

                cout << endl << "---------------------------" << endl << endl;

        } // end for

        cout << "Restaurant total: " << restaurant.get_restaurant_total() << endl << endl;

        cout << "---------------------------" << endl << endl;

        cout << "-> Adding new items to the tables <-" << endl << endl;

        restaurant.add_to_table(0, order2);
        restaurant.add_to_table(1, order0);
        restaurant.add_to_table(2, order1);

        for(long unsigned int i = 0; i < (restaurant.get_tables()).size(); i++)
        {
                cout << "Table No.: " << (restaurant.get_tables())[i].get_table_no() << endl << endl;
                cout << "Orders: " << endl << endl;

                for(long unsigned int j = 0; j < (((restaurant.get_tables())[i].get_orders()).size()); j++)
                {
                        cout << "Order No.: " << (((restaurant.get_tables())[i].get_orders())[j].get_number()) << endl;
                        cout << "Description: " << (((restaurant.get_tables())[i].get_orders())[j].get_description()) << endl;
                        cout << "Qty: " << (((restaurant.get_tables())[i].get_orders())[j].get_qty()) << endl;
                        cout << "Price: " << (((restaurant.get_tables())[i].get_orders())[j].get_price()) << endl << endl;

                } // end for

                cout << "Table Total: " << ((restaurant.get_tables())[i].get_table_total()) << endl;

                cout << endl << "---------------------------" << endl << endl;

        } // end for

        cout << "Restaurant total: " << restaurant.get_restaurant_total() << endl << endl;

        cout << "---------------------------" << endl << endl;

        cout << "-> Increasing items to the tables <-" << endl << endl;

        restaurant.add_to_table(0, order0);
        restaurant.add_to_table(1, order1);
        restaurant.add_to_table(2, order2);

        for(long unsigned int i = 0; i < (restaurant.get_tables()).size(); i++)
        {
                cout << "Table No.: " << (restaurant.get_tables())[i].get_table_no() << endl << endl;
                cout << "Orders: " << endl << endl;

                for(long unsigned int j = 0; j < (((restaurant.get_tables())[i].get_orders()).size()); j++)
                {
                        cout << "Order No.: " << (((restaurant.get_tables())[i].get_orders())[j].get_number()) << endl;
                        cout << "Description: " << (((restaurant.get_tables())[i].get_orders())[j].get_description()) << endl;
                        cout << "Qty: " << (((restaurant.get_tables())[i].get_orders())[j].get_qty()) << endl;
                        cout << "Price: " << (((restaurant.get_tables())[i].get_orders())[j].get_price()) << endl << endl;

                } // end for

                cout << "Table Total: " << ((restaurant.get_tables())[i].get_table_total()) << endl;

                cout << endl << "---------------------------" << endl << endl;

        } // end for

        cout << "Restaurant total: " << restaurant.get_restaurant_total() << endl << endl;

        cout << "---------------------------" << endl << endl;

        cout << "-> Canceling items <-" << endl << endl;

        restaurant.cancel_table_orders(0);
        restaurant.cancel_table_orders(1);
        restaurant.cancel_table_orders(2);

        for(long unsigned int i = 0; i < (restaurant.get_tables()).size(); i++)
        {
                cout << "Table No.: " << (restaurant.get_tables())[i].get_table_no() << endl << endl;
                cout << "Orders: " << endl << endl;

                for(long unsigned int j = 0; j < (((restaurant.get_tables())[i].get_orders()).size()); j++)
                {
                        cout << "Order No.: " << (((restaurant.get_tables())[i].get_orders())[j].get_number()) << endl;
                        cout << "Description: " << (((restaurant.get_tables())[i].get_orders())[j].get_description()) << endl;
                        cout << "Qty: " << (((restaurant.get_tables())[i].get_orders())[j].get_qty()) << endl;
                        cout << "Price: " << (((restaurant.get_tables())[i].get_orders())[j].get_price()) << endl << endl;

                } // end for

                cout << "Table Total: " << ((restaurant.get_tables())[i].get_table_total()) << endl;

                cout << endl << "---------------------------" << endl << endl;

        } // end for

        cout << "Restaurant total: " << restaurant.get_restaurant_total() << endl << endl;

        cout << "---------------------------" << endl << endl;

        /*
           cout << endl << "--------------------------------------------------" << endl;
           cout << "'Order' class test: " << endl;
           cout << "--------------------------------------------------" << endl << endl;

           Order order1("Lunch", 1, 2, 15); // item no., qty, price
           Order order2("Dinner", 2, 7, 6);
           Order order3("Dinner", 2, 3, 6);

           cout << "Order 1:" << endl << endl;

           cout << "Description: " << order1.get_description() << endl;
           cout << "Order No.: " << order1.get_number() << endl;
           cout << "Qty: " << order1.get_qty() << endl;
           cout << "Price: " << order1.get_price() << endl << endl;

           cout << "Order 2:" << endl << endl;

           cout << "Description: " << order2.get_description() << endl;
           cout << "Order No.: " << order2.get_number() << endl;
           cout << "Qty: " << order2.get_qty() << endl;
           cout << "Price: " << order2.get_price() << endl;

           cout << endl << "--------------------------------------------------" << endl;
           cout << "'Table' class test: " << endl;
           cout << "--------------------------------------------------" << endl << endl;

           Table table1(1, order1); // table no., order
           Table table2(2, order2);

           cout << "Table " << table1.get_table_no() << ": " << endl << endl;

           for(long unsigned int i = 0; i < (table1.get_orders()).size(); i++)
           {
                cout << "Order No.: " << (table1.get_orders())[i].get_number() << endl;
                cout << "Item description: " << (table1.get_orders())[i].get_description() << endl;
                cout << "Item qty: " << (table1.get_orders())[i].get_qty() << endl;
                cout << "Item price: " << (table1.get_orders())[i].get_price() << endl;

                cout << "---------------------" << endl;

           } // end for

           cout << "Total: " << table1.get_table_total() << endl << endl;

           cout << "Table " << table2.get_table_no() << ": " << endl << endl;

           for(long unsigned int i = 0; i < (table2.get_orders()).size(); i++)
           {
                cout << "Order No.: " << (table2.get_orders())[i].get_number() << endl;
                cout << "Item description: " << (table2.get_orders())[i].get_description() << endl;
                cout << "Item qty: " << (table2.get_orders())[i].get_qty() << endl;
                cout << "Item price: " << (table2.get_orders())[i].get_price() << endl;

                cout << "---------------------" << endl;

           } // end for

           cout << "Total: " << table2.get_table_total() << endl << endl;

           cout << "-> Adding new items to the tables <-" << endl << endl;

           table1.add_to_orders(order3);
           table2.add_to_orders(order3);

           cout << "Table " << table1.get_table_no() << ": " << endl << endl;

           for(long unsigned int i = 0; i < (table1.get_orders()).size(); i++)
           {
                cout << "Order No.: " << (table1.get_orders())[i].get_number() << endl;
                cout << "Item description: " << (table1.get_orders())[i].get_description() << endl;
                cout << "Item qty: " << (table1.get_orders())[i].get_qty() << endl;
                cout << "Item price: " << (table1.get_orders())[i].get_price() << endl;

                cout << "---------------------" << endl;

           } // end for

           cout << "Total: " << table1.get_table_total() << endl << endl;

           cout << "Table " << table2.get_table_no() << ": " << endl << endl;

           for(long unsigned int i = 0; i < (table2.get_orders()).size(); i++)
           {
                cout << "Order No.: " << (table2.get_orders())[i].get_number() << endl;
                cout << "Item description: " << (table2.get_orders())[i].get_description() << endl;
                cout << "Item qty: " << (table2.get_orders())[i].get_qty() << endl;
                cout << "Item price: " << (table2.get_orders())[i].get_price() << endl;

                cout << "---------------------" << endl;

           } // end for

           cout << "Total: " << table2.get_table_total() << endl << endl;

           cout << "-> Canceling orders on table 1 <-" << endl << endl;

           table1.cancel_orders();

           cout << "Table " << table1.get_table_no() << ": " << endl << endl;

           for(long unsigned int i = 0; i < (table1.get_orders()).size(); i++)
           {
                cout << "Order No.: " << (table1.get_orders())[i].get_number() << endl;
                cout << "Item description: " << (table1.get_orders())[i].get_description() << endl;
                cout << "Item qty: " << (table1.get_orders())[i].get_qty() << endl;
                cout << "Item price: " << (table1.get_orders())[i].get_price() << endl;

                cout << "---------------------" << endl;

           } // end for

           cout << "Total: " << table1.get_table_total() << endl << endl;

         */

}  // end main
