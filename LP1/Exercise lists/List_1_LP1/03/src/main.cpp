/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

 #include "headers/invoice.hpp"

using namespace std;

int main(int argc, char** argv)
{
        invoice invoice_0, invoice_1, invoice_2;

        invoice_0 = invoice("Keyboard", 1, 1, 199.90);
        invoice_1 = invoice("VGA", 1, 3, 2999.90);
        invoice_2 = invoice("Monitor", 2, 2, 999.90);

        cout << endl << "Invoice 0: " << endl << endl;

        cout << "Description: " << invoice_0.getDescription() << endl;
        cout << "Item No.: " << invoice_0.getNo() << endl;
        cout << "Item Qty: " << invoice_0.getQty() << endl;
        cout << "Item Price: " << invoice_0.getPrice() << endl;
        cout << "Invoice Amount: " << invoice_0.getInvoiceAmount() << endl;

        cout << endl << "Invoice 1: " << endl << endl;

        cout << "Description: " << invoice_1.getDescription() << endl;
        cout << "Item No.: " << invoice_1.getNo() << endl;
        cout << "Item Qty: " << invoice_1.getQty() << endl;
        cout << "Item Price: " << invoice_1.getPrice() << endl;
        cout << "Invoice Amount: " << invoice_1.getInvoiceAmount() << endl;

        cout << endl << "Invoice 2: " << endl << endl;

        cout << "Description: " << invoice_2.getDescription() << endl;
        cout << "Item No.: " << invoice_2.getNo() << endl;
        cout << "Item Qty: " << invoice_2.getQty() << endl;
        cout << "Item Price: " << invoice_2.getPrice() << endl;
        cout << "Invoice Amount: " << invoice_2.getInvoiceAmount() << endl;

}  // end main
