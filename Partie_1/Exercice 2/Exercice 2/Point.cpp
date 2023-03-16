#include "Point.hpp"
#include <iostream>

using namespace std;


Point::Point(float abs, float ord)
{
    x = abs;
    y = ord;
}

void Point::deplace(float xA, float yA)
{
    x += xA;
    y += yA;
}

float Point::abscisse()
{
    float abs = x;
    return abs;
}

float Point::ordonnee()
{
    float ord = y;
    return ord;
}
