/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include "headers/Circle.hpp"
#include "headers/Square.hpp"
#include "headers/Triangle.hpp"

using namespace std;

int main(int argc, char** argv)
{
        Circle circle0(2.5, "Circle 01");
        Circle circle1(2, "Circle 02");

        Square square0(3, "Square 01");
        Square square1(10, "Square 02");

        Triangle triangle0(3, 10, "Triangle 01");
        Triangle triangle1(2, 5, "Triangle 02");

        cout << "Figure name: " << circle0.get_name() << endl;
        cout << "Radius: " << circle0.get_radius() << endl;
        cout << "Area: " << circle0.get_area() << endl << endl;

        cout << "Figure name: " << circle1.get_name() << endl;
        cout << "Radius: " << circle1.get_radius() << endl;
        cout << "Area: " << circle1.get_area() << endl << endl;

        cout << "Figure name: " << square0.get_name() << endl;
        cout << "Side: " << square0.get_side() << endl;
        cout << "Area: " << square0.get_area() << endl << endl;

        cout << "Figure name: " << square1.get_name() << endl;
        cout << "Side: " << square1.get_side() << endl;
        cout << "Area: " << square1.get_area() << endl << endl;

        cout << "Figure name: " << triangle0.get_name() << endl;
        cout << "Base: " << triangle0.get_base() << endl;
        cout << "Height: " << triangle0.get_height() << endl;
        cout << "Area: " << triangle0.get_area() << endl << endl;

        cout << "Figure name: " << triangle1.get_name() << endl;
        cout << "Base: " << triangle1.get_base() << endl;
        cout << "Height: " << triangle1.get_height() << endl;
        cout << "Area: " << triangle1.get_area() << endl << endl;

}  // end main
