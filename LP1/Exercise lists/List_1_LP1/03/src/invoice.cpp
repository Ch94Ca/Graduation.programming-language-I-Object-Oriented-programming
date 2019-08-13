/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/invoice.hpp"

using namespace std;

invoice::invoice()
{
        this->setDescription("");
        this->setNo(0);
        this->setQty(0);
        this->setPrice(0.0);

} // end constructor

invoice::invoice(string item_description, int item_no, int item_qty, double item_price)
{
        this->setDescription(item_description);
        this->setNo(item_no);
        this->setQty(item_qty);
        this->setPrice(item_price);

} // end constructor

double invoice::getInvoiceAmount()
{
        return (item_qty * item_price);

} // end getInvoiceAmount

void invoice::setDescription(string item_description)
{
        this->item_description = item_description;

} // end setDescription

void invoice::setNo(int item_no)
{
        this->item_no = item_no;

} // end setNo

void invoice::setQty(int item_qty)
{
        if(item_qty < 0)
        {
                this->item_qty = 0;

        } // end if
        else if(item_qty > 0)
        {
                this->item_qty = item_qty;

        } // end else

} // end setQty

void invoice::setPrice(double item_price)
{
        if(item_price < 0)
        {
                this->item_price = 0.0;

        } // end if
        else if(item_price > 0)
        {
                this->item_price = item_price;

        } // end else

} // end setPrice

string invoice::getDescription()
{
        return item_description;

} // end getDescription

int invoice::getNo()
{
        return item_no;

} // end getNo

int invoice::getQty()
{
        return item_qty;

} // end getQty

double invoice::getPrice()
{
        return item_price;

} // end getPrice
