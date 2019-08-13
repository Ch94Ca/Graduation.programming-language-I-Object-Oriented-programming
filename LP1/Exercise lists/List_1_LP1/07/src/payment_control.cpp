/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/payment_control.hpp"

using namespace std;

payment_control::payment_control()
{
        for(int i =0; i < 100; i++)
        {
                this->payments[i] = payment();

        } // end for

} // end constructor

double payment_control::totalPaymentsValue()
{
        double totalPaymentsValue = 0;

        for(int i = 0; i < 100; i++)
        {
                totalPaymentsValue += this->payments[i].getPaymentValue();

        } // end for

        return totalPaymentsValue;

} // end totalPaymentsValue

bool payment_control::paymentForEmployee(string name)
{
        for(int i = 0; i < 100; i++)
        {
                if(this->payments[i].getName() == name)
                {
                        return true;

                } // end if

        } // end for

        return false;

} // end paymentForEmployee

void payment_control::setPayment(int payment_no, string name, double payment_value)
{
        this->payments[payment_no].setName(name);
        this->payments[payment_no].setPaymentValue(payment_value);

} // setPayment

payment payment_control::getPayment(int payment_no)
{
        return (this->payments[payment_no]);

} // end getPayment
