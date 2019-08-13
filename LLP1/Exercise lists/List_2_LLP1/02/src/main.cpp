/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Person.hpp"

using namespace std;

int main(int argc, char** argv)
{

  Adress adress("Rua A", "25", "Mangabeira", "Joao Pessoa", "58000-000");

  Person person0("Carlos");
  Person person1("Eduardo", "(83) 9 9999-9999", 30);
  Person person2("Joao", "(83) 9 9999-9999", 30, adress);

  cout << "Person: " << person0.get_name() << endl;
  cout << "Phone: " << person0.get_phone() << endl;
  cout << "Age: " << person0.get_age() << endl;
  cout << person2.get_string_adress() << endl;

  cout << "Person: " << person1.get_name() << endl;
  cout << "Phone: " << person1.get_phone() << endl;
  cout << "Age: " << person1.get_age() << endl;
  cout << person1.get_string_adress() << endl;

  cout << "Person: " << person2.get_name() << endl;
  cout << "Phone: " << person2.get_phone() << endl;
  cout << "Age: " << person2.get_age() << endl;
  cout << person2.get_string_adress() << endl;

}  // end main
