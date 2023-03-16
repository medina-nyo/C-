#include <iostream>
#include "Point.hpp"

int main()
{
    Point A(1,1);
    A.affichePoint();
    A.deplace(2,4);
    A.affichePoint();
    return 0;
}
