/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Medic.hpp"
#include "headers/Surgeon.hpp"
#include "headers/Ophthalmologist.hpp"
#include "headers/Otolaryngologist.hpp"
#include "headers/Gynecologist.hpp"

using namespace std;

int main(int argc, char** argv)
{
        Medic medic("Carlos",
                    1.78,
                    80);

        Surgeon surgeon("Joao",
                        1.98,
                        100);

        Ophthalmologist ophthalmologist("Maria",
                                        1.68,
                                        60);

        Otolaryngologist otolaryngologist("Jose",
                                          1.80,
                                          90);

        Gynecologist gynecologist("Geremias",
                                  1.89,
                                  90);

        cout << "Medics: " << endl << endl;

        cout << "Name: " << medic.get_name() << endl;
        cout << "Height: " << medic.get_height() << endl;
        cout << "Weight: " << medic.get_weight() << endl;
        cout << "Specialization Course: " << medic.get_specialization_course() << endl;
        cout << "Procedure: " << medic.get_procedure() << endl << endl;

        cout << "Name: " << surgeon.get_name() << endl;
        cout << "Height: " << surgeon.get_height() << endl;
        cout << "Weight: " << surgeon.get_weight() << endl;
        cout << "Specialization Course: " << surgeon.get_specialization_course() << endl;
        cout << "Procedure: " << surgeon.get_procedure() << endl << endl;

        cout << "Name: " << ophthalmologist.get_name() << endl;
        cout << "Height: " << ophthalmologist.get_height() << endl;
        cout << "Weight: " << ophthalmologist.get_weight() << endl;
        cout << "Specialization Course: " << ophthalmologist.get_specialization_course() << endl;
        cout << "Procedure: " << ophthalmologist.get_procedure() << endl << endl;

        cout << "Name: " << otolaryngologist.get_name() << endl;
        cout << "Height: " << otolaryngologist.get_height() << endl;
        cout << "Weight: " << otolaryngologist.get_weight() << endl;
        cout << "Specialization Course: " << otolaryngologist.get_specialization_course() << endl;
        cout << "Procedure: " << otolaryngologist.get_procedure() << endl << endl;

        cout << "Name: " << gynecologist.get_name() << endl;
        cout << "Height: " << gynecologist.get_height() << endl;
        cout << "Weight: " << gynecologist.get_weight() << endl;
        cout << "Specialization Course: " << gynecologist.get_specialization_course() << endl;
        cout << "Procedure: " << gynecologist.get_procedure() << endl << endl;

}  // end main
