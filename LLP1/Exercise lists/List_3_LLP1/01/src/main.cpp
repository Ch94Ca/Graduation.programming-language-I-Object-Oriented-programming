/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Animal.hpp"
#include "headers/Dog.hpp"
#include "headers/Cat.hpp"

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
        vector <Animal*> animals;

        Dog dog("Pluto");

        Cat cat("Garfield");

        animals.push_back(&dog);
        animals.push_back(&cat);

        for(auto i: animals)
        {
                i->get_name();
                i->make_noise();

        } // end for

}  // end main
