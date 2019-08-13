/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef ICONTA_HPP
#define ICONTA_HPP

class IConta
{

public:

virtual void sacar(double valor) = 0;
virtual void depositar(double valor) = 0;

}; // end IConta

#endif
