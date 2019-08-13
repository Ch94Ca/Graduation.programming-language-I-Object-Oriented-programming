/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>

using namespace std;

class person
{

private:

string name;
string phone;
int age;

public:

person();
person(string name);
person(string name, string phone, int age);

void setName(string name);
void setPhone(string phone);
void setAge(int Age);

string getName();
string getPhone();
int getAge();

}; // end person

#endif
