#include "Point.hpp"
#include <iostream>

using namespace std;

Point::Point(float abs, float ord)
{
    x = abs;
    y = ord;
}
void Point::affichageCoordonnee()
{
    cout << "Point(" << x << ";" << y << ")" << endl;
}

void Point::setAbscisse(float abs)
{
    x = abs;
}

void Point::setOrdonnee(float ord)
{
    y = ord;
}
