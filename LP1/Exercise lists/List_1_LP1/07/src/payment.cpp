/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/payment.hpp"

using namespace std;

payment::payment()
{
        this->setName("");
        this->setPaymentValue(0.0);

} // end constructor

payment::payment(string name, double payment_value)
{
        this->setName(name);
        this->setPaymentValue(payment_value);

} // end constructor

void payment::setName(string name)
{
        this->name = name;

} // end setName

void payment::setPaymentValue(double payment_value)
{
        this->payment_value = payment_value;

} // end setPaymentValue

string payment::getName()
{
        return name;

} // end getName

double payment::getPaymentValue()
{
        return payment_value;

} // end getPaymentValue
