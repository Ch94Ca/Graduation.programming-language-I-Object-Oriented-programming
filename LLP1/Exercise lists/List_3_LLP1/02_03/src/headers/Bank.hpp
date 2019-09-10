/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef BANK_HPP
#define BANK_HPP

class Bank
{

public:

virtual void withdraw(double value) = 0;
virtual void deposit(double value) = 0;

}; // end Bank

#endif
