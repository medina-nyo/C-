#include "Vect.h"
#include <iostream>

using namespace std;

Vect::Vect(double i, double j, double k) : x(i), y(j), z(k){}

void Vect::affichage()
{
    cout << "(" << x << "," << y << "," << z << ")" << endl << endl;
}
