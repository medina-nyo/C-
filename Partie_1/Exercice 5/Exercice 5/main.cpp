#include <iostream>
#include "Cercle.hpp"

using namespace std;

int main()
{
    Cercle C(5,2,3);
    float air = C.airCercle();
    cout << air << endl;
    
    float perimetre = C.perimetreCercle();
    cout << perimetre << endl;
    C.affichageCoordonnee();
    cout << boolalpha << C.interieurPoint(4, 2) << endl;
    
    C.translationCercle(3, 6);
    C.affichageCoordonnee();
    
    C.homothetieCercle(2);
    C.affichageCoordonnee();
    
    return 0;
}
