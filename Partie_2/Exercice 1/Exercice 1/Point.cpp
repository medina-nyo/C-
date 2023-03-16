#include "Point.h"
#include <iostream>

using namespace std;

Point::Point()
{
    abscisse = ordonnee = 0;
}

Point::Point(double x, double y)
{
    abscisse = x;
    ordonnee = y;
}

void Point::setAbscisse(double x)
{
    abscisse = x;
}

void Point::setOrdonnee(double y)
{
  ordonnee = y;
}

double Point::getAbscisse()
{
    return abscisse;
}

double Point::getOrdonnee()
{
    return ordonnee;
}

void Point::affichage()
{
    cout << "(" << abscisse << "," << ordonnee << ")" << endl;
}
