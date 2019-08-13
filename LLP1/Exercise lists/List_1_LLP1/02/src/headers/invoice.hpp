/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef INVOICE_HPP
#define INVOICE_HPP

#include <iostream>

using namespace std;

class invoice
{

private:

string item_description;
int item_no;
int item_qty;
double item_price;

public:

invoice();
invoice(string item_description, int item_no, int item_qty, double item_price);

double getInvoiceAmount();

void setDescription(string item_description);
void setNo(int item_no);
void setQty(int item_qty);
void setPrice(double item_price);

string getDescription();
int getNo();
int getQty();
double getPrice();

}; // end invoice

#endif
