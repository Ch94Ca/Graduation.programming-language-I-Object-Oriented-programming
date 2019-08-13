/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef PAYMENT_CONTROL_HPP
#define PAYMENT_CONTROL_HPP

#include "payment.hpp"

using namespace std;

class payment_control
{

private:

payment payments[100];

public:

payment_control();

double totalPaymentsValue();
bool paymentForEmployee(string name);

void setPayment(int payment_no, string name, double payment_value);
payment getPayment(int payment_no);

}; // end payment_control

#endif
