#include <iostream>
#include "Point.hpp"

using namespace std;

int main()
{
    Point *tabNumero;
    tabNumero = new Point[4];
    delete [] tabNumero;

    return 0;
}
