/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef CONTA_HPP
#define CONTA_HPP

#include "IConta.hpp"
#include <string>

class Conta : protected IConta
{

private:

std::string nomeCliente;
std:: string numeroConta;
double salarioMensal;
double saldo;
double limite;

public:

void sacar(double valor);
void depositar(double valor);

void setNomeCliente(std::string nomeCliente);
void setNumeroConta(std::string numeroConta);
void setSalarioMensal(double salarioMensal);
void setSaldo(double saldo);
void setLimite(double limite);

std::string getNomeCliente();
std::string getNumeroConta();
double getSalarioMensal();
double getSaldo();
double getLimite();

}; // end Conta

#endif
