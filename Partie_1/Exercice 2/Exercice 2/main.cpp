#include <iostream>
#include "Point.hpp"

int main()
{
    Point A(1,1);
    float abs = A.abscisse();
    float ord = A.ordonnee();
    cout << "(" << abs << "," << ord << ")" << endl;
    A.deplace(2,4);
    float abscisse = A.abscisse();
    float ordonnee = A.ordonnee();
    cout << "(" << abscisse << "," << ordonnee << ")" << endl;
   
    return 0;
}
