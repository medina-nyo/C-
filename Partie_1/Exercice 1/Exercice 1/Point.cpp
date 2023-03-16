#include <iostream>
#include <string>
#include "Point.hpp"

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

void Point::affichePoint()
{
    cout << "Point A (" << x << ";" << y << ")" << endl;
}

