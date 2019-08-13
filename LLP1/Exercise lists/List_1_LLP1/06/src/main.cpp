/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include <iomanip>
#include "headers/payment_control.hpp"

using namespace std;

int main(int argc, char** argv)
{
        payment_control payment;

        payment.setPayment(0, "Carlos", 999.99);
        payment.setPayment(1, "Henrique", 999.99);

        cout << "Payment 0: " << endl << endl;

        cout << "Employee: " << (payment.getPayment(0)).getName() << endl;
        cout << "Payment value: " << (payment.getPayment(0)).getPaymentValue() << endl << endl;

        cout << "Payment 1: " << endl << endl;

        cout << "Employee: " << (payment.getPayment(1)).getName() << endl;
        cout << "Payment value: " << (payment.getPayment(1)).getPaymentValue() << endl << endl;

        cout << "Total Payments: " << payment.totalPaymentsValue() << endl << endl;

        cout << "Search test:" << endl << endl;

        cout << "Payment for 'Carlos': " << payment.paymentForEmployee("Carlos") << endl;
        cout << "Payment for 'Henrique': " << payment.paymentForEmployee("Henrique") << endl;
        cout << "Payment for 'Joao': " << payment.paymentForEmployee("Joao") << endl;

}  // end main
