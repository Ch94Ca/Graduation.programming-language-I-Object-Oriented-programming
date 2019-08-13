/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef PAYMENT_HPP
#define PAYMENT_HPP

#include <iostream>

using namespace std;

class payment
{

private:

double payment_value;
string name;

public:

payment();
payment(string name, double payment_value);

void setPaymentValue(double payment_value);
void setName(string name);

double getPaymentValue();
string getName();

}; // end payment

#endif
