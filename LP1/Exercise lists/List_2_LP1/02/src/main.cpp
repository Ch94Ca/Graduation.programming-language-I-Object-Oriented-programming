/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/person.hpp"

using namespace std;

int main(int argc, char** argv)
{
        person person_0, person_1, person_2;

        person_0 = person();
        person_1 = person("Joao");
        person_2 = person("Maria", "0000-0000", 24);

        cout << endl << "Person 0: " << endl << endl;

        cout << "Name: " << person_0.getName() << endl;
        cout << "Age: " << person_0.getAge() << endl;
        cout << "Phone: " << person_0.getPhone() << endl;

        cout << endl << "Person 1: " << endl << endl;

        cout << "Name: " << person_1.getName() << endl;
        cout << "Age: " << person_1.getAge() << endl;
        cout << "Phone: " << person_1.getPhone() << endl;

        cout << endl << "Person 2: " << endl << endl;

        cout << "Name: " << person_2.getName() << endl;
        cout << "Age: " << person_2.getAge() << endl;
        cout << "Phone: " << person_2.getPhone() << endl;

}  // end main
